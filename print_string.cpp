/*
Name:- Rachit Deshpande
PRN:- 24070123035
Batch:- A2
*/
#include <iostream>
using namespace std;

void print_str(char *str){
    if(*str !='\0'){
        print_str(str+1);
        cout << *str;
    }
}
 
int main(){
    string s="Rachit";
    cout << "Reversed String: ";
    print_str(&s[0]);
}
/*
Output-
Reversed String: tihcaR
*/