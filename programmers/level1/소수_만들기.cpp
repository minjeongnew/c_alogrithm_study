//
// Created by park on 21. 11. 15..
//

#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

void primes(int x);
vector <bool>numbers(3000, false);
int solution(vector<int> nums) {
    int answer = 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int max_sum = nums[n-1]+nums[n-2]+nums[n-3];
    primes(max_sum);
    int i,j,k;
    int tmp=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++) {
            for(k=j+1;k<n;k++) {
                tmp = nums[i]+nums[j]+nums[k];
                if (!numbers[tmp]) answer ++;
            }
        }
    }
    return answer;
}
void primes(int x) {
    numbers[0] = true;
    numbers[1] = true;
    int sqrtX= int(sqrt(x))+1;
    for (int i=2;i<sqrtX;i++) {
        if (!numbers[i]) {
            for(int j=i+i;j<x+1;j+=i) numbers[j] = true;
        }
    }
}