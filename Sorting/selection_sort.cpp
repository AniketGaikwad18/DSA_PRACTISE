#include <iostream>
using namespace std;


void SelectionSort(int arr[], int n){

    for (int i =0; i < n-1 ; i++){
        int SmallestIndex = i ;
        for (int j = i +1;j < n; j++){
            if(arr[j] < arr[SmallestIndex]){
                SmallestIndex = j;
                 
            }
        }

        swap (arr[i], arr[SmallestIndex]);
    }


}
int main(){
    int n = 5;

    int arr[] = { 2,5 ,1, 8, 3};
    SelectionSort(arr,n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;


}