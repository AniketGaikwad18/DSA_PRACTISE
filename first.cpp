// SMALLEST NUMBER IN THE ARRAY
#include <iostream>
using namespace std;

// int main() {
//     const int size = 6;
//     int nums[] = {1,5,-99,100,5,6,};

//     int smallest = INT_MAX;

//     for(int i = 0 ; i < size ; i++){
//         if( nums[i] < smallest){
//             smallest = nums[i] ;
//         }

//     }
//     cout << "smallest number in array is:" << smallest << endl;

    
   
//     return 0;
// }

// LARGEST NUMBER IN THE ARRAY

int main(){
    const int size = 6;
    int nums[] = {10,20,30,40,50,60};

    int largest = INT_MIN;
    int maxindex = -1;

    for(int i =0;i < size ; i++){
        if(max(nums[i],largest) != largest){
        largest = nums[i];
        maxindex = i; 
    }
}

    cout << "the largest number is: " << largest << endl ;
    cout << maxindex << endl ; 

}