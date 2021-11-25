//
// Created by park on 21. 11. 25..
//

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(pair<double, int> &a, pair<double, int> &b) {
    if (a.first == b.first) return a.second < b.second; // 오름차순
    else return a.first > b.first;
}
vector<int> solution(int N, vector<int> stages) {
    vector<pair<double, int>> failures;
    vector<int> answer;
    int n = stages.size();

    for (int i=1;i<= N;i++) {
        int non_pass = 0;
        int sum = 0;
        for (int j =0;j<n;j++) {
            if (stages[j] >= i) sum += 1;
            if (stages[j] == i) non_pass += 1;
        }
        // cout << i<<" "<<sum << " "<< non_pass<<endl;
        double x = (double)non_pass/sum;
        if (non_pass == 0) failures.push_back({0, i});
        else failures.push_back({x, i});

    }
    sort(failures.begin(), failures.end(), compare);
    for(int k=0;k<N;k++) {
        answer.push_back(failures[k].second);
    }
    return answer;
}