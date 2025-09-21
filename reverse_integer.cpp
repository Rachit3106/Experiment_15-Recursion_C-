/*
Name:- Rachit Deshpande
PRN:- 24070123035
Batch:- A2
*/
#include <iostream>
using namespace std;

void print_rev(int i){
    if(i>0){
        cout << (i%10);
        print_rev(i/10);
    }
}

int main(){
    int n;
    cout << "Type number you want to reverse: ";
    cin >> n;
    print_rev(n);
}
/*
Output:-
Type number you want to reverse: 1050302
2030501
*/