parser grammar FlatBuffersParser ;
options { tokenVocab = FlatBuffersLexer; }

// Parser rules

schema : include* ( namespace_decl | type_decl | enum_decl | union_decl | root_decl | file_extension_decl | file_identifier_decl | attribute_decl | rpc_decl | interface_decl | service_decl | object | BLOCK_COMMENT)* ;

include : INCLUDE STRING_CONSTANT SEMICOLON ;

namespace_decl : NAMESPACE IDENT ( PERIOD IDENT )* SEMICOLON ;

attribute_decl : ATTRIBUTE STRING_CONSTANT SEMICOLON ;

type_decl : BLOCK_COMMENT? DOC_COMMENT? ( TABLE | STRUCT ) IDENT metadata OPEN_BRACE ( field_decl | method_decl )* CLOSE_BRACE ;

enum_decl : BLOCK_COMMENT? DOC_COMMENT? ENUM IDENT ( COLON type )? metadata OPEN_BRACE commasep_enumval_decl CLOSE_BRACE ;

union_decl : BLOCK_COMMENT? DOC_COMMENT? UNION IDENT metadata OPEN_BRACE commasep_uniontype_decl CLOSE_BRACE ;

root_decl : ROOT_TYPE IDENT SEMICOLON ;

field_decl : BLOCK_COMMENT? IDENT COLON type ( EQUAL scalar )? metadata SEMICOLON DOC_COMMENT? ;

rpc_decl : RPC_SERVICE IDENT OPEN_BRACE rpc_method+ CLOSE_BRACE ;

rpc_method : IDENT OPEN_PAREN IDENT CLOSE_PAREN COLON IDENT metadata SEMICOLON ;

// overload grpc syntax for interfaces
interface_decl : BLOCK_COMMENT? DOC_COMMENT? INTERFACE IDENT metadata OPEN_BRACE method_decl+ CLOSE_BRACE ;

method_decl : BLOCK_COMMENT? ( static_decl | mutable_decl )? IDENT OPEN_PAREN method_parameters CLOSE_PAREN ( COLON method_return_type )? metadata SEMICOLON DOC_COMMENT? ;
method_parameters : ( method_parameter )? ( COMMA method_parameter )* ;
//method_parameter : IDENT COLON reference_decl? mutable_decl? method_type ;
method_parameter : IDENT COLON method_type;
method_return_type : method_type ;
method_type : reference_decl? mutable_decl? type ;
//method_type : reference_decl? ( BASE_TYPE_NAME | ns_ident ) ;
mutable_decl : MUTABLE ;
static_decl : STATIC ;
reference_decl : REFERENCE ;

service_component_type : IDENT ;
service_component_decl : BLOCK_COMMENT? type COLON service_component_type metadata SEMICOLON DOC_COMMENT? ;
service_decl : BLOCK_COMMENT? DOC_COMMENT? SERVICE IDENT metadata OPEN_BRACE service_component_decl+ CLOSE_BRACE ;

// fixed original grammar: allow namespaces for IDENTs
// add fixed size arrays TSS
type : OPEN_BRACKET type ( COLON integer_const )? CLOSE_BRACKET | BASE_TYPE_NAME | ns_ident ;

uniontype_decl : type ;

commasep_uniontype_decl : uniontype_decl ( COMMA uniontype_decl )* COMMA? ;

enumval_decl : ns_ident ( EQUAL integer_const )? ;

commasep_enumval_decl : enumval_decl ( COMMA enumval_decl )* COMMA? ;

ident_with_opt_single_value : IDENT ( COLON single_value )? ;

commasep_ident_with_opt_single_value : ident_with_opt_single_value ( COMMA ident_with_opt_single_value )* ;

metadata : ( OPEN_PAREN commasep_ident_with_opt_single_value CLOSE_PAREN )? ;

// fix original grammar: enum values (IDENT) are allowed as well
scalar : INTEGER_CONSTANT | HEX_INTEGER_CONSTANT | FLOAT_CONSTANT | IDENT ;

object : OPEN_BRACE commasep_ident_with_value CLOSE_BRACE ;

ident_with_value : IDENT COLON value ;

commasep_ident_with_value : ident_with_value ( COMMA ident_with_value )* COMMA? ;

single_value : scalar | STRING_CONSTANT ;

value : single_value | object | OPEN_BRACKET commasep_value CLOSE_BRACKET ;

commasep_value : value( COMMA value )* COMMA? ;

file_extension_decl : FILE_EXTENSION STRING_CONSTANT ;

file_identifier_decl : FILE_IDENTIFIER STRING_CONSTANT ;

ns_ident : IDENT ( PERIOD IDENT )* ;

integer_const :  INTEGER_CONSTANT | HEX_INTEGER_CONSTANT ;
