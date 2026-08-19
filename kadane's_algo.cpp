#include <iostream>
using namespace std;

int main(){

    vector<int> nums = {1,-21,3,4,55};

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int val: nums){
        currSum += val;
        maxSum = max(currSum,maxSum);

        if (currSum < 0){
            currSum = 0;
        }
    }
    
    return maxSum;

}
        
        

   