#include <iostream>
using namespace std;

int main(){
    int age;

    cout << "enter the age of Male/Female :";
    cin >> age;

    if(age>=18){
        cout << "Person is eligible for vote";

    }else {
        cout << "Person is not eligible for vote";
    }
    return 0;
}
