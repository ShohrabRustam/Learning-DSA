/**
**********************************************************************************************************************************************************************************************************************************
* @file:	printArray.cpp
* @author:	rustama
* @date:	2023年02月06日 23:11:20 Monday
* @brief:	printArray
**********************************************************************************************************************************************************************************************************************************
**/
#include<bits/stdc++.h>
using namespace std;
 void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
 }
int main()
{
 int n;
 cin >> n;
 int a[n];
 for (int  i = 0; i < n; i++){
    cout <<"Please enter the "<<i+1<<". element of an array"<<endl;
    cin >> a[i];
 }
 printArray(a, n);

    return 0;
}