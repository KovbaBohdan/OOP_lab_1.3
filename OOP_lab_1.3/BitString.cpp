#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "BitString.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 

using namespace std;

void BitString::Display() const
{
	cout << endl;
	cout << " First = " << first << endl;
	cout << " Second = " << second << endl;
}

bool BitString::Init(long x, long y)
{
	if (x >= 0 && y >= 0)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}


void BitString::Read()
{
	long x, y;
	cout << "Input bit string:" << endl;
	cout << " First bit string = "; cin >> x;
	cout << " Second bit string = "; cin >> y;
	Init(x, y);
}

const char* BitString::toString() const
{
	stringstream sout;
	sout << first << second << endl;
	string str = sout.str();
	char* result = new char[str.length() + 1]; 
	strcpy(result, str.c_str());
	return result;
}

char* BitString::logicalNot(const char* str) {
	size_t len = strlen(str);
	char* result = new char[len + 1];
	for (size_t i = 0; i < len; ++i) {
		if (str[i] == '0') {
			result[i] = '1';
		}
		else if (str[i] == '1') {
			result[i] = '0';
		}
		else {
			result[i] = str[i];
		}
	}
	result[len] = '\0'; 
	return result;
}

char* BitString::bitwiseAnd(const char* str1, const char* str2) {
	size_t len = min(strlen(str1), strlen(str2));
	char* result = new char[len + 1];
	for (size_t i = 0; i < len - 1; ++i) {
		result[i] = (str1[i] == '1' && str2[i] == '1') ? '1' : '0';
	}
	result[len] = '\0';
	return result;
}

char* BitString::bitwiseOr(const char* str1, const char* str2) {
	size_t len = min(strlen(str1), strlen(str2));
	char* result = new char[len + 1];
	for (size_t i = 0; i < len - 1; ++i) {
		result[i] = (str1[i] == '1' || str2[i] == '1') ? '1' : '0';
	}
	result[len] = '\0';
	return result;
}




