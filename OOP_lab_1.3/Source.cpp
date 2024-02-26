#define _CRT_SECURE_NO_WARNINGS
#include "BitString.h"
#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

int main() {
        BitString z;
        z.Read();
        z.Display();
        
        const char* strZ = z.toString();
        cout << "BitString: " << strZ << endl;
        
        char* resultZ = z.logicalNot(strZ);
        cout << "Logical Not: " << resultZ << endl;
        
        BitString v;
        v.Read();
        v.Display();

        const char* strV= v.toString();
        cout << "BitString: " << strV << endl;

        char* resultV = v.logicalNot(strV);
        cout << "Logical Not: " << resultV << endl;
        
        BitString a;
        char* result1 = a.bitwiseAnd(strZ, strV);
        cout << "Bitwise AND: " << result1 << endl;
        
        BitString b;
        char* result2 = b.bitwiseOr(strZ, strV);
        cout << "Bitwise OR: " << result2 << endl;

        delete[] resultZ;
        delete[] resultV;
        delete[] result1;
        delete[] result2;
        
        cin.get();
        return 0;
}
