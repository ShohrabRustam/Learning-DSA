/**
**********************************************************************************************************************************************************************************************************************************
* @file:	BinarytoDecimal.cpp
* @author:	rustam
* @date:	2022年12月18日 22:49:28 Sunday
* @brief:   binary-to-decimal	
**********************************************************************************************************************************************************************************************************************************
**/

#include<bits/stdc++.h>
using namespace std;

// function definition
int binaryToDecimal(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int main() {
  long long n;
  cout << "Enter a binary number: ";
  cin >> n;
  cout << n << " in binary = " << binaryToDecimal(n) << " in decimal";
  return 0;
}

