#pragma once

#include <vector>

typedef const char* Chs_t;
typedef const wchar_t* Wcs_t;

struct JString
{
public:
	JString();
	JString(Chs_t p_value);
	JString(Wcs_t p_value);
	JString(JString* p_value);
	~JString();

private:
	const Wcs_t m_values;
	const size_t m_length;
};

/*
	JString에서 지원해야하는 메소드들
	
	밑에는 내가 만들었었던 소스에서 그대로 가져온거라 이름만 가져오면 됨.

	nString_ptr        nString_Join                       (const nString_ptr  pSelf, const nString_ptr pValue);
	bool               nString_Append                     (      nString_ptr  pSelf, const nString_ptr pValue);
	nString_ptr        nString_Loop                       (const nString_ptr  pSelf, const Length_t pLength);
	bool               nString_Compare                    (const nString_ptr  pSelf, const nString_ptr pValue);
	nString_ptr        nString_Trim                       (const nString_ptr  pSelf);
	Length_t           nString_Length                     (const nString_ptr  pSelf);
	Wcs_t              nString_get                        (const nString_ptr  pSelf);
	bool               nString_set                        (      nString_ptr  pSelf, const nString_ptr pValue);
	nString_ptr        nString_Left                       (const nString_ptr  pSelf, const Length_t pLength);
	nString_ptr        nString_Right                      (const nString_ptr  pSelf, const Length_t pLength);
	nString_ptr        nString_Middle                     (const nString_ptr  pSelf, const Index_t pStart, Index_t pEnd);
	nString_ptr        nString_Extract                    (const nString_ptr  pSelf, const Index_t pStart, const Index_t pEnd);
	nString_ptr        nString_Reverse                    (const nString_ptr  pSelf);
	nString_ptr        nString_ToLower                    (const nString_ptr  pSelf);
	nString_ptr        nString_ToUpper                    (const nString_ptr  pSelf);
	bool               nString_Contains                   (const nString_ptr  pSelf, const nString_ptr pKeyWord);
	Length_t           nString_Count                      (const nString_ptr  pSelf, const nString_ptr pKeyWord);
	Index_t            nString_IndexOf                    (const nString_ptr  pSelf, const nString_ptr pKeyWord);
	Index_t            nString_IndexAt                    (const nString_ptr  pSelf, const nString_ptr pKeyWord, const Index_t pIndex);
	Index_t            nString_IndexFor                   (const nString_ptr  pSelf, const nString_ptr pKeyWord, const Index_t pStart);
	Index_t            nString_LastOfIndex                (const nString_ptr  pSelf, const nString_ptr pKeyWord);
	nString_ptr        nString_Replace                    (const nString_ptr  pSelf, const nString_ptr pKeyWord, const nString_ptr pValue);
	nString_ptr        nString_ReplaceAt                  (const nString_ptr  pSelf, const nString_ptr pKeyWord, const nString_ptr pValue, const Index_t pIndex);
	nString_ptr        nString_ReplaceAll                 (const nString_ptr  pSelf, const nString_ptr pKeyWord, const nString_ptr pValue);
	nStringAry_ptr     nString_Split                      (const nString_ptr  pSelf, const nString_ptr pKeyWord);
	nString_ptr        nString_SubString                  (const nString_ptr  pSelf, const nString_ptr pKeyWord);
	bool               nString_Pattern                    (const nString_ptr  pSelf, const nString_ptr pKeyWord);
	bool               nString_isAlpha                    (const nString_ptr  pSelf);
	bool               nString_isLower                    (const nString_ptr  pSelf);
	bool               nString_isUpper                    (const nString_ptr  pSelf);
	bool               nString_isDecimal                  (const nString_ptr  pSelf);
	bool               nString_isDigit                    (const nString_ptr  pSelf);
	bool               nString_isSpace                    (const nString_ptr  pSelf);
	bool               nString_isAlphaDigit               (const nString_ptr  pSelf);
	bool               nString_isHex                      (const nString_ptr  pSelf);
	bool               nString_isControl                  (const nString_ptr  pSelf);
	bool               nString_isOctal                    (const nString_ptr  pSelf);
	bool               nString_isBinary                   (const nString_ptr  pSelf);
	bool               nString_Check                      (const wchar_t pChar, const nString_ptr pFindAry);
	nString_ptr        nString_Format                     (const nString_ptr  pFormat, ...);
	nString_ptr        nString_Notation                   (const int64_t pValue, const int pNotation);
*/

class JStringArray
{
public:
	JStringArray();
	JStringArray(Chs_t pValue);
	JStringArray(Wcs_t pValue);
	JStringArray(JStringArray* pValue);
	~JStringArray();

private:
	std::vector<JString> m_Values;
};

/*
	JStringArray에서 지원해야하는 메소드
	bool               nStringAry_Clear                   (      nStringAry_ptr  pSelf);
	nString_ptr        nStringAry_get                     (const nStringAry_ptr  pSelf, const Index_t pIndex);
	bool               nStringAry_set                     (const nStringAry_ptr  pSelf, const Index_t pIndex, const nString_ptr pValue);
	bool               nStringAry_Insert                  (      nStringAry_ptr  pSelf, const nString_ptr pValue, Index_t pIndex);
	bool               nStringAry_Remove                  (      nStringAry_ptr  pSelf, const Index_t pIndex);
	bool               nStringAry_Push                    (      nStringAry_ptr  pSelf, const nString_ptr pValue);
	nString_ptr        nStringAry_Pop                     (      nStringAry_ptr  pSelf);
	Index_t            nStringAry_Search                  (const nStringAry_ptr  pSelf, const nString_ptr pValue);
	bool               nStringAry_Contains                (const nStringAry_ptr  pSelf, const nString_ptr pValue);
	Length_t           nStringAry_CountIf                 (const nStringAry_ptr  pSelf, bool (*pExpression)(nString_ptr, void *), void *pParam);
	Length_t           nStringAry_Length                  (const nStringAry_ptr  pSelf);
*/

JString::JString()
{
}

JString::JString(Chs_t p_value)
{
}

JString::JString(Wcs_t p_value)
{
}

JString::JString(JString* p_value)
{
}

JString::~JString()
{

}