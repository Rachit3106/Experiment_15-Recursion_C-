/*
Name:- Rachit Deshpande
PRN:- 24070123035
Batch:- A2
*/
#include <iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return 1;
    }
    else return n*fibo(n-1);
}

int main(){
    int n;
    cout << "Type Number for Fibonacci: ";
    cin >> n;
    int fibo1=fibo(n);
    cout << "Fibonacci of " << n << " is : " << fibo1;
}
/*
Output:-
1)Type Number for Fibonacci: 5
Fibonacci of 5 is : 120
2)Type Number for Fibonacci: 4
Fibonacci of 4 is : 24
3)Type Number for Fibonacci: 1
Fibonacci of 1 is : 1
4)Type Number for Fibonacci: 0
Fibonacci of 0 is : 1
*/