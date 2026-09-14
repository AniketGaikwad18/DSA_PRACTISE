#include <iostream>
using namespace std;

int main(){
    int arr[] = {11, 1, 2, 35, 8};
    int n = sizeof(arr)/sizeof(int);

    // Bubble sort with nested loops
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
    // Print sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}