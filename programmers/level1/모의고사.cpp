//
// Created by park on 21. 11. 17..
//

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer = {0, 0, 0};
    vector<int> s1 = {1, 2, 3, 4, 5};
    vector<int> s2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> s3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int len_s1 = s1.size();
    int len_s2 = s2.size();
    int len_s3 = s3.size();
    int n = answers.size();
    for (int i=0; i< n;i++) {
        if (answers[i] ==s1[i%len_s1]) answer[0]+=1;
        if (answers[i] ==s2[i%len_s2]) answer[1] +=1;
        if (answers[i] ==s3[i%len_s3]) answer[2] +=1;
    }
    int max_ = *max_element(answer.begin(), answer.end());
    vector<int> a;
    for (int i=0;i<3;i++) {
        if (answer[i] == max_) a.push_back(i+1);
    }
    return a;
}