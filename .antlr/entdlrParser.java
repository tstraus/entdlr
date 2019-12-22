// Generated from /home/tstraus/Code/entdlr/entdlr.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class entdlrParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, BOOL=2, BYTES=3, DOUBLE=4, ENUM=5, FIXED32=6, FIXED64=7, FLOAT=8, 
		IMPORT=9, INT32=10, INT64=11, MAP=12, MESSAGE=13, ONEOF=14, OPTION=15, 
		PACKAGE=16, PROTO3_DOUBLE=17, PROTO3_SINGLE=18, PUBLIC=19, REPEATED=20, 
		RESERVED=21, RETURNS=22, RPC=23, SERVICE=24, SFIXED32=25, SFIXED64=26, 
		SINT32=27, SINT64=28, STREAM=29, STRING=30, SYNTAX=31, TO=32, UINT32=33, 
		UINT64=34, WEAK=35, Ident=36, IntLit=37, FloatLit=38, BoolLit=39, StrLit=40, 
		Quote=41, LPAREN=42, RPAREN=43, LBRACE=44, RBRACE=45, LBRACK=46, RBRACK=47, 
		LCHEVR=48, RCHEVR=49, SEMI=50, COMMA=51, DOT=52, MINUS=53, PLUS=54, ASSIGN=55, 
		WS=56, COMMENT=57, LINE_COMMENT=58;
	public static final int
		RULE_proto = 0, RULE_syntax = 1, RULE_importStatement = 2, RULE_packageStatement = 3, 
		RULE_option = 4, RULE_optionName = 5, RULE_optionBody = 6, RULE_optionBodyVariable = 7, 
		RULE_topLevelDef = 8, RULE_message = 9, RULE_messageBody = 10, RULE_enumDefinition = 11, 
		RULE_enumBody = 12, RULE_enumField = 13, RULE_enumValueOption = 14, RULE_service = 15, 
		RULE_rpc = 16, RULE_reserved = 17, RULE_ranges = 18, RULE_range = 19, 
		RULE_fieldNames = 20, RULE_type = 21, RULE_fieldNumber = 22, RULE_field = 23, 
		RULE_fieldOptions = 24, RULE_fieldOption = 25, RULE_oneof = 26, RULE_oneofField = 27, 
		RULE_mapField = 28, RULE_keyType = 29, RULE_reservedWord = 30, RULE_fullIdent = 31, 
		RULE_messageName = 32, RULE_enumName = 33, RULE_messageOrEnumName = 34, 
		RULE_fieldName = 35, RULE_oneofName = 36, RULE_mapName = 37, RULE_serviceName = 38, 
		RULE_rpcName = 39, RULE_messageType = 40, RULE_messageOrEnumType = 41, 
		RULE_emptyStatement = 42, RULE_constant = 43;
	public static final String[] ruleNames = {
		"proto", "syntax", "importStatement", "packageStatement", "option", "optionName", 
		"optionBody", "optionBodyVariable", "topLevelDef", "message", "messageBody", 
		"enumDefinition", "enumBody", "enumField", "enumValueOption", "service", 
		"rpc", "reserved", "ranges", "range", "fieldNames", "type", "fieldNumber", 
		"field", "fieldOptions", "fieldOption", "oneof", "oneofField", "mapField", 
		"keyType", "reservedWord", "fullIdent", "messageName", "enumName", "messageOrEnumName", 
		"fieldName", "oneofName", "mapName", "serviceName", "rpcName", "messageType", 
		"messageOrEnumType", "emptyStatement", "constant"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "':'", "'bool'", "'bytes'", "'double'", "'enum'", "'fixed32'", "'fixed64'", 
		"'float'", "'import'", "'int32'", "'int64'", "'map'", "'message'", "'oneof'", 
		"'option'", "'package'", "'\"proto3\"'", "''proto3''", "'public'", "'repeated'", 
		"'reserved'", "'returns'", "'rpc'", "'service'", "'sfixed32'", "'sfixed64'", 
		"'sint32'", "'sint64'", "'stream'", "'string'", "'syntax'", "'to'", "'uint32'", 
		"'uint64'", "'weak'", null, null, null, null, null, null, "'('", "')'", 
		"'{'", "'}'", "'['", "']'", "'<'", "'>'", "';'", "','", "'.'", "'-'", 
		"'+'", "'='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, "BOOL", "BYTES", "DOUBLE", "ENUM", "FIXED32", "FIXED64", "FLOAT", 
		"IMPORT", "INT32", "INT64", "MAP", "MESSAGE", "ONEOF", "OPTION", "PACKAGE", 
		"PROTO3_DOUBLE", "PROTO3_SINGLE", "PUBLIC", "REPEATED", "RESERVED", "RETURNS", 
		"RPC", "SERVICE", "SFIXED32", "SFIXED64", "SINT32", "SINT64", "STREAM", 
		"STRING", "SYNTAX", "TO", "UINT32", "UINT64", "WEAK", "Ident", "IntLit", 
		"FloatLit", "BoolLit", "StrLit", "Quote", "LPAREN", "RPAREN", "LBRACE", 
		"RBRACE", "LBRACK", "RBRACK", "LCHEVR", "RCHEVR", "SEMI", "COMMA", "DOT", 
		"MINUS", "PLUS", "ASSIGN", "WS", "COMMENT", "LINE_COMMENT"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "entdlr.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public entdlrParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProtoContext extends ParserRuleContext {
		public SyntaxContext syntax() {
			return getRuleContext(SyntaxContext.class,0);
		}
		public TerminalNode EOF() { return getToken(entdlrParser.EOF, 0); }
		public List<ImportStatementContext> importStatement() {
			return getRuleContexts(ImportStatementContext.class);
		}
		public ImportStatementContext importStatement(int i) {
			return getRuleContext(ImportStatementContext.class,i);
		}
		public List<PackageStatementContext> packageStatement() {
			return getRuleContexts(PackageStatementContext.class);
		}
		public PackageStatementContext packageStatement(int i) {
			return getRuleContext(PackageStatementContext.class,i);
		}
		public List<OptionContext> option() {
			return getRuleContexts(OptionContext.class);
		}
		public OptionContext option(int i) {
			return getRuleContext(OptionContext.class,i);
		}
		public List<TopLevelDefContext> topLevelDef() {
			return getRuleContexts(TopLevelDefContext.class);
		}
		public TopLevelDefContext topLevelDef(int i) {
			return getRuleContext(TopLevelDefContext.class,i);
		}
		public List<EmptyStatementContext> emptyStatement() {
			return getRuleContexts(EmptyStatementContext.class);
		}
		public EmptyStatementContext emptyStatement(int i) {
			return getRuleContext(EmptyStatementContext.class,i);
		}
		public ProtoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_proto; }
	}

	public final ProtoContext proto() throws RecognitionException {
		ProtoContext _localctx = new ProtoContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_proto);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			syntax();
			setState(96);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ENUM) | (1L << IMPORT) | (1L << MESSAGE) | (1L << OPTION) | (1L << PACKAGE) | (1L << SERVICE) | (1L << SEMI))) != 0)) {
				{
				setState(94);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case IMPORT:
					{
					setState(89);
					importStatement();
					}
					break;
				case PACKAGE:
					{
					setState(90);
					packageStatement();
					}
					break;
				case OPTION:
					{
					setState(91);
					option();
					}
					break;
				case ENUM:
				case MESSAGE:
				case SERVICE:
					{
					setState(92);
					topLevelDef();
					}
					break;
				case SEMI:
					{
					setState(93);
					emptyStatement();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(98);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(99);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SyntaxContext extends ParserRuleContext {
		public SyntaxContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_syntax; }
	}

	public final SyntaxContext syntax() throws RecognitionException {
		SyntaxContext _localctx = new SyntaxContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_syntax);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(101);
			match(SYNTAX);
			setState(102);
			match(ASSIGN);
			setState(103);
			_la = _input.LA(1);
			if ( !(_la==PROTO3_DOUBLE || _la==PROTO3_SINGLE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(104);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ImportStatementContext extends ParserRuleContext {
		public TerminalNode StrLit() { return getToken(entdlrParser.StrLit, 0); }
		public ImportStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importStatement; }
	}

	public final ImportStatementContext importStatement() throws RecognitionException {
		ImportStatementContext _localctx = new ImportStatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_importStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(106);
			match(IMPORT);
			setState(108);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PUBLIC || _la==WEAK) {
				{
				setState(107);
				_la = _input.LA(1);
				if ( !(_la==PUBLIC || _la==WEAK) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(110);
			match(StrLit);
			setState(111);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PackageStatementContext extends ParserRuleContext {
		public FullIdentContext fullIdent() {
			return getRuleContext(FullIdentContext.class,0);
		}
		public PackageStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_packageStatement; }
	}

	public final PackageStatementContext packageStatement() throws RecognitionException {
		PackageStatementContext _localctx = new PackageStatementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_packageStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			match(PACKAGE);
			setState(114);
			fullIdent();
			setState(115);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OptionContext extends ParserRuleContext {
		public OptionNameContext optionName() {
			return getRuleContext(OptionNameContext.class,0);
		}
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public OptionBodyContext optionBody() {
			return getRuleContext(OptionBodyContext.class,0);
		}
		public OptionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_option; }
	}

	public final OptionContext option() throws RecognitionException {
		OptionContext _localctx = new OptionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_option);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(117);
			match(OPTION);
			setState(118);
			optionName();
			setState(119);
			match(ASSIGN);
			setState(122);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ident:
			case IntLit:
			case FloatLit:
			case BoolLit:
			case StrLit:
			case MINUS:
			case PLUS:
				{
				setState(120);
				constant();
				}
				break;
			case LBRACE:
				{
				setState(121);
				optionBody();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(124);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OptionNameContext extends ParserRuleContext {
		public List<TerminalNode> Ident() { return getTokens(entdlrParser.Ident); }
		public TerminalNode Ident(int i) {
			return getToken(entdlrParser.Ident, i);
		}
		public FullIdentContext fullIdent() {
			return getRuleContext(FullIdentContext.class,0);
		}
		public List<ReservedWordContext> reservedWord() {
			return getRuleContexts(ReservedWordContext.class);
		}
		public ReservedWordContext reservedWord(int i) {
			return getRuleContext(ReservedWordContext.class,i);
		}
		public OptionNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optionName; }
	}

	public final OptionNameContext optionName() throws RecognitionException {
		OptionNameContext _localctx = new OptionNameContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_optionName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ident:
				{
				setState(126);
				match(Ident);
				}
				break;
			case LPAREN:
				{
				setState(127);
				match(LPAREN);
				setState(128);
				fullIdent();
				setState(129);
				match(RPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(140);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==DOT) {
				{
				{
				setState(133);
				match(DOT);
				setState(136);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Ident:
					{
					setState(134);
					match(Ident);
					}
					break;
				case MESSAGE:
				case OPTION:
				case PACKAGE:
				case RPC:
				case SERVICE:
				case STREAM:
				case STRING:
				case SYNTAX:
				case WEAK:
					{
					setState(135);
					reservedWord();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				}
				setState(142);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OptionBodyContext extends ParserRuleContext {
		public List<OptionBodyVariableContext> optionBodyVariable() {
			return getRuleContexts(OptionBodyVariableContext.class);
		}
		public OptionBodyVariableContext optionBodyVariable(int i) {
			return getRuleContext(OptionBodyVariableContext.class,i);
		}
		public OptionBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optionBody; }
	}

	public final OptionBodyContext optionBody() throws RecognitionException {
		OptionBodyContext _localctx = new OptionBodyContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_optionBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(143);
			match(LBRACE);
			setState(147);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Ident || _la==LPAREN) {
				{
				{
				setState(144);
				optionBodyVariable();
				}
				}
				setState(149);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(150);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OptionBodyVariableContext extends ParserRuleContext {
		public OptionNameContext optionName() {
			return getRuleContext(OptionNameContext.class,0);
		}
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public OptionBodyVariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optionBodyVariable; }
	}

	public final OptionBodyVariableContext optionBodyVariable() throws RecognitionException {
		OptionBodyVariableContext _localctx = new OptionBodyVariableContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_optionBodyVariable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			optionName();
			setState(153);
			match(T__0);
			setState(154);
			constant();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TopLevelDefContext extends ParserRuleContext {
		public MessageContext message() {
			return getRuleContext(MessageContext.class,0);
		}
		public EnumDefinitionContext enumDefinition() {
			return getRuleContext(EnumDefinitionContext.class,0);
		}
		public ServiceContext service() {
			return getRuleContext(ServiceContext.class,0);
		}
		public TopLevelDefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_topLevelDef; }
	}

	public final TopLevelDefContext topLevelDef() throws RecognitionException {
		TopLevelDefContext _localctx = new TopLevelDefContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_topLevelDef);
		try {
			setState(159);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case MESSAGE:
				enterOuterAlt(_localctx, 1);
				{
				setState(156);
				message();
				}
				break;
			case ENUM:
				enterOuterAlt(_localctx, 2);
				{
				setState(157);
				enumDefinition();
				}
				break;
			case SERVICE:
				enterOuterAlt(_localctx, 3);
				{
				setState(158);
				service();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MessageContext extends ParserRuleContext {
		public MessageNameContext messageName() {
			return getRuleContext(MessageNameContext.class,0);
		}
		public MessageBodyContext messageBody() {
			return getRuleContext(MessageBodyContext.class,0);
		}
		public MessageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_message; }
	}

	public final MessageContext message() throws RecognitionException {
		MessageContext _localctx = new MessageContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_message);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(161);
			match(MESSAGE);
			setState(162);
			messageName();
			setState(163);
			messageBody();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MessageBodyContext extends ParserRuleContext {
		public List<FieldContext> field() {
			return getRuleContexts(FieldContext.class);
		}
		public FieldContext field(int i) {
			return getRuleContext(FieldContext.class,i);
		}
		public List<EnumDefinitionContext> enumDefinition() {
			return getRuleContexts(EnumDefinitionContext.class);
		}
		public EnumDefinitionContext enumDefinition(int i) {
			return getRuleContext(EnumDefinitionContext.class,i);
		}
		public List<MessageContext> message() {
			return getRuleContexts(MessageContext.class);
		}
		public MessageContext message(int i) {
			return getRuleContext(MessageContext.class,i);
		}
		public List<OptionContext> option() {
			return getRuleContexts(OptionContext.class);
		}
		public OptionContext option(int i) {
			return getRuleContext(OptionContext.class,i);
		}
		public List<OneofContext> oneof() {
			return getRuleContexts(OneofContext.class);
		}
		public OneofContext oneof(int i) {
			return getRuleContext(OneofContext.class,i);
		}
		public List<MapFieldContext> mapField() {
			return getRuleContexts(MapFieldContext.class);
		}
		public MapFieldContext mapField(int i) {
			return getRuleContext(MapFieldContext.class,i);
		}
		public List<ReservedContext> reserved() {
			return getRuleContexts(ReservedContext.class);
		}
		public ReservedContext reserved(int i) {
			return getRuleContext(ReservedContext.class,i);
		}
		public List<EmptyStatementContext> emptyStatement() {
			return getRuleContexts(EmptyStatementContext.class);
		}
		public EmptyStatementContext emptyStatement(int i) {
			return getRuleContext(EmptyStatementContext.class,i);
		}
		public MessageBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_messageBody; }
	}

	public final MessageBodyContext messageBody() throws RecognitionException {
		MessageBodyContext _localctx = new MessageBodyContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_messageBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(165);
			match(LBRACE);
			setState(176);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BOOL) | (1L << BYTES) | (1L << DOUBLE) | (1L << ENUM) | (1L << FIXED32) | (1L << FIXED64) | (1L << FLOAT) | (1L << INT32) | (1L << INT64) | (1L << MAP) | (1L << MESSAGE) | (1L << ONEOF) | (1L << OPTION) | (1L << PACKAGE) | (1L << REPEATED) | (1L << RESERVED) | (1L << RPC) | (1L << SERVICE) | (1L << SFIXED32) | (1L << SFIXED64) | (1L << SINT32) | (1L << SINT64) | (1L << STREAM) | (1L << STRING) | (1L << SYNTAX) | (1L << UINT32) | (1L << UINT64) | (1L << WEAK) | (1L << Ident) | (1L << SEMI) | (1L << DOT))) != 0)) {
				{
				setState(174);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
				case 1:
					{
					setState(166);
					field();
					}
					break;
				case 2:
					{
					setState(167);
					enumDefinition();
					}
					break;
				case 3:
					{
					setState(168);
					message();
					}
					break;
				case 4:
					{
					setState(169);
					option();
					}
					break;
				case 5:
					{
					setState(170);
					oneof();
					}
					break;
				case 6:
					{
					setState(171);
					mapField();
					}
					break;
				case 7:
					{
					setState(172);
					reserved();
					}
					break;
				case 8:
					{
					setState(173);
					emptyStatement();
					}
					break;
				}
				}
				setState(178);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(179);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumDefinitionContext extends ParserRuleContext {
		public EnumNameContext enumName() {
			return getRuleContext(EnumNameContext.class,0);
		}
		public EnumBodyContext enumBody() {
			return getRuleContext(EnumBodyContext.class,0);
		}
		public EnumDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumDefinition; }
	}

	public final EnumDefinitionContext enumDefinition() throws RecognitionException {
		EnumDefinitionContext _localctx = new EnumDefinitionContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_enumDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(181);
			match(ENUM);
			setState(182);
			enumName();
			setState(183);
			enumBody();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumBodyContext extends ParserRuleContext {
		public List<OptionContext> option() {
			return getRuleContexts(OptionContext.class);
		}
		public OptionContext option(int i) {
			return getRuleContext(OptionContext.class,i);
		}
		public List<EnumFieldContext> enumField() {
			return getRuleContexts(EnumFieldContext.class);
		}
		public EnumFieldContext enumField(int i) {
			return getRuleContext(EnumFieldContext.class,i);
		}
		public List<EmptyStatementContext> emptyStatement() {
			return getRuleContexts(EmptyStatementContext.class);
		}
		public EmptyStatementContext emptyStatement(int i) {
			return getRuleContext(EmptyStatementContext.class,i);
		}
		public EnumBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumBody; }
	}

	public final EnumBodyContext enumBody() throws RecognitionException {
		EnumBodyContext _localctx = new EnumBodyContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_enumBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			match(LBRACE);
			setState(191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << OPTION) | (1L << Ident) | (1L << SEMI))) != 0)) {
				{
				setState(189);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case OPTION:
					{
					setState(186);
					option();
					}
					break;
				case Ident:
					{
					setState(187);
					enumField();
					}
					break;
				case SEMI:
					{
					setState(188);
					emptyStatement();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(193);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(194);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumFieldContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public TerminalNode IntLit() { return getToken(entdlrParser.IntLit, 0); }
		public List<EnumValueOptionContext> enumValueOption() {
			return getRuleContexts(EnumValueOptionContext.class);
		}
		public EnumValueOptionContext enumValueOption(int i) {
			return getRuleContext(EnumValueOptionContext.class,i);
		}
		public EnumFieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumField; }
	}

	public final EnumFieldContext enumField() throws RecognitionException {
		EnumFieldContext _localctx = new EnumFieldContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_enumField);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(196);
			match(Ident);
			setState(197);
			match(ASSIGN);
			setState(199);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MINUS) {
				{
				setState(198);
				match(MINUS);
				}
			}

			setState(201);
			match(IntLit);
			setState(213);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LBRACK) {
				{
				setState(202);
				match(LBRACK);
				setState(203);
				enumValueOption();
				setState(208);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(204);
					match(COMMA);
					setState(205);
					enumValueOption();
					}
					}
					setState(210);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(211);
				match(RBRACK);
				}
			}

			setState(215);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumValueOptionContext extends ParserRuleContext {
		public OptionNameContext optionName() {
			return getRuleContext(OptionNameContext.class,0);
		}
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public EnumValueOptionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumValueOption; }
	}

	public final EnumValueOptionContext enumValueOption() throws RecognitionException {
		EnumValueOptionContext _localctx = new EnumValueOptionContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_enumValueOption);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			optionName();
			setState(218);
			match(ASSIGN);
			setState(219);
			constant();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ServiceContext extends ParserRuleContext {
		public ServiceNameContext serviceName() {
			return getRuleContext(ServiceNameContext.class,0);
		}
		public List<OptionContext> option() {
			return getRuleContexts(OptionContext.class);
		}
		public OptionContext option(int i) {
			return getRuleContext(OptionContext.class,i);
		}
		public List<RpcContext> rpc() {
			return getRuleContexts(RpcContext.class);
		}
		public RpcContext rpc(int i) {
			return getRuleContext(RpcContext.class,i);
		}
		public List<EmptyStatementContext> emptyStatement() {
			return getRuleContexts(EmptyStatementContext.class);
		}
		public EmptyStatementContext emptyStatement(int i) {
			return getRuleContext(EmptyStatementContext.class,i);
		}
		public ServiceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_service; }
	}

	public final ServiceContext service() throws RecognitionException {
		ServiceContext _localctx = new ServiceContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_service);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(221);
			match(SERVICE);
			setState(222);
			serviceName();
			setState(223);
			match(LBRACE);
			setState(229);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << OPTION) | (1L << RPC) | (1L << SEMI))) != 0)) {
				{
				setState(227);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case OPTION:
					{
					setState(224);
					option();
					}
					break;
				case RPC:
					{
					setState(225);
					rpc();
					}
					break;
				case SEMI:
					{
					setState(226);
					emptyStatement();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(232);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RpcContext extends ParserRuleContext {
		public RpcNameContext rpcName() {
			return getRuleContext(RpcNameContext.class,0);
		}
		public List<MessageTypeContext> messageType() {
			return getRuleContexts(MessageTypeContext.class);
		}
		public MessageTypeContext messageType(int i) {
			return getRuleContext(MessageTypeContext.class,i);
		}
		public List<OptionContext> option() {
			return getRuleContexts(OptionContext.class);
		}
		public OptionContext option(int i) {
			return getRuleContext(OptionContext.class,i);
		}
		public List<EmptyStatementContext> emptyStatement() {
			return getRuleContexts(EmptyStatementContext.class);
		}
		public EmptyStatementContext emptyStatement(int i) {
			return getRuleContext(EmptyStatementContext.class,i);
		}
		public RpcContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rpc; }
	}

	public final RpcContext rpc() throws RecognitionException {
		RpcContext _localctx = new RpcContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_rpc);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(234);
			match(RPC);
			setState(235);
			rpcName();
			setState(236);
			match(LPAREN);
			setState(238);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STREAM) {
				{
				setState(237);
				match(STREAM);
				}
			}

			setState(240);
			messageType();
			setState(241);
			match(RPAREN);
			setState(242);
			match(RETURNS);
			setState(243);
			match(LPAREN);
			setState(245);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STREAM) {
				{
				setState(244);
				match(STREAM);
				}
			}

			setState(247);
			messageType();
			setState(248);
			match(RPAREN);
			setState(259);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LBRACE:
				{
				{
				setState(249);
				match(LBRACE);
				setState(254);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==OPTION || _la==SEMI) {
					{
					setState(252);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case OPTION:
						{
						setState(250);
						option();
						}
						break;
					case SEMI:
						{
						setState(251);
						emptyStatement();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					setState(256);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(257);
				match(RBRACE);
				}
				}
				break;
			case SEMI:
				{
				setState(258);
				match(SEMI);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ReservedContext extends ParserRuleContext {
		public RangesContext ranges() {
			return getRuleContext(RangesContext.class,0);
		}
		public FieldNamesContext fieldNames() {
			return getRuleContext(FieldNamesContext.class,0);
		}
		public ReservedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_reserved; }
	}

	public final ReservedContext reserved() throws RecognitionException {
		ReservedContext _localctx = new ReservedContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_reserved);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(261);
			match(RESERVED);
			setState(264);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IntLit:
				{
				setState(262);
				ranges();
				}
				break;
			case StrLit:
				{
				setState(263);
				fieldNames();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(266);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RangesContext extends ParserRuleContext {
		public List<RangeContext> range() {
			return getRuleContexts(RangeContext.class);
		}
		public RangeContext range(int i) {
			return getRuleContext(RangeContext.class,i);
		}
		public RangesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ranges; }
	}

	public final RangesContext ranges() throws RecognitionException {
		RangesContext _localctx = new RangesContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_ranges);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(268);
			range();
			setState(273);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(269);
				match(COMMA);
				setState(270);
				range();
				}
				}
				setState(275);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RangeContext extends ParserRuleContext {
		public List<TerminalNode> IntLit() { return getTokens(entdlrParser.IntLit); }
		public TerminalNode IntLit(int i) {
			return getToken(entdlrParser.IntLit, i);
		}
		public RangeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_range; }
	}

	public final RangeContext range() throws RecognitionException {
		RangeContext _localctx = new RangeContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_range);
		try {
			setState(280);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(276);
				match(IntLit);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(277);
				match(IntLit);
				setState(278);
				match(TO);
				setState(279);
				match(IntLit);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldNamesContext extends ParserRuleContext {
		public List<TerminalNode> StrLit() { return getTokens(entdlrParser.StrLit); }
		public TerminalNode StrLit(int i) {
			return getToken(entdlrParser.StrLit, i);
		}
		public FieldNamesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldNames; }
	}

	public final FieldNamesContext fieldNames() throws RecognitionException {
		FieldNamesContext _localctx = new FieldNamesContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_fieldNames);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(282);
			match(StrLit);
			setState(287);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(283);
				match(COMMA);
				setState(284);
				match(StrLit);
				}
				}
				setState(289);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public MessageOrEnumTypeContext messageOrEnumType() {
			return getRuleContext(MessageOrEnumTypeContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_type);
		int _la;
		try {
			setState(292);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(290);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BOOL) | (1L << BYTES) | (1L << DOUBLE) | (1L << FIXED32) | (1L << FIXED64) | (1L << FLOAT) | (1L << INT32) | (1L << INT64) | (1L << SFIXED32) | (1L << SFIXED64) | (1L << SINT32) | (1L << SINT64) | (1L << STRING) | (1L << UINT32) | (1L << UINT64))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(291);
				messageOrEnumType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldNumberContext extends ParserRuleContext {
		public TerminalNode IntLit() { return getToken(entdlrParser.IntLit, 0); }
		public FieldNumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldNumber; }
	}

	public final FieldNumberContext fieldNumber() throws RecognitionException {
		FieldNumberContext _localctx = new FieldNumberContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_fieldNumber);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(294);
			match(IntLit);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public FieldNumberContext fieldNumber() {
			return getRuleContext(FieldNumberContext.class,0);
		}
		public FieldOptionsContext fieldOptions() {
			return getRuleContext(FieldOptionsContext.class,0);
		}
		public FieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_field; }
	}

	public final FieldContext field() throws RecognitionException {
		FieldContext _localctx = new FieldContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_field);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(297);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==REPEATED) {
				{
				setState(296);
				match(REPEATED);
				}
			}

			setState(299);
			type();
			setState(300);
			fieldName();
			setState(301);
			match(ASSIGN);
			setState(302);
			fieldNumber();
			setState(307);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LBRACK) {
				{
				setState(303);
				match(LBRACK);
				setState(304);
				fieldOptions();
				setState(305);
				match(RBRACK);
				}
			}

			setState(309);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldOptionsContext extends ParserRuleContext {
		public List<FieldOptionContext> fieldOption() {
			return getRuleContexts(FieldOptionContext.class);
		}
		public FieldOptionContext fieldOption(int i) {
			return getRuleContext(FieldOptionContext.class,i);
		}
		public FieldOptionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldOptions; }
	}

	public final FieldOptionsContext fieldOptions() throws RecognitionException {
		FieldOptionsContext _localctx = new FieldOptionsContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_fieldOptions);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(311);
			fieldOption();
			setState(316);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(312);
				match(COMMA);
				setState(313);
				fieldOption();
				}
				}
				setState(318);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldOptionContext extends ParserRuleContext {
		public OptionNameContext optionName() {
			return getRuleContext(OptionNameContext.class,0);
		}
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public FieldOptionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldOption; }
	}

	public final FieldOptionContext fieldOption() throws RecognitionException {
		FieldOptionContext _localctx = new FieldOptionContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_fieldOption);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(319);
			optionName();
			setState(320);
			match(ASSIGN);
			setState(321);
			constant();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OneofContext extends ParserRuleContext {
		public OneofNameContext oneofName() {
			return getRuleContext(OneofNameContext.class,0);
		}
		public List<OneofFieldContext> oneofField() {
			return getRuleContexts(OneofFieldContext.class);
		}
		public OneofFieldContext oneofField(int i) {
			return getRuleContext(OneofFieldContext.class,i);
		}
		public List<EmptyStatementContext> emptyStatement() {
			return getRuleContexts(EmptyStatementContext.class);
		}
		public EmptyStatementContext emptyStatement(int i) {
			return getRuleContext(EmptyStatementContext.class,i);
		}
		public OneofContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_oneof; }
	}

	public final OneofContext oneof() throws RecognitionException {
		OneofContext _localctx = new OneofContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_oneof);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(323);
			match(ONEOF);
			setState(324);
			oneofName();
			setState(325);
			match(LBRACE);
			setState(330);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BOOL) | (1L << BYTES) | (1L << DOUBLE) | (1L << FIXED32) | (1L << FIXED64) | (1L << FLOAT) | (1L << INT32) | (1L << INT64) | (1L << MESSAGE) | (1L << OPTION) | (1L << PACKAGE) | (1L << RPC) | (1L << SERVICE) | (1L << SFIXED32) | (1L << SFIXED64) | (1L << SINT32) | (1L << SINT64) | (1L << STREAM) | (1L << STRING) | (1L << SYNTAX) | (1L << UINT32) | (1L << UINT64) | (1L << WEAK) | (1L << Ident) | (1L << SEMI) | (1L << DOT))) != 0)) {
				{
				setState(328);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case BOOL:
				case BYTES:
				case DOUBLE:
				case FIXED32:
				case FIXED64:
				case FLOAT:
				case INT32:
				case INT64:
				case MESSAGE:
				case OPTION:
				case PACKAGE:
				case RPC:
				case SERVICE:
				case SFIXED32:
				case SFIXED64:
				case SINT32:
				case SINT64:
				case STREAM:
				case STRING:
				case SYNTAX:
				case UINT32:
				case UINT64:
				case WEAK:
				case Ident:
				case DOT:
					{
					setState(326);
					oneofField();
					}
					break;
				case SEMI:
					{
					setState(327);
					emptyStatement();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(332);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(333);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OneofFieldContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public FieldNumberContext fieldNumber() {
			return getRuleContext(FieldNumberContext.class,0);
		}
		public FieldOptionsContext fieldOptions() {
			return getRuleContext(FieldOptionsContext.class,0);
		}
		public OneofFieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_oneofField; }
	}

	public final OneofFieldContext oneofField() throws RecognitionException {
		OneofFieldContext _localctx = new OneofFieldContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_oneofField);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(335);
			type();
			setState(336);
			fieldName();
			setState(337);
			match(ASSIGN);
			setState(338);
			fieldNumber();
			setState(343);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LBRACK) {
				{
				setState(339);
				match(LBRACK);
				setState(340);
				fieldOptions();
				setState(341);
				match(RBRACK);
				}
			}

			setState(345);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MapFieldContext extends ParserRuleContext {
		public KeyTypeContext keyType() {
			return getRuleContext(KeyTypeContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public MapNameContext mapName() {
			return getRuleContext(MapNameContext.class,0);
		}
		public FieldNumberContext fieldNumber() {
			return getRuleContext(FieldNumberContext.class,0);
		}
		public FieldOptionsContext fieldOptions() {
			return getRuleContext(FieldOptionsContext.class,0);
		}
		public MapFieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mapField; }
	}

	public final MapFieldContext mapField() throws RecognitionException {
		MapFieldContext _localctx = new MapFieldContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_mapField);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(347);
			match(MAP);
			setState(348);
			match(LCHEVR);
			setState(349);
			keyType();
			setState(350);
			match(COMMA);
			setState(351);
			type();
			setState(352);
			match(RCHEVR);
			setState(353);
			mapName();
			setState(354);
			match(ASSIGN);
			setState(355);
			fieldNumber();
			setState(360);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LBRACK) {
				{
				setState(356);
				match(LBRACK);
				setState(357);
				fieldOptions();
				setState(358);
				match(RBRACK);
				}
			}

			setState(362);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class KeyTypeContext extends ParserRuleContext {
		public KeyTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyType; }
	}

	public final KeyTypeContext keyType() throws RecognitionException {
		KeyTypeContext _localctx = new KeyTypeContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_keyType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(364);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BOOL) | (1L << FIXED32) | (1L << FIXED64) | (1L << INT32) | (1L << INT64) | (1L << SFIXED32) | (1L << SFIXED64) | (1L << SINT32) | (1L << SINT64) | (1L << STRING) | (1L << UINT32) | (1L << UINT64))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ReservedWordContext extends ParserRuleContext {
		public TerminalNode MESSAGE() { return getToken(entdlrParser.MESSAGE, 0); }
		public TerminalNode OPTION() { return getToken(entdlrParser.OPTION, 0); }
		public TerminalNode PACKAGE() { return getToken(entdlrParser.PACKAGE, 0); }
		public TerminalNode SERVICE() { return getToken(entdlrParser.SERVICE, 0); }
		public TerminalNode STREAM() { return getToken(entdlrParser.STREAM, 0); }
		public TerminalNode STRING() { return getToken(entdlrParser.STRING, 0); }
		public TerminalNode SYNTAX() { return getToken(entdlrParser.SYNTAX, 0); }
		public TerminalNode WEAK() { return getToken(entdlrParser.WEAK, 0); }
		public TerminalNode RPC() { return getToken(entdlrParser.RPC, 0); }
		public ReservedWordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_reservedWord; }
	}

	public final ReservedWordContext reservedWord() throws RecognitionException {
		ReservedWordContext _localctx = new ReservedWordContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_reservedWord);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(366);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MESSAGE) | (1L << OPTION) | (1L << PACKAGE) | (1L << RPC) | (1L << SERVICE) | (1L << STREAM) | (1L << STRING) | (1L << SYNTAX) | (1L << WEAK))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FullIdentContext extends ParserRuleContext {
		public List<TerminalNode> Ident() { return getTokens(entdlrParser.Ident); }
		public TerminalNode Ident(int i) {
			return getToken(entdlrParser.Ident, i);
		}
		public FullIdentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fullIdent; }
	}

	public final FullIdentContext fullIdent() throws RecognitionException {
		FullIdentContext _localctx = new FullIdentContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_fullIdent);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(368);
			match(Ident);
			setState(373);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==DOT) {
				{
				{
				setState(369);
				match(DOT);
				setState(370);
				match(Ident);
				}
				}
				setState(375);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MessageNameContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public MessageNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_messageName; }
	}

	public final MessageNameContext messageName() throws RecognitionException {
		MessageNameContext _localctx = new MessageNameContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_messageName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(376);
			match(Ident);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumNameContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public EnumNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumName; }
	}

	public final EnumNameContext enumName() throws RecognitionException {
		EnumNameContext _localctx = new EnumNameContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_enumName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(378);
			match(Ident);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MessageOrEnumNameContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public MessageOrEnumNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_messageOrEnumName; }
	}

	public final MessageOrEnumNameContext messageOrEnumName() throws RecognitionException {
		MessageOrEnumNameContext _localctx = new MessageOrEnumNameContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_messageOrEnumName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(380);
			match(Ident);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldNameContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public ReservedWordContext reservedWord() {
			return getRuleContext(ReservedWordContext.class,0);
		}
		public FieldNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldName; }
	}

	public final FieldNameContext fieldName() throws RecognitionException {
		FieldNameContext _localctx = new FieldNameContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_fieldName);
		try {
			setState(384);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(382);
				match(Ident);
				}
				break;
			case MESSAGE:
			case OPTION:
			case PACKAGE:
			case RPC:
			case SERVICE:
			case STREAM:
			case STRING:
			case SYNTAX:
			case WEAK:
				enterOuterAlt(_localctx, 2);
				{
				setState(383);
				reservedWord();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OneofNameContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public OneofNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_oneofName; }
	}

	public final OneofNameContext oneofName() throws RecognitionException {
		OneofNameContext _localctx = new OneofNameContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_oneofName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(386);
			match(Ident);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MapNameContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public MapNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mapName; }
	}

	public final MapNameContext mapName() throws RecognitionException {
		MapNameContext _localctx = new MapNameContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_mapName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(388);
			match(Ident);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ServiceNameContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public ServiceNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_serviceName; }
	}

	public final ServiceNameContext serviceName() throws RecognitionException {
		ServiceNameContext _localctx = new ServiceNameContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_serviceName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(390);
			match(Ident);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RpcNameContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(entdlrParser.Ident, 0); }
		public RpcNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rpcName; }
	}

	public final RpcNameContext rpcName() throws RecognitionException {
		RpcNameContext _localctx = new RpcNameContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_rpcName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(392);
			match(Ident);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MessageTypeContext extends ParserRuleContext {
		public MessageNameContext messageName() {
			return getRuleContext(MessageNameContext.class,0);
		}
		public List<TerminalNode> Ident() { return getTokens(entdlrParser.Ident); }
		public TerminalNode Ident(int i) {
			return getToken(entdlrParser.Ident, i);
		}
		public MessageTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_messageType; }
	}

	public final MessageTypeContext messageType() throws RecognitionException {
		MessageTypeContext _localctx = new MessageTypeContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_messageType);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(395);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT) {
				{
				setState(394);
				match(DOT);
				}
			}

			setState(401);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,38,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(397);
					match(Ident);
					setState(398);
					match(DOT);
					}
					} 
				}
				setState(403);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,38,_ctx);
			}
			setState(404);
			messageName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MessageOrEnumTypeContext extends ParserRuleContext {
		public MessageOrEnumNameContext messageOrEnumName() {
			return getRuleContext(MessageOrEnumNameContext.class,0);
		}
		public List<TerminalNode> Ident() { return getTokens(entdlrParser.Ident); }
		public TerminalNode Ident(int i) {
			return getToken(entdlrParser.Ident, i);
		}
		public List<ReservedWordContext> reservedWord() {
			return getRuleContexts(ReservedWordContext.class);
		}
		public ReservedWordContext reservedWord(int i) {
			return getRuleContext(ReservedWordContext.class,i);
		}
		public MessageOrEnumTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_messageOrEnumType; }
	}

	public final MessageOrEnumTypeContext messageOrEnumType() throws RecognitionException {
		MessageOrEnumTypeContext _localctx = new MessageOrEnumTypeContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_messageOrEnumType);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(407);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT) {
				{
				setState(406);
				match(DOT);
				}
			}

			setState(416);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(411);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case Ident:
						{
						setState(409);
						match(Ident);
						}
						break;
					case MESSAGE:
					case OPTION:
					case PACKAGE:
					case RPC:
					case SERVICE:
					case STREAM:
					case STRING:
					case SYNTAX:
					case WEAK:
						{
						setState(410);
						reservedWord();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					setState(413);
					match(DOT);
					}
					} 
				}
				setState(418);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
			}
			setState(419);
			messageOrEnumName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EmptyStatementContext extends ParserRuleContext {
		public EmptyStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_emptyStatement; }
	}

	public final EmptyStatementContext emptyStatement() throws RecognitionException {
		EmptyStatementContext _localctx = new EmptyStatementContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_emptyStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(421);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantContext extends ParserRuleContext {
		public FullIdentContext fullIdent() {
			return getRuleContext(FullIdentContext.class,0);
		}
		public TerminalNode IntLit() { return getToken(entdlrParser.IntLit, 0); }
		public TerminalNode FloatLit() { return getToken(entdlrParser.FloatLit, 0); }
		public TerminalNode StrLit() { return getToken(entdlrParser.StrLit, 0); }
		public TerminalNode BoolLit() { return getToken(entdlrParser.BoolLit, 0); }
		public ConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant; }
	}

	public final ConstantContext constant() throws RecognitionException {
		ConstantContext _localctx = new ConstantContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_constant);
		int _la;
		try {
			setState(433);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(423);
				fullIdent();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(425);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS || _la==PLUS) {
					{
					setState(424);
					_la = _input.LA(1);
					if ( !(_la==MINUS || _la==PLUS) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				setState(427);
				match(IntLit);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(429);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS || _la==PLUS) {
					{
					setState(428);
					_la = _input.LA(1);
					if ( !(_la==MINUS || _la==PLUS) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				setState(431);
				match(FloatLit);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(432);
				_la = _input.LA(1);
				if ( !(_la==BoolLit || _la==StrLit) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3<\u01b6\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\3\2\3\2\3\2\3\2\3\2\3\2\7\2a\n\2\f\2\16\2d\13\2\3\2\3\2\3\3"+
		"\3\3\3\3\3\3\3\3\3\4\3\4\5\4o\n\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\6\3\6"+
		"\3\6\3\6\3\6\5\6}\n\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\5\7\u0086\n\7\3\7\3"+
		"\7\3\7\5\7\u008b\n\7\7\7\u008d\n\7\f\7\16\7\u0090\13\7\3\b\3\b\7\b\u0094"+
		"\n\b\f\b\16\b\u0097\13\b\3\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\3\n\5\n\u00a2"+
		"\n\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\7\f\u00b1"+
		"\n\f\f\f\16\f\u00b4\13\f\3\f\3\f\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\7"+
		"\16\u00c0\n\16\f\16\16\16\u00c3\13\16\3\16\3\16\3\17\3\17\3\17\5\17\u00ca"+
		"\n\17\3\17\3\17\3\17\3\17\3\17\7\17\u00d1\n\17\f\17\16\17\u00d4\13\17"+
		"\3\17\3\17\5\17\u00d8\n\17\3\17\3\17\3\20\3\20\3\20\3\20\3\21\3\21\3\21"+
		"\3\21\3\21\3\21\7\21\u00e6\n\21\f\21\16\21\u00e9\13\21\3\21\3\21\3\22"+
		"\3\22\3\22\3\22\5\22\u00f1\n\22\3\22\3\22\3\22\3\22\3\22\5\22\u00f8\n"+
		"\22\3\22\3\22\3\22\3\22\3\22\7\22\u00ff\n\22\f\22\16\22\u0102\13\22\3"+
		"\22\3\22\5\22\u0106\n\22\3\23\3\23\3\23\5\23\u010b\n\23\3\23\3\23\3\24"+
		"\3\24\3\24\7\24\u0112\n\24\f\24\16\24\u0115\13\24\3\25\3\25\3\25\3\25"+
		"\5\25\u011b\n\25\3\26\3\26\3\26\7\26\u0120\n\26\f\26\16\26\u0123\13\26"+
		"\3\27\3\27\5\27\u0127\n\27\3\30\3\30\3\31\5\31\u012c\n\31\3\31\3\31\3"+
		"\31\3\31\3\31\3\31\3\31\3\31\5\31\u0136\n\31\3\31\3\31\3\32\3\32\3\32"+
		"\7\32\u013d\n\32\f\32\16\32\u0140\13\32\3\33\3\33\3\33\3\33\3\34\3\34"+
		"\3\34\3\34\3\34\7\34\u014b\n\34\f\34\16\34\u014e\13\34\3\34\3\34\3\35"+
		"\3\35\3\35\3\35\3\35\3\35\3\35\3\35\5\35\u015a\n\35\3\35\3\35\3\36\3\36"+
		"\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u016b\n\36"+
		"\3\36\3\36\3\37\3\37\3 \3 \3!\3!\3!\7!\u0176\n!\f!\16!\u0179\13!\3\"\3"+
		"\"\3#\3#\3$\3$\3%\3%\5%\u0183\n%\3&\3&\3\'\3\'\3(\3(\3)\3)\3*\5*\u018e"+
		"\n*\3*\3*\7*\u0192\n*\f*\16*\u0195\13*\3*\3*\3+\5+\u019a\n+\3+\3+\5+\u019e"+
		"\n+\3+\7+\u01a1\n+\f+\16+\u01a4\13+\3+\3+\3,\3,\3-\3-\5-\u01ac\n-\3-\3"+
		"-\5-\u01b0\n-\3-\3-\5-\u01b4\n-\3-\2\2.\2\4\6\b\n\f\16\20\22\24\26\30"+
		"\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVX\2\t\3\2\23\24\4\2\25\25"+
		"%%\b\2\4\6\b\n\f\r\33\36  #$\b\2\4\4\b\t\f\r\33\36  #$\7\2\17\17\21\22"+
		"\31\32\37!%%\3\2\678\3\2)*\2\u01c4\2Z\3\2\2\2\4g\3\2\2\2\6l\3\2\2\2\b"+
		"s\3\2\2\2\nw\3\2\2\2\f\u0085\3\2\2\2\16\u0091\3\2\2\2\20\u009a\3\2\2\2"+
		"\22\u00a1\3\2\2\2\24\u00a3\3\2\2\2\26\u00a7\3\2\2\2\30\u00b7\3\2\2\2\32"+
		"\u00bb\3\2\2\2\34\u00c6\3\2\2\2\36\u00db\3\2\2\2 \u00df\3\2\2\2\"\u00ec"+
		"\3\2\2\2$\u0107\3\2\2\2&\u010e\3\2\2\2(\u011a\3\2\2\2*\u011c\3\2\2\2,"+
		"\u0126\3\2\2\2.\u0128\3\2\2\2\60\u012b\3\2\2\2\62\u0139\3\2\2\2\64\u0141"+
		"\3\2\2\2\66\u0145\3\2\2\28\u0151\3\2\2\2:\u015d\3\2\2\2<\u016e\3\2\2\2"+
		">\u0170\3\2\2\2@\u0172\3\2\2\2B\u017a\3\2\2\2D\u017c\3\2\2\2F\u017e\3"+
		"\2\2\2H\u0182\3\2\2\2J\u0184\3\2\2\2L\u0186\3\2\2\2N\u0188\3\2\2\2P\u018a"+
		"\3\2\2\2R\u018d\3\2\2\2T\u0199\3\2\2\2V\u01a7\3\2\2\2X\u01b3\3\2\2\2Z"+
		"b\5\4\3\2[a\5\6\4\2\\a\5\b\5\2]a\5\n\6\2^a\5\22\n\2_a\5V,\2`[\3\2\2\2"+
		"`\\\3\2\2\2`]\3\2\2\2`^\3\2\2\2`_\3\2\2\2ad\3\2\2\2b`\3\2\2\2bc\3\2\2"+
		"\2ce\3\2\2\2db\3\2\2\2ef\7\2\2\3f\3\3\2\2\2gh\7!\2\2hi\79\2\2ij\t\2\2"+
		"\2jk\7\64\2\2k\5\3\2\2\2ln\7\13\2\2mo\t\3\2\2nm\3\2\2\2no\3\2\2\2op\3"+
		"\2\2\2pq\7*\2\2qr\7\64\2\2r\7\3\2\2\2st\7\22\2\2tu\5@!\2uv\7\64\2\2v\t"+
		"\3\2\2\2wx\7\21\2\2xy\5\f\7\2y|\79\2\2z}\5X-\2{}\5\16\b\2|z\3\2\2\2|{"+
		"\3\2\2\2}~\3\2\2\2~\177\7\64\2\2\177\13\3\2\2\2\u0080\u0086\7&\2\2\u0081"+
		"\u0082\7,\2\2\u0082\u0083\5@!\2\u0083\u0084\7-\2\2\u0084\u0086\3\2\2\2"+
		"\u0085\u0080\3\2\2\2\u0085\u0081\3\2\2\2\u0086\u008e\3\2\2\2\u0087\u008a"+
		"\7\66\2\2\u0088\u008b\7&\2\2\u0089\u008b\5> \2\u008a\u0088\3\2\2\2\u008a"+
		"\u0089\3\2\2\2\u008b\u008d\3\2\2\2\u008c\u0087\3\2\2\2\u008d\u0090\3\2"+
		"\2\2\u008e\u008c\3\2\2\2\u008e\u008f\3\2\2\2\u008f\r\3\2\2\2\u0090\u008e"+
		"\3\2\2\2\u0091\u0095\7.\2\2\u0092\u0094\5\20\t\2\u0093\u0092\3\2\2\2\u0094"+
		"\u0097\3\2\2\2\u0095\u0093\3\2\2\2\u0095\u0096\3\2\2\2\u0096\u0098\3\2"+
		"\2\2\u0097\u0095\3\2\2\2\u0098\u0099\7/\2\2\u0099\17\3\2\2\2\u009a\u009b"+
		"\5\f\7\2\u009b\u009c\7\3\2\2\u009c\u009d\5X-\2\u009d\21\3\2\2\2\u009e"+
		"\u00a2\5\24\13\2\u009f\u00a2\5\30\r\2\u00a0\u00a2\5 \21\2\u00a1\u009e"+
		"\3\2\2\2\u00a1\u009f\3\2\2\2\u00a1\u00a0\3\2\2\2\u00a2\23\3\2\2\2\u00a3"+
		"\u00a4\7\17\2\2\u00a4\u00a5\5B\"\2\u00a5\u00a6\5\26\f\2\u00a6\25\3\2\2"+
		"\2\u00a7\u00b2\7.\2\2\u00a8\u00b1\5\60\31\2\u00a9\u00b1\5\30\r\2\u00aa"+
		"\u00b1\5\24\13\2\u00ab\u00b1\5\n\6\2\u00ac\u00b1\5\66\34\2\u00ad\u00b1"+
		"\5:\36\2\u00ae\u00b1\5$\23\2\u00af\u00b1\5V,\2\u00b0\u00a8\3\2\2\2\u00b0"+
		"\u00a9\3\2\2\2\u00b0\u00aa\3\2\2\2\u00b0\u00ab\3\2\2\2\u00b0\u00ac\3\2"+
		"\2\2\u00b0\u00ad\3\2\2\2\u00b0\u00ae\3\2\2\2\u00b0\u00af\3\2\2\2\u00b1"+
		"\u00b4\3\2\2\2\u00b2\u00b0\3\2\2\2\u00b2\u00b3\3\2\2\2\u00b3\u00b5\3\2"+
		"\2\2\u00b4\u00b2\3\2\2\2\u00b5\u00b6\7/\2\2\u00b6\27\3\2\2\2\u00b7\u00b8"+
		"\7\7\2\2\u00b8\u00b9\5D#\2\u00b9\u00ba\5\32\16\2\u00ba\31\3\2\2\2\u00bb"+
		"\u00c1\7.\2\2\u00bc\u00c0\5\n\6\2\u00bd\u00c0\5\34\17\2\u00be\u00c0\5"+
		"V,\2\u00bf\u00bc\3\2\2\2\u00bf\u00bd\3\2\2\2\u00bf\u00be\3\2\2\2\u00c0"+
		"\u00c3\3\2\2\2\u00c1\u00bf\3\2\2\2\u00c1\u00c2\3\2\2\2\u00c2\u00c4\3\2"+
		"\2\2\u00c3\u00c1\3\2\2\2\u00c4\u00c5\7/\2\2\u00c5\33\3\2\2\2\u00c6\u00c7"+
		"\7&\2\2\u00c7\u00c9\79\2\2\u00c8\u00ca\7\67\2\2\u00c9\u00c8\3\2\2\2\u00c9"+
		"\u00ca\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb\u00d7\7\'\2\2\u00cc\u00cd\7\60"+
		"\2\2\u00cd\u00d2\5\36\20\2\u00ce\u00cf\7\65\2\2\u00cf\u00d1\5\36\20\2"+
		"\u00d0\u00ce\3\2\2\2\u00d1\u00d4\3\2\2\2\u00d2\u00d0\3\2\2\2\u00d2\u00d3"+
		"\3\2\2\2\u00d3\u00d5\3\2\2\2\u00d4\u00d2\3\2\2\2\u00d5\u00d6\7\61\2\2"+
		"\u00d6\u00d8\3\2\2\2\u00d7\u00cc\3\2\2\2\u00d7\u00d8\3\2\2\2\u00d8\u00d9"+
		"\3\2\2\2\u00d9\u00da\7\64\2\2\u00da\35\3\2\2\2\u00db\u00dc\5\f\7\2\u00dc"+
		"\u00dd\79\2\2\u00dd\u00de\5X-\2\u00de\37\3\2\2\2\u00df\u00e0\7\32\2\2"+
		"\u00e0\u00e1\5N(\2\u00e1\u00e7\7.\2\2\u00e2\u00e6\5\n\6\2\u00e3\u00e6"+
		"\5\"\22\2\u00e4\u00e6\5V,\2\u00e5\u00e2\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5"+
		"\u00e4\3\2\2\2\u00e6\u00e9\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e7\u00e8\3\2"+
		"\2\2\u00e8\u00ea\3\2\2\2\u00e9\u00e7\3\2\2\2\u00ea\u00eb\7/\2\2\u00eb"+
		"!\3\2\2\2\u00ec\u00ed\7\31\2\2\u00ed\u00ee\5P)\2\u00ee\u00f0\7,\2\2\u00ef"+
		"\u00f1\7\37\2\2\u00f0\u00ef\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f2\3"+
		"\2\2\2\u00f2\u00f3\5R*\2\u00f3\u00f4\7-\2\2\u00f4\u00f5\7\30\2\2\u00f5"+
		"\u00f7\7,\2\2\u00f6\u00f8\7\37\2\2\u00f7\u00f6\3\2\2\2\u00f7\u00f8\3\2"+
		"\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fa\5R*\2\u00fa\u0105\7-\2\2\u00fb\u0100"+
		"\7.\2\2\u00fc\u00ff\5\n\6\2\u00fd\u00ff\5V,\2\u00fe\u00fc\3\2\2\2\u00fe"+
		"\u00fd\3\2\2\2\u00ff\u0102\3\2\2\2\u0100\u00fe\3\2\2\2\u0100\u0101\3\2"+
		"\2\2\u0101\u0103\3\2\2\2\u0102\u0100\3\2\2\2\u0103\u0106\7/\2\2\u0104"+
		"\u0106\7\64\2\2\u0105\u00fb\3\2\2\2\u0105\u0104\3\2\2\2\u0106#\3\2\2\2"+
		"\u0107\u010a\7\27\2\2\u0108\u010b\5&\24\2\u0109\u010b\5*\26\2\u010a\u0108"+
		"\3\2\2\2\u010a\u0109\3\2\2\2\u010b\u010c\3\2\2\2\u010c\u010d\7\64\2\2"+
		"\u010d%\3\2\2\2\u010e\u0113\5(\25\2\u010f\u0110\7\65\2\2\u0110\u0112\5"+
		"(\25\2\u0111\u010f\3\2\2\2\u0112\u0115\3\2\2\2\u0113\u0111\3\2\2\2\u0113"+
		"\u0114\3\2\2\2\u0114\'\3\2\2\2\u0115\u0113\3\2\2\2\u0116\u011b\7\'\2\2"+
		"\u0117\u0118\7\'\2\2\u0118\u0119\7\"\2\2\u0119\u011b\7\'\2\2\u011a\u0116"+
		"\3\2\2\2\u011a\u0117\3\2\2\2\u011b)\3\2\2\2\u011c\u0121\7*\2\2\u011d\u011e"+
		"\7\65\2\2\u011e\u0120\7*\2\2\u011f\u011d\3\2\2\2\u0120\u0123\3\2\2\2\u0121"+
		"\u011f\3\2\2\2\u0121\u0122\3\2\2\2\u0122+\3\2\2\2\u0123\u0121\3\2\2\2"+
		"\u0124\u0127\t\4\2\2\u0125\u0127\5T+\2\u0126\u0124\3\2\2\2\u0126\u0125"+
		"\3\2\2\2\u0127-\3\2\2\2\u0128\u0129\7\'\2\2\u0129/\3\2\2\2\u012a\u012c"+
		"\7\26\2\2\u012b\u012a\3\2\2\2\u012b\u012c\3\2\2\2\u012c\u012d\3\2\2\2"+
		"\u012d\u012e\5,\27\2\u012e\u012f\5H%\2\u012f\u0130\79\2\2\u0130\u0135"+
		"\5.\30\2\u0131\u0132\7\60\2\2\u0132\u0133\5\62\32\2\u0133\u0134\7\61\2"+
		"\2\u0134\u0136\3\2\2\2\u0135\u0131\3\2\2\2\u0135\u0136\3\2\2\2\u0136\u0137"+
		"\3\2\2\2\u0137\u0138\7\64\2\2\u0138\61\3\2\2\2\u0139\u013e\5\64\33\2\u013a"+
		"\u013b\7\65\2\2\u013b\u013d\5\64\33\2\u013c\u013a\3\2\2\2\u013d\u0140"+
		"\3\2\2\2\u013e\u013c\3\2\2\2\u013e\u013f\3\2\2\2\u013f\63\3\2\2\2\u0140"+
		"\u013e\3\2\2\2\u0141\u0142\5\f\7\2\u0142\u0143\79\2\2\u0143\u0144\5X-"+
		"\2\u0144\65\3\2\2\2\u0145\u0146\7\20\2\2\u0146\u0147\5J&\2\u0147\u014c"+
		"\7.\2\2\u0148\u014b\58\35\2\u0149\u014b\5V,\2\u014a\u0148\3\2\2\2\u014a"+
		"\u0149\3\2\2\2\u014b\u014e\3\2\2\2\u014c\u014a\3\2\2\2\u014c\u014d\3\2"+
		"\2\2\u014d\u014f\3\2\2\2\u014e\u014c\3\2\2\2\u014f\u0150\7/\2\2\u0150"+
		"\67\3\2\2\2\u0151\u0152\5,\27\2\u0152\u0153\5H%\2\u0153\u0154\79\2\2\u0154"+
		"\u0159\5.\30\2\u0155\u0156\7\60\2\2\u0156\u0157\5\62\32\2\u0157\u0158"+
		"\7\61\2\2\u0158\u015a\3\2\2\2\u0159\u0155\3\2\2\2\u0159\u015a\3\2\2\2"+
		"\u015a\u015b\3\2\2\2\u015b\u015c\7\64\2\2\u015c9\3\2\2\2\u015d\u015e\7"+
		"\16\2\2\u015e\u015f\7\62\2\2\u015f\u0160\5<\37\2\u0160\u0161\7\65\2\2"+
		"\u0161\u0162\5,\27\2\u0162\u0163\7\63\2\2\u0163\u0164\5L\'\2\u0164\u0165"+
		"\79\2\2\u0165\u016a\5.\30\2\u0166\u0167\7\60\2\2\u0167\u0168\5\62\32\2"+
		"\u0168\u0169\7\61\2\2\u0169\u016b\3\2\2\2\u016a\u0166\3\2\2\2\u016a\u016b"+
		"\3\2\2\2\u016b\u016c\3\2\2\2\u016c\u016d\7\64\2\2\u016d;\3\2\2\2\u016e"+
		"\u016f\t\5\2\2\u016f=\3\2\2\2\u0170\u0171\t\6\2\2\u0171?\3\2\2\2\u0172"+
		"\u0177\7&\2\2\u0173\u0174\7\66\2\2\u0174\u0176\7&\2\2\u0175\u0173\3\2"+
		"\2\2\u0176\u0179\3\2\2\2\u0177\u0175\3\2\2\2\u0177\u0178\3\2\2\2\u0178"+
		"A\3\2\2\2\u0179\u0177\3\2\2\2\u017a\u017b\7&\2\2\u017bC\3\2\2\2\u017c"+
		"\u017d\7&\2\2\u017dE\3\2\2\2\u017e\u017f\7&\2\2\u017fG\3\2\2\2\u0180\u0183"+
		"\7&\2\2\u0181\u0183\5> \2\u0182\u0180\3\2\2\2\u0182\u0181\3\2\2\2\u0183"+
		"I\3\2\2\2\u0184\u0185\7&\2\2\u0185K\3\2\2\2\u0186\u0187\7&\2\2\u0187M"+
		"\3\2\2\2\u0188\u0189\7&\2\2\u0189O\3\2\2\2\u018a\u018b\7&\2\2\u018bQ\3"+
		"\2\2\2\u018c\u018e\7\66\2\2\u018d\u018c\3\2\2\2\u018d\u018e\3\2\2\2\u018e"+
		"\u0193\3\2\2\2\u018f\u0190\7&\2\2\u0190\u0192\7\66\2\2\u0191\u018f\3\2"+
		"\2\2\u0192\u0195\3\2\2\2\u0193\u0191\3\2\2\2\u0193\u0194\3\2\2\2\u0194"+
		"\u0196\3\2\2\2\u0195\u0193\3\2\2\2\u0196\u0197\5B\"\2\u0197S\3\2\2\2\u0198"+
		"\u019a\7\66\2\2\u0199\u0198\3\2\2\2\u0199\u019a\3\2\2\2\u019a\u01a2\3"+
		"\2\2\2\u019b\u019e\7&\2\2\u019c\u019e\5> \2\u019d\u019b\3\2\2\2\u019d"+
		"\u019c\3\2\2\2\u019e\u019f\3\2\2\2\u019f\u01a1\7\66\2\2\u01a0\u019d\3"+
		"\2\2\2\u01a1\u01a4\3\2\2\2\u01a2\u01a0\3\2\2\2\u01a2\u01a3\3\2\2\2\u01a3"+
		"\u01a5\3\2\2\2\u01a4\u01a2\3\2\2\2\u01a5\u01a6\5F$\2\u01a6U\3\2\2\2\u01a7"+
		"\u01a8\7\64\2\2\u01a8W\3\2\2\2\u01a9\u01b4\5@!\2\u01aa\u01ac\t\7\2\2\u01ab"+
		"\u01aa\3\2\2\2\u01ab\u01ac\3\2\2\2\u01ac\u01ad\3\2\2\2\u01ad\u01b4\7\'"+
		"\2\2\u01ae\u01b0\t\7\2\2\u01af\u01ae\3\2\2\2\u01af\u01b0\3\2\2\2\u01b0"+
		"\u01b1\3\2\2\2\u01b1\u01b4\7(\2\2\u01b2\u01b4\t\b\2\2\u01b3\u01a9\3\2"+
		"\2\2\u01b3\u01ab\3\2\2\2\u01b3\u01af\3\2\2\2\u01b3\u01b2\3\2\2\2\u01b4"+
		"Y\3\2\2\2/`bn|\u0085\u008a\u008e\u0095\u00a1\u00b0\u00b2\u00bf\u00c1\u00c9"+
		"\u00d2\u00d7\u00e5\u00e7\u00f0\u00f7\u00fe\u0100\u0105\u010a\u0113\u011a"+
		"\u0121\u0126\u012b\u0135\u013e\u014a\u014c\u0159\u016a\u0177\u0182\u018d"+
		"\u0193\u0199\u019d\u01a2\u01ab\u01af\u01b3";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}