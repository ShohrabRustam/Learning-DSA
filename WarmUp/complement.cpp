/**
**********************************************************************************************************************************************************************************************************************************
* @file:	complement.cpp
* @author:	rustam
* @date:	2022年12月18日 22:46:33 Sunday
* @brief:	complement.cpp
**********************************************************************************************************************************************************************************************************************************
**/     
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
        string binaryNumber = "";
            int result =1;
        if(n==0){
            cout << result;
            return 0;
        }
        while(n){
            binaryNumber = to_string(n%2)+binaryNumber; 
            n=n/2;
        }
        for(int i=0;i<binaryNumber.length();i++){
            if(binaryNumber[i]=='0'){
               binaryNumber[i] = '1';
            }else{
                binaryNumber[i] = '0';
            }
        }
             result =  stoi(binaryNumber, 0, 2);
             cout << result;
 
    return 0;
}