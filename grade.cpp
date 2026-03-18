#include <iostream>
using namespace std;

int main(){

    int marks;
    cout << "enter a marks :";
    cin >> marks;

    if(marks<=45){
        cout << "poor";

    }else if(marks<=65){
        cout << "Average";

    }else if(marks<=85){
        cout << "good";

    }else if(marks<=95){
        cout << "very good";

    }else if(marks<=100){
        cout << "Excellent";
    }
    return 0;


}
