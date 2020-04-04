# **ENTDLR**
## **ENT**ity **D**efinition **L**anguage **R**edux
A tool for defining structures and classes generically and generating implementations by templating. An extended version of the FlatBuffers language is used to create these definitions, which can include namespaces, enums, unions, structs, and facilities. Facilities are useful for defining the pure interface of a library, with the names and signatures of methods. Methods can also be added to structs.

## Definitions
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
    static fromString(str : string) : Vec3; // arguemnts are assumed to be constant
    cross(mut other : Vec3) : float32; // unless the mut keyword is there
}
```

### Facilities
Facilities are structs without fields which are useful for defining abstract classes as library interfaces.
```c++
facility Time // define a facility named Time
{
    now() : uint64; // give it a method
}
```

### Other Features
Attributes can be added to enum, union, struct, facility, field, and method declarations. Attributes are keys with an optional value. These attributes are passed into the template as members of what they are of. 
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
