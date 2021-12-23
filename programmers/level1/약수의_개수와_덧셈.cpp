//
// Created by park on 21. 12. 24..
//

#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;
int func(int x) {
    int cnt = 0;
    set <int> tmp;
    for (int i=1; i <= x;i++) {
        if (x % i == 0) tmp.insert(i);
    }
    return tmp.size();
}
int solution(int left, int right) {
    int answer = 0;
    for (int i=left ; i<=right;i++) {
        int tmp = func(i);
        if (tmp % 2 == 0) answer += i;
        else answer -= i;
    }
    return answer;
}