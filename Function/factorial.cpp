/**
**********************************************************************************************************************************************************************************************************************************
* @file:	factorial.cpp
* @author:	rustam
* @date:	2022年12月22日 13:50:58 Thursday
* @brief:	find the factorial of a positive integer
**********************************************************************************************************************************************************************************************************************************
**/
#include<bits/stdc++.h>
using namespace std;
long long int factorial(int n);
int main()
{
int n;
cin >> n;
cout << factorial(n) << endl;
    return 0;
}
long long int factorial(int n){
    if(n<0)
    return -1;
    int result = 1;
    for(int i=1;i<=n;i++){   
            result*=(long long int)i;
    }   
    return result;
}
