/*
Name:- Rachit Deshpande
PRN:- 24070123035
Batch:- A2
*/
#include <iostream>
using namespace std;

int sumup(int n){
    if(n<=1)
    return 1;
    else
    return n + sumup(n-1);
}

int main(){
    int n;
    cout << "Type number till you want sum: ";
    cin >> n;
    int sum=sumup(n);
    cout << "Sum of n integer is: "<< sum;
}
/*
Output:-
Type number till you want sum: 5
Sum of n integer is: 15
*/