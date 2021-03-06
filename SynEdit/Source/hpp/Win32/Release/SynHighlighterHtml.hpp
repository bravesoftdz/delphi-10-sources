﻿// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SynHighlighterHtml.pas' rev: 33.00 (Windows)

#ifndef SynhighlighterhtmlHPP
#define SynhighlighterhtmlHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.WideStrUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <SynEditTypes.hpp>
#include <SynEditHighlighter.hpp>
#include <SynUnicode.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Synhighlighterhtml
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSynHTMLSyn;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TtkTokenKind : unsigned char { tkAmpersand, tkComment, tkIdentifier, tkKey, tkNull, tkSpace, tkSymbol, tkText, tkUndefKey, tkValue };

enum DECLSPEC_DENUM TRangeState : unsigned char { rsAmpersand, rsComment, rsKey, rsParam, rsText, rsUnKnown, rsValue, rsQuoteValue, rsDoubleQuoteValue };

typedef TtkTokenKind __fastcall (__closure *TIdentFuncTableFunc)(int Index);

typedef TIdentFuncTableFunc *PIdentFuncTableFunc;

class PASCALIMPLEMENTATION TSynHTMLSyn : public Synedithighlighter::TSynCustomHighlighter
{
	typedef Synedithighlighter::TSynCustomHighlighter inherited;
	
private:
	int fAndCode;
	TRangeState fRange;
	System::StaticArray<TIdentFuncTableFunc, 2179> fIdentFuncTable;
	TtkTokenKind fTokenID;
	Synedithighlighter::TSynHighlighterAttributes* fAndAttri;
	Synedithighlighter::TSynHighlighterAttributes* fCommentAttri;
	Synedithighlighter::TSynHighlighterAttributes* fIdentifierAttri;
	Synedithighlighter::TSynHighlighterAttributes* fKeyAttri;
	Synedithighlighter::TSynHighlighterAttributes* fSpaceAttri;
	Synedithighlighter::TSynHighlighterAttributes* fSymbolAttri;
	Synedithighlighter::TSynHighlighterAttributes* fTextAttri;
	Synedithighlighter::TSynHighlighterAttributes* fUndefKeyAttri;
	Synedithighlighter::TSynHighlighterAttributes* fValueAttri;
	TtkTokenKind __fastcall AltFunc(int Index);
	TtkTokenKind __fastcall KeyWordFunc(int Index);
	unsigned __fastcall HashKey(System::WideChar * Str);
	TtkTokenKind __fastcall IdentKind(System::WideChar * MayBe);
	void __fastcall InitIdent();
	void __fastcall TextProc();
	void __fastcall CommentProc();
	void __fastcall BraceCloseProc();
	void __fastcall BraceOpenProc();
	void __fastcall CRProc();
	void __fastcall EqualProc();
	void __fastcall IdentProc();
	void __fastcall LFProc();
	void __fastcall NullProc();
	void __fastcall SpaceProc();
	void __fastcall StringProc();
	void __fastcall AmpersandProc();
	
protected:
	virtual System::UnicodeString __fastcall GetSampleSource();
	virtual bool __fastcall IsFilterStored();
	void __fastcall NextProcedure();
	
public:
	__classmethod virtual System::UnicodeString __fastcall GetLanguageName();
	__classmethod virtual System::UnicodeString __fastcall GetFriendlyLanguageName();
	__fastcall virtual TSynHTMLSyn(System::Classes::TComponent* AOwner);
	virtual Synedithighlighter::TSynHighlighterAttributes* __fastcall GetDefaultAttribute(int Index);
	virtual bool __fastcall GetEol();
	virtual void * __fastcall GetRange();
	TtkTokenKind __fastcall GetTokenID();
	virtual Synedithighlighter::TSynHighlighterAttributes* __fastcall GetTokenAttribute();
	virtual int __fastcall GetTokenKind();
	virtual bool __fastcall IsIdentChar(System::WideChar AChar);
	virtual void __fastcall Next();
	virtual void __fastcall SetRange(void * Value);
	virtual void __fastcall ResetRange();
	
__published:
	__property Synedithighlighter::TSynHighlighterAttributes* AndAttri = {read=fAndAttri, write=fAndAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* CommentAttri = {read=fCommentAttri, write=fCommentAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* IdentifierAttri = {read=fIdentifierAttri, write=fIdentifierAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* KeyAttri = {read=fKeyAttri, write=fKeyAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* SpaceAttri = {read=fSpaceAttri, write=fSpaceAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* SymbolAttri = {read=fSymbolAttri, write=fSymbolAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* TextAttri = {read=fTextAttri, write=fTextAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* UndefKeyAttri = {read=fUndefKeyAttri, write=fUndefKeyAttri};
	__property Synedithighlighter::TSynHighlighterAttributes* ValueAttri = {read=fValueAttri, write=fValueAttri};
public:
	/* TSynCustomHighlighter.Destroy */ inline __fastcall virtual ~TSynHTMLSyn() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Byte MAX_ESCAPEAMPS = System::Byte(0xf9);
extern DELPHI_PACKAGE System::StaticArray<System::WideChar *, 249> EscapeAmps;
}	/* namespace Synhighlighterhtml */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYNHIGHLIGHTERHTML)
using namespace Synhighlighterhtml;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SynhighlighterhtmlHPP
