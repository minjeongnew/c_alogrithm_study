#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    for(int i=0;i<d.size();i++) {
        if (budget-d[i]>0){
            answer += 1;
            budget -= d[i];
        }
        else if (budget-d[i]==0){
            answer +=1;
            break;
        }
        else break;
    }
    return answer;
}//
// Created by park on 21. 11. 17..
//

