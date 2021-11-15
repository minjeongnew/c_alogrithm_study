//
// Created by park on 21. 11. 15..
//

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    for(int i=0;i<a.size();i++) {
        answer += (a[i]*b[i]);
    }
    return answer;
}