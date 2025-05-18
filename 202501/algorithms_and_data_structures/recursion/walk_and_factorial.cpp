#include <iostream>
using namespace std;

int main(){
    walk(100);
    return 0;
}

void walk(int steps){
    if(steps>0){
        cout << "You take a step" <<endl;
        walk(steps-1);
    }
}
