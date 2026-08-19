#include <iostream>
using namespace std;

int main(){

    int n = 5;
    int ar[] = {1,2,3,4,5};

    int maxsum = INT_MIN;
    for(int st=0; st <n; st++){
        int curr_sum = 0;

        for(int end = st;end < n;end++ ){
            curr_sum += ar[end];
            maxsum = max(curr_sum,maxsum);
        }
    }
    cout << "maximum subarray value: " << maxsum << endl;
    return 0;

}