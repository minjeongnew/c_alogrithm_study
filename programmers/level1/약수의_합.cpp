#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    set<int> s;
    int sqrtn = int(sqrt(n));
    for(int i=1;i<sqrtn+1;i++) {
        if (n%i==0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto it=s.begin();it!=s.end();it++) {
        answer+=*it;
    }
    return answer;
}//
// Created by park on 21. 11. 17..
//

