#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     vector<int> nums = {1,3,5,7,9};

//     int target = 5;

//     for(int i : nums){
//         if(i == target){

//             cout << "the number is: "<< i<< endl;
//         }
//     }
//     return 0;
// }

// SOLVING REVERSE THE VECTOR 

void reverse_vector(vector<int>& vec,int sz){
    int start = 0;
    int end = sz -1 ;

    while(start < end){
        swap(vec[start], vec[end]);
        start ++;
        end --;
    }
}
int main(){
    vector<int> vec = {1,2,3,4,5};
    int sz = vec.size();

    reverse_vector(vec,sz);

    for(int val: vec){
        cout << val << endl;
    }

    return 0;

}