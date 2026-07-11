#include <bits/stdc++.h>
using namespace std;

//PRINT DIVISORS OF A NUMBER IN ASCENDING ORDER

1. here time complexity ~ O(n)

int main(){
   int no;
   cout << "ENTER UR NO. : ";
   cin >> no;
   for(int i=1;i<=no;i++){
      if(no%i==0) cout << i << " ,";
   }
}

2. here time complexity ~ O(sqrt(n))  // MORE EFFICIENT

int main(){
   vector <int> v;

   int no;
   cout << "ENTER UR NO. : ";
   cin >> no;
   cout << " DIVISORS OF THE GIVEN NO. ARE  ";
   for(int i=1;i<=sqrt(no);i++){
      if(no%i==0) {
         v.emplace_back(i);
         if(i!=no/i) v.emplace_back(no/i);
      }
   }
   sort(v.begin(),v.end());
   for(auto t=v.begin();t!=v.end();t++){
      cout << *t << " ";
   }
   
}
      
   


    

