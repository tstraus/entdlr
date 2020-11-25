lexer grammar FlatBuffersLexer;
channels { DOCUMENTATION }

// Lexer rules

INCLUDE : 'include' ;
NAMESPACE : 'namespace' ;
ATTRIBUTE : 'attribute' ;
TABLE : 'table' ;
STRUCT : 'struct' ;
ENUM : 'enum' ;
UNION : 'union' ;
INTERFACE : 'interface' ;

MUTABLE : 'mut' ;
STATIC : 'static' ;
REFERENCE : 'ref' ;

ROOT_TYPE : 'root_type' ;
RPC_SERVICE : 'rpc_service' ;
FILE_EXTENSION : 'file_extension' ;
FILE_IDENTIFIER : 'file_indentifier' ;

STRING_CONSTANT : '"' ~["\r\n]* '"' ;

BASE_TYPE_NAME : 'bool' | 'byte' | 'ubyte' | 'short' | 'ushort' | 'int' | 'uint' | 'float' | 'long' | 'ulong' | 'double' | 'int8' | 'uint8' | 'int16' | 'uint16' | 'int32' | 'uint32' | 'int64' | 'uint64' | 'float32' | 'float64' | 'string' ;

IDENT : [a-zA-Z_] [a-zA-Z0-9_]* ;

HEX_INTEGER_CONSTANT : [-+]? '0' [xX][0-9a-fA-F]+ ;

INTEGER_CONSTANT : [-+]? [0-9]+ | 'true' | 'false' ;

FLOAT_CONSTANT : '-'? [0-9]+ '.' [0-9]+ (('e'|'E') ('+'|'-')? [0-9]+ )? ;

BLOCK_DOC_COMMENT : '/**' .*? '*/' -> channel(DOCUMENTATION);
BLOCK_COMMENT:	'/*' .*? '*/' -> channel(HIDDEN);
DOC_COMMENT : '///' ~[\r\n]* ;//-> channel(DOCUMENTATION);
// fixed original grammar: allow line comments
COMMENT : '//' ~[\r\n]* -> channel(HIDDEN);

SEMICOLON : ';' ;
COLON : ':' ;
PERIOD : '.' ;
COMMA : ',' ;
EQUAL : '=' ;

OPEN_BRACE : '{' ;
CLOSE_BRACE : '}' ;

OPEN_BRACKET : '[' ;
CLOSE_BRACKET : ']' ;

OPEN_PAREN : '(' ;
CLOSE_PAREN : ')' ;

WHITESPACE : [ \t\r\n] -> skip ;
