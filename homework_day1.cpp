#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4,5};
    int size = 8;
    bool printed = false;

    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
            printed = true;
        }
    }

    if (!printed) {
        cout << "No unique element";
    }

    cout << endl;
    return 0;
}
