//finding reverse of a number

#include <iostream>
using namespace std;

int main(){
    int no, reverse = 0, remainder;
    cout << "ENTER A NUMBER: ";
    cin >> no;
    while(no != 0){
        remainder = no % 10;
        reverse = reverse * 10 + remainder;
        no /= 10;
    }
    cout << "REVERSE OF THE NUMBER IS: " << reverse;
    return 0;
}
