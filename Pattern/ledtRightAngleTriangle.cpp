/**
**********************************************************************************************************************************************************************************************************************************
* @file:	ledtRightAngleTriangle.cpp
* @author:	rustam
* @date:	2022年12月16日 23:06:15 Friday
* @brief:	left right angle
**********************************************************************************************************************************************************************************************************************************
**/

#include<bits/stdc++.h>
using namespace std;

void leftRightAngleTriangle(int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main()
{
 int row;
 cin >> row;
 leftRightAngleTriangle(row);
    return 0;
}