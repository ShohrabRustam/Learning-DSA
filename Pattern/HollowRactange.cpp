/**
**********************************************************************************************************************************************************************************************************************************
* @file:	ractangle.cpp
* @author:	rustam
* @date:	2022年12月16日 00:07:46 Friday
* @brief:	make an Rectangle
**********************************************************************************************************************************************************************************************************************************
**/
#include<bits/stdc++.h>
using namespace std;
void make_hollow_rectangle(){
    int row, col;
    cout <<"Enter number of rows and columns"<<endl;
    cin >> row >> col;
    for (int i=0; i < row;i++){
        for (int j=0; j < col;j++){
            if(i==0|| j==0 || j==col-1 || i==row-1 ){ 
            cout << " * ";
            }else{
                cout <<"   ";
            }
        }
        cout << endl;
    }
}
 
int main()
{
    make_hollow_rectangle();
    return 0;
}