#include <iostream>
using namespace std;

int main (){
    float simple_interest,principle,rate,time;

    cout << "enter principle :";
    cin >> principle;

    cout << "enter rate :";
    cin >> rate;

    cout << "enter time :";
    cin >> time;

    simple_interest=(principle*rate*time)/100;

    cout << "simple interest =" << simple_interest;

    return 0;



    }
