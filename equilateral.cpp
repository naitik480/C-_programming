#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "enter a 1st,2nd and 3rd side of triangle:";
    cin >> a >> b >> c;

    if(a==b && b==c ){
        cout << "equilateral triangle";
        if(a==b || b==c || a==c){
            cout << "isosceles triangle";
        }
    }else {
        cout << "scalene triangle";

    }
return 0;

}
