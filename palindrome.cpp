#include <iostream>
using namespace std;

int main(){
   int tem,rev,n,rem;
   cout << "enter a number";
   cin >> n;

   tem = n;

   while(n>0){
   rem = n%10;
   rev=(rev*10)+rem;
   n=n/10;
   }

   if(rev==tem){
    cout << "no. is palindrome";
   }
   else {
    cout << "not palindrome";
   }

return 0;
}
