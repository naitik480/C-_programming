#include <iostream>
using namespace std;

int main(){
    int n;
    int sum =0;
    int i=1;

    cout << "enter first n natural no.";
    cin >> n;

    while(i<=n){
        sum += i;
        i++;
    }
    cout << "sum of first n" << n << "\n" << "natural no is" << sum << "\n";

    return 0;
    }
