#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> vec ;

    cout << "the size of vector is: "<< vec.size() << endl;

    vec.push_back('a');
    vec.push_back('z');
    vec.pop_back(); 

    cout << "the size of vector after push_back is: "<< vec.size() << endl;

    for(char val: vec){
        cout << val <<endl;
    }



    
    
    


}
