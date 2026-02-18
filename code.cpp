#include <iostream>
using namespace std;

int main(){
    float percentage,totalmarks, x,y,z;
    cout << "enter 1st subject marks :";
    cin >> x;
    cout << "enter 2nd subject marks";
    cin >> y;
    cout << "enter 3rd subject marks";
    cin >> z;

    totalmarks=x+y+z;

    percentage = (totalmarks/300)*100;

    cout << "percentage =" << percentage;


    return 0;

}







