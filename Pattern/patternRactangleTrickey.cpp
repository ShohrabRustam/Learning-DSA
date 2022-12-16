/**
**********************************************************************************************************************************************************************************************************************************
* @file:	patternTriangle.cpp
* @author:	rustama
* @date:	2022年12月16日 23:21:27 Friday
* @brief:	patternTriangle    *
*                            * * *
*                          * * * * *
**********************************************************************************************************************************************************************************************************************************
**/

#include<bits/stdc++.h>
using namespace std;

void patternTriangle(int rows){
    for(int i=0; i<rows; i++){
        for(int j=0; j<2*rows; j++){
            if(j<rows && j<rows-i){
                cout<<j+1;
            }else if(j>=rows && j>=rows+i){
                    cout << 2*rows-j;
            }else{
                cout<<"*";
            }
        }
        cout <<endl;
    }
}
 
int main()
{
int rows;
cin >> rows;
 patternTriangle(rows);
    return 0;
}