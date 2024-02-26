#pragma once
#include <string>
#include <sstream> 

using namespace std;

class BitString
{
	long first, second;
public:
	long GetFirst() const { return first; }
	long GetSecond() const { return second; }

	void SetRe(long value) { first = value; }
	void SetIm(long value) { second = value; }

	bool Init(long, long);
	void Read();
	void Display() const;
	
	const char* toString() const;
	char* logicalNot(const char* str);
	char* bitwiseAnd(const char* str1, const char* str2);
	char* bitwiseOr(const char* str1, const char* str2);
};
