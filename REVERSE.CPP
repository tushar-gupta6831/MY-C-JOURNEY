#include <bits/stdc++.h>
using namespace std;
//FINDING REVERSE OF A NUMBER

int main(){
   int no;
   cout << "ENTER UR NO. : ";
   cin >> no;
   int rev =0;
   int lastdigit;
   while (no>0){
      lastdigit = no%10;
      rev = rev*10 +lastdigit;

      no=no/10;
   }
   cout << "REVERSE = " << rev;
      
   


    
}
