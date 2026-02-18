#include <iostream>
using namespace std;

int main(){

int third_angle,first,second;

cout << "enter 1st angle :";
cin >> first;

cout << "enter 2nd angle :";
cin >> second;

third_angle=180-(first+second);

cout << "third angle =" << third_angle;

return 0;

}
