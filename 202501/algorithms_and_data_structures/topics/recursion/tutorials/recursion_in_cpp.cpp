// This is a simple C++ program that demonstrates recursion by calculating the factorial of a number. 
// Credits: BroCode on YT
#include <iostream>
using namespace std;

int factorial(int n){
    if (n>1){
        return n*factorial(n-1);
    }
    else { return 1;}
}

int main(){
    cout << "Hello, World!" << endl;
    cout << factorial(5) << endl;
    return 0;
}