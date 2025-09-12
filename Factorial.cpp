/*
Name:- Rachit Deshpande
PRN:- 24070123035
Batch:- A2
*/
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else return n*factorial(n-1);
}

int main(){
    int n;
    cout << "Type Number for Fibonacci: ";
    cin >> n;
    int fact1=factorial(n);
    cout << "Factorial of " << n << " is : " << fact1;
}
/*
Output:-
1)Type Number for Factorial: 5
Factorial of 5 is : 120
2)Type Number for Factorial: 4
Factorial of 4 is : 24
3)Type Number for Factorial: 1
Factorial of 1 is : 1
4)Type Number for Factorial: 0
Factorial of 0 is : 1
*/