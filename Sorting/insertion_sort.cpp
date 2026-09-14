#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n ){

    for (int i = 1; i < n; i++){
        int prev = i-1;
        int curr = arr[i];

        while (prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }

}
int main(){
    int n = 5;

    int arr[] = { 2,5 ,1, 8, 3};
    InsertionSort(arr,n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;


}