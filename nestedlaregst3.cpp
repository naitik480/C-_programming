#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;

    cout << "Enter a NUM1:";
    cin >> num1;

    cout << "Enter a NUM2:";
    cin >> num2;

    cout << "Enter a NUM3:";
    cin >> num3;

    if(num1 > num2 && num1 > num3){
             cout << " num1 is greater :" << num1;
        if(num2 > num1 && num2 > num3){
        cout << "num2 is greater :" << num2;
    }else if(num3 > num1 && num3 > num2){
        cout << "num3 is greater :" << num3;

      }
        }



}
