// These is the Brute force Approach optimizatonis available
#include <iostream>
using namespace std;

int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};

    int maxWater = 0;
    int n = sizeof(height)/sizeof(int);

    for (int i = 0; i < n; i++){
        for(int j = i + 1; j< n;j++){
            int w = j - i;
            int ht = min(height[i],height[j]);

            int area = w * ht;
            
            maxWater = max(maxWater,area);
        }
    }
    return maxWater;
    
}