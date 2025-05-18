#include <iostream>
using namespace std;

// void walk(int steps){
//     if(steps>0){
//         cout << "You take a step" <<endl;
//         walk(steps-1);
//     }
// }

int factorial(int num){
    if (num>1){
        return num*factorial(num-1);
    }
    else {
        return 1;
    }
}

int main(){
    cout<< factorial(10)<<endl;
    // walk(100);
    return 0;
}


