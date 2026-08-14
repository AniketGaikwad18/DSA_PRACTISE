#include <iostream>
using namespace std;

int search(int arr[], int sz, int target){
    for(int i= 0 ; i < sz ; i++){
        if(arr[i] == target){
            return i;
 
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,5,88,34,9,60};
    int target = 100 ;
    int sz = 6;

    cout << search(arr,sz,target) << endl;
    return 0;


}