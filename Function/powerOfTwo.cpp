#include<iostream>
using namespace std;
int checkPower(int number ,int check){
    if(number==check){
        return 1;
    }
    while(number){
            if(number%check!=0){
                return 0;
            }

        number = number/check;
    }
    return 1;
}
int main(){
    int number, check;
    cin >> number >> check
    if(checkPower(number,check)==1){
        cout <<"YES";
    }else{
        cout <<"NO";
    }

}