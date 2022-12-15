/**
**********************************************************************************************************************************************************************************************************************************
* @file:	charAscii.cpp
* @author:	rustam
* @date:	2022年12月15日 23:48:28 Thursday
* @brief:	some value for ascii character using the ternary operator
**********************************************************************************************************************************************************************************************************************************
**/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  char c;
  cin >> c;
  string str = (c>='0' && c<='9') ? "this is the Number" : (c>='a' && c<='z') ? "this is the lowercase string" : (c>='A' && c<='Z') ? "this is the uppercase string" : "This is the special character";
  cout << str << endl;
    return 0;
}