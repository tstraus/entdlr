# **ENTDLR**
## **ENT**ity **D**efinition **L**anguage **R**edux
A tool for defining structures and classes generically and generating implementations by templating. An extended version of the FlatBuffers language is used to create these definitions, which can include `namespace`s, `enum`s, `union`s, `struct`s, and `interface`s. Interfaces are useful for defining the pure interface of a library, with the names and signatures of methods. Methods can also be added to structs.

## Definitions
Definitions are what `entdlr` parses into a `Context`. They are what defines your structures and interfaces. 

### Base Types
|signed ints      |unsigned ints      |floats              |other    |
| --------------- | ----------------- | ------------------ | ------- |
|`int8`, `byte`   |`uint8`, `ubyte`   |`float32`, `float`  |`bool`   |
|`int16`, `short` |`uint16`, `ushort` |`float64`, `double` |`string` |
|`int32`, `int`   |`uint32`, `uint`   |                    |         |
|`int64`, `long`  |`uint64`, `ulong`  |                    |         |

### Namespaces
Namespaces are an optional way of grouping your definitions. Definitions without a namespace declaration will be in the global namespace.
```c#
namespace Example; // declare a namespace of Example
```

### Enums
Enums are a way to create named values. The values can manually assigned or automatic. The type of the values can be optionally specified as well, with the default being `int32`.
```c++
enum Direction : uint16 // declare an enum named Direction of type uint16
{
    North, // 0
    South, // 1
    East = 3, // 3
    West // 4
}
```

### Unions
Unions are way to define a type that can be more than one type, but only one at the same time. They can be of any type, base or user defined as well as fixed size arrays.
```c++
union Number // declare a union named Number
{
    uint64,
    [uint32 : 2] // a fixed sized array of 2
}
```

### Structs
Structs can contain multiple fields, defined with a name and a type. Fields can also be fixed length arrays. Structs can also have methods defined on them as well.
```c#
struct Vec3 // declare a struct named Vec3
{
    x : float32; // declare 3 float32 fields
    y : float32;
    z : float32;

    static new() : Vec3; // a static method that returns a new Vec3
    static fromString(str : string) : Vec3; // parameters are assumed to be constant
    cross(other : mut Vec3) : float32; // unless the mut keyword is provided
    dot(other : ref Vec3) : ref float32; // the ref keyword can be used to mark the parameter as a reference or pointer
    mut add(other : ref mut Vec3); // mut can also be used to convey that the method modifies the instance
}
```

### Interfaces
Interfaces are structs without fields which are useful for defining abstract classes as library interfaces.
```c++
interface Time // define a interface named Time
{
    now() : uint64; // give it a method
}
```

### Other Features
Attributes can be added to enum, union, struct, interface, field, and method declarations. Attributes are keys with an optional value. These attributes are passed into the template as members of what they are of. 
```c++
struct Request (correlated) // a key only attribute
{
    name : string (max_length : 16); // a number attrribute
    id : int32 (type : "uuid"); // a string attribute
}
```

Documentation comments can also be added to the same declarations. These are special comments that are also passed into the template.
```c++
/// I'm the doc string for this struct
struct Scalar
{
    length : float64; /// I'm the doc string for this field

    static new() : Scalar; /// I'm the doc string for this method
}
```

## Templates
Templates are what uses the `Context` to create output. They can be written in a template lanuage similar to Jinja called Inja, with user written functions defined in the scripting language Wren. Templates can also be written entirely in Wren, with Wren's console output becoming the template's output. Inja templates are easier to work with but less flexible than full Wren script templates.

### Inja
Inja templates use the filename extension `.tmpl`. Working with the `Context` in Inja is based on iterating over it's lists. `{{  }}` pulls values out of the context. `##` is used for creating whole line statements, `{%  %}` for in line statements. `for` and `if` statements are available. `{#  #}` is used for comments. Functions can be called inside statements with `function_name(arg1, arg2)`, `upper(_)` is one of several functions built into Inja.
```jinja
## for namespace in entdlr.namespaces
{{ namespace.name }}
## for struct in namespace.structs
    {{ struct.name }} : struct
## for field in struct.fields
        {{ field.name }} : {{ upper(field.type) }}{% if field.isArray %}[]{% endif %}
## endfor
## endfor
## endfor
```
If more capability is required in Inja scripts, you may write additional functions in Wren. Wren functions must be defined in a file next to the template file with the same name, but with the filename extension `.wren`. These scripts must have a class named `Functions`, who's static methods are those that are made available in Inja. Other classes and modules can be used in these methods, but they are not directly exposed to Inja. Files that define additional modules must be in the same directory as the template. The value returned from the Wren function is then given to Inja.

```javascript
// [ ./Example.wren ]
class Functions {
    static do_something(what) {
        return "I did the thing -> " + what
    }
}
```
```jinja
{# [ ./Example.tmpl ] #}
## for namespace in entdlr.namespaces
{{ do_something(namespace.name) }}
## endfor
```
If
```c++
namespace Examples;
```
had `Example.tmpl` applied, it would output the following
```
I did the thing -> Examples
```

### Wren
Wren is a simple object oriented scripting languge that in addition to writing functions for Inja, can be used to create standalone templates. When used in this form, Wren's console output becomes the output of the template. Entdlr's internal `Context` is mirrored into an identical class structure inside of wren, which is made available to the user with the `Context` module.
```javascript
import "Context" for Context

var c = Context.get()

for (n in c.namespaces.values) {
    System.print(n.name)

    for (s in n.structs.values) {
        System.print("    " + s.name + " : struct")

        for (f in s.fields.values) {
            System.write("        " + f.name + " : " + f.type)
            if (f.isArray) {
                System.write("[]")
            }
            System.print()
        }
    }
}
```
