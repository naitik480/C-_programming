#include <iostream>
using namespace std;

int main(){
    int year;

    cout << "enter year :";
    cin >> year;

    if(year %400 == 0){
        cout << "Year is leap year :" << year;

    } else if(year %100 == 0){
        cout << "Year is not leap year :" << year;

    } else if(year %4 == 0){
        cout << "Year is leap year :" << year;

    }else {
        cout << "Year is not leap year :" << year;

    }

    return 0;
}



