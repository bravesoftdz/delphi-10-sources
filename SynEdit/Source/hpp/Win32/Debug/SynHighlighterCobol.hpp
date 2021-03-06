﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SynHighlighterCobol.pas' rev: 31.00 (Windows)

#ifndef SynhighlightercobolHPP
#define SynhighlightercobolHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Graphics.hpp>
#include <SynEditTypes.hpp>
#include <SynEditHighlighter.hpp>
#include <SynHighlighterHashEntries.hpp>
#include <SynUnicode.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Synhighlightercobol
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSynCobolSyn;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TtkTokenKind : unsigned char { tkComment, tkIdentifier, tkAIdentifier, tkPreprocessor, tkKey, tkBoolean, tkNull, tkNumber, tkSpace, tkString, tkSequence, tkIndicator, tkTagArea, tkDebugLines, tkUnknown };

enum DECLSPEC_DENUM TRangeState : unsigned char { rsUnknown, rsQuoteString, rsApostString, rsPseudoText, rsQuoteStringMayBe, rsApostStringMayBe };

class PASCALIMPLEMENTATION TSynCobolSyn : public Synedithighlighter::TSynCustomHighlighter
{
	typedef Synedithighlighter::TSynCustomHighlighter inherited;
	
private:
	TRangeState fRange;
	TtkTokenKind fTokenID;
	System::WideChar fIndicator;
	int fCodeStartPos;
	int fCodeMediumPos;
	int fCodeEndPos;
	Synedithighlighter::TSynHighlighterAttributes* fCommentAttri;
	Synedithighlighter::TSynHighlighterAttributes* fIdentifierAttri;
	Synedithighlighter::TSynHighlighterAttributes* fAIdentifierAttri;
	Synedithighlighter::TSynHighlighterAttributes* fPreprocessorAttri;
	Synedithighlighter::TSynHighlighterAttributes* fKeyAttri;
	Synedithighlighter::TSynHighlighterAttributes* fNumberAttri;
	Synedithighlighter::TSynHighlighterAttributes* fBooleanAttri;
	Synedithighlighter::TSynHighlighterAttributes* fSpaceAttri;
	Synedithighlighter::TSynHighlighterAttributes* fStringAttri;
	Synedithighlighter::TSynHighlighterAttributes* fSequenceAttri;
	Synedithighlighter::TSynHighlighterAttributes* fIndicatorAttri;
	Synedithighlighter::TSynHighlighterAttributes* fTagAreaAttri;
	Synedithighlighter::TSynHighlighterAttributes* fDebugLinesAttri;
	Synhighlighterhashentries::TSynHashEntryList* fKeywords;
	void __fastcall DoAddKeyword(System::UnicodeString AKeyword, int AKind);
	int __fastcall HashKey(System::WideChar * Str);
	TtkTokenKind __fastcall IdentKind(System::WideChar * MayBe);
	void __fastcall IdentProc(void);
	void __fastcall UnknownProc(void);
	void __fastcall NullProc(void);
	void __fastcall SpaceProc(void);
	void __fastcall CRProc(void);
	void __fastcall LFProc(void);
	void __fastcall NumberProc(void);
	void __fastcall PointProc(void);
	void __fastcall StringOpenProc(void);
	void __fastcall StringProc(void);
	void __fastcall StringEndProc(void);
	void __fastcall FirstCharsProc(void);
	void __fastcall LastCharsProc(void);
	void __fastcall CommentProc(void);
	void __fastcall DebugProc(void);
	
protected:
	virtual System::UnicodeString __fastcall GetSampleSource(void);
	virtual bool __fastcall IsFilterStored(void);
	void __fastcall NextProcedure(void);
	void __fastcall SetCodeStartPos(int Value);
	void __fastcall SetCodeMediumPos(int Value);
	void __fastcall SetCodeEndPos(int Value);
	
public:
	__fastcall virtual TSynCobolSyn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSynCobolSyn(void);
	__classmethod virtual System::UnicodeString __fastcall GetLanguageName();
	__classmethod virtual System::UnicodeString __fastcall GetFriendlyLanguageName();
	virtual void * __fastcall GetRange(void);
	virtual void __fastcall ResetRange(void);
	virtual void __fastcall SetRange(void * Value);
	virtual Synedithighlighter::TSynHighlighterAttributes* __fastcall GetDefaultAttribute(int Index);
	virtual bool __fastcall GetEol(void);
	TtkTokenKind __fastcall GetTokenID(void);
	virtual Synedithighlighter::TSynHighlighterAttributes* __fastcall GetTokenAttribute(void);
	virtual int __fastcall GetTokenKind(void);
	virtual bool __fastcall IsIdentChar(System::WideChar AChar);
	virtual void __fastcall Next(void);
	
__published:
	__property Synedithighlighter::TSynHighlighterAttributes* CommentAttri = {read=fCommentAttri, write=fCommentAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* IdentifierAttri = {read=fIdentifierAttri, write=fIdentifierAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* AreaAIdentifierAttri = {read=fAIdentifierAttri, write=fAIdentifierAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* PreprocessorAttri = {read=fPreprocessorAttri, write=fPreprocessorAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* KeyAttri = {read=fKeyAttri, write=fKeyAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* NumberAttri = {read=fNumberAttri, write=fNumberAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* BooleanAttri = {read=fBooleanAttri, write=fBooleanAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* SpaceAttri = {read=fSpaceAttri, write=fSpaceAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* StringAttri = {read=fStringAttri, write=fStringAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* SequenceAttri = {read=fSequenceAttri, write=fSequenceAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* IndicatorAttri = {read=fIndicatorAttri, write=fIndicatorAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* TagAreaAttri = {read=fTagAreaAttri, write=fTagAreaAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* DebugLinesAttri = {read=fDebugLinesAttri, write=fDebugLinesAttri};
	__property int AreaAStartPos = {read=fCodeStartPos, write=SetCodeStartPos, nodefault};
	__property int AreaBStartPos = {read=fCodeMediumPos, write=SetCodeMediumPos, nodefault};
	__property int CodeEndPos = {read=fCodeEndPos, write=SetCodeEndPos, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Synhighlightercobol */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYNHIGHLIGHTERCOBOL)
using namespace Synhighlightercobol;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SynhighlightercobolHPP
