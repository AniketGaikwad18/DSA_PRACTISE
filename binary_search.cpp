#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> arr1 = {1,2,3,4,5,6,7};
    int target1 = 7;

    cout << binary_search(arr1, target1) << endl;

    vector<int> arr2 = {1,2,3,4,5,6};
    int target2 = 2;

    cout << binary_search(arr2, target2) << endl;

    return 0;
}