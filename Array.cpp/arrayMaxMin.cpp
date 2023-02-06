/**
**********************************************************************************************************************************************************************************************************************************
* @file:	printArray.cpp
* @author:	rustama
* @date:	2023年02月06日 23:11:20 Monday
* @brief:	Max Min Element
**********************************************************************************************************************************************************************************************************************************
**/
#include<bits/stdc++.h>
using namespace std;
 void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
 }
 void maxMin(int arr[],int n){
    sort(arr,arr+n);
    cout <<"Max: " << arr[0] << " Min: " << arr[n-1];
 }
int main()
{
 int n;
 cin >> n;
 int a[n];
 for(int i=0;i<n;i++){
    cin >> a[i];
 }
 maxMin(a,n);
return 0;
}