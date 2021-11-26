#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int n = arr1.size();
    int m = arr2[0].size();
    int x = arr1[0].size();
    for (int i=0;i<n;i++) {
        vector<int> tmp;
        for (int j=0;j<m;j++){
            int sum = 0;
            for (int k=0;k<x;k++) {
                sum += arr1[i][k] *arr2[k][j];
            }
            tmp.push_back(sum);
        }
        answer.push_back(tmp);
    }
    return answer;
}//
// Created by park on 21. 11. 26..
//

