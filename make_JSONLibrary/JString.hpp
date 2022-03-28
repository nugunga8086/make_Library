#pragma once

#include <vector>
#include <cstdio>

using namespace std;

typedef const char* Chs_t;
typedef const wchar_t* Wcs_t;
typedef const wstring Wstr;

struct JString
{
public:
	JString();
	JString(Chs_t p_value);
	JString(Wcs_t p_value);
	JString(Wstr p_value);
	JString(JString* p_value);
	~JString();

	JString Join(const JString pSelf, const JString pValue);
	bool Append(JString  pSelf, const JString pValue);
	JString Loop(const JString pSelf, const int length);
	bool Compare(const JString  pSelf, const JString pValue);
	bool IsAlpha();
	bool IsLower();
	bool IsUper();
	bool IsDecimal();
	string ToString(const JString pSelf);

private:
	Wcs_t m_values;
	size_t m_length;
};

/*
	JString���� �����ؾ��ϴ� �޼ҵ��
	
	�ؿ��� ���� ��������� �ҽ����� �״�� �����°Ŷ� �̸��� �������� ��.

	���ڿ� ��ä�̸�    �ڷ���_�޼ҵ�		              �Ķ����(�ް�����   �ڱ� �ڽ�     �ʿ��� �͵�)
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
	bool               nString_isAlpha                    (const nString_ptr  pSelf);		//���ĺ�
	bool               nString_isLower                    (const nString_ptr  pSelf);		//�ҹ���
	bool               nString_isUpper                    (const nString_ptr  pSelf);		//�빮��
	bool               nString_isDecimal                  (const nString_ptr  pSelf);		//����
	bool               nString_isDigit                    (const nString_ptr  pSelf);		//�Ǽ�
	bool               nString_isSpace                    (const nString_ptr  pSelf);		//�����̽���
	bool               nString_isAlphaDigit               (const nString_ptr  pSelf);		//���ĺ� �Ǵ� �Ǽ�
	bool               nString_isHex                      (const nString_ptr  pSelf);		//16����
	bool               nString_isControl                  (const nString_ptr  pSelf);		//�ƽ�Ű�ڵ� ���� �������� (0~32����)
	bool               nString_isOctal                    (const nString_ptr  pSelf);		//8����
	bool               nString_isBinary                   (const nString_ptr  pSelf);		//2����
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
	JStringArray���� �����ؾ��ϴ� �޼ҵ�
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

#pragma region JString Constructor
JString::JString()
{
	m_values = new wchar_t[0];
	m_length = wcslen(m_values);
}

JString::JString(Chs_t p_value)
{
	std::string message_a = p_value;
	std::wstring message_w;
	message_w.assign(message_a.begin(), message_a.end());

	m_values = message_w.c_str();
	m_length = message_w.size();
}

JString::JString(Wcs_t p_value)
{
	m_values = p_value;
	m_length = wcslen(p_value);
}

JString::JString(Wstr p_value)
{
	m_values = p_value.c_str();
	m_length = wcslen(p_value.c_str());
}

JString::JString(JString* p_value)
{
	m_values = p_value->m_values;
	m_length = p_value->m_length;
}

JString::~JString()
{
	delete m_values;
	delete &m_length;
}
#pragma endregion

#pragma region JString Method
JString JString::Join(const JString pSelf, const JString pValue) {
	Wcs_t ws1 = pSelf.m_values, ws2 = pValue.m_values;
	wstring s(ws1);
	s += wstring(ws2);
	return new JString(s);
}

bool JString::Append(JString pSelf, const JString pValue)
{
	try
	{
		Wcs_t ws1 = pSelf.m_values, ws2 = pValue.m_values;
		wstring s(ws1);
		s += wstring(ws2);
		m_values = s.c_str();
		m_length = s.size();
		return true;
	}
	catch (const std::exception&)
	{
		return false;
	}
	
}

bool JString::Compare(const JString  pSelf, const JString pValue) {
	return wcscmp(pSelf.m_values, pValue.m_values);
}

JString JString::Loop(const JString pSelf, const int length) {
	Wcs_t ws1 = pSelf.m_values;
	wstring s;
	for (int i = 0; i < i; i++)
		s += wstring(ws1);
	return new JString(s);
}

bool __IsAlpha(int ch)
{
	return ch >= 'a' && ch <= 'z';
}

bool JString::IsAlpha()
{
	for (size_t i = 0; i < m_length; i++)		//size_t = ��ȣ�� ���� int			m_length = ���ڿ��� ����
		if (!__IsAlpha(m_values[i]))
			return false;
	return true;
}

bool __IsLower(int ch) 
{
	return ch >= 'a' && ch <= 'z';
}

bool JString::IsLower() 
{
	for (size_t i = 0; i < m_length; i++)
		if (!__IsLower(m_values[i]))
			return false;
	return true;
}

bool IsUper(int ch) 
{
	return ch >= 'A' && ch <= 'Z';
}

bool JString::IsUper() 
{
	for (size_t i = 0; i < m_length; i++)
		if (!__IsLower(m_values[i]))
			return false;
	return true;
}

bool __IsDecimal(int num) {
	return num % 1 == 0;
}

bool JString::IsDecimal() 
{
	for (size_t i = 0; i < m_length; i++)
		if (!__IsDecimal(m_values[i]))
			return false;
	return true;
}

string JString::ToString(const JString pSelf) {
	wstring ws(pSelf.m_values);
	return string(ws.begin(), ws.end());
}
#pragma endregion