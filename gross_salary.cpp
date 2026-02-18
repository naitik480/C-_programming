#include <iostream>
using namespace std;

int main (){
    float gross_salary,B,HRA,DA,Other_allowance;

    cout << "Enter Basic salary :";
    cin >> B;

    cout << "Enter HRA :";
    cin >> HRA;

    cout << "Enter DA :";
    cin >> DA;

    cout << "Enter Other_allowance:";
    cin >> Other_allowance;

    gross_salary = B+HRA+DA+Other_allowance;

    cout << "Gross salary =" << gross_salary;

    return 0;
}
