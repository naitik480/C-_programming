#include <iostream>
using namespace std;

int main(){

int third_angle,first,second;

cout << "enter 1st angle of triangle :";
cin >> first;

cout << "enter 2nd angle of triangle:";
cin >> second;

third_angle=180-(first+second);

cout << "third angle of triangle =" << third_angle;

return 0;

}
