#include <iostream>
#include <vector>
using namespace std;

void changeA(int* ptr){ //pass by refrence using pointer if we have not used the ptr it will be pass by vale
    *ptr = 20;
}
int main(){
    int a =10;
    changeA(&a);

    cout << "the change i function: " << a << endl;
}