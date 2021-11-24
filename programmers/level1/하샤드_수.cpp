#include <string>
#include <cmath>
using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int n = x;
    while(n > 0) {
        sum += n%10;
        n /=10;
    }

    return x%sum == 0? true :false;
}
//
// Created by park on 21. 11. 24..
//

