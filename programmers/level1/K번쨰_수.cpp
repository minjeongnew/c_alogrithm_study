#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int n = commands.size();
    for(int i=0;i<n;i++) {
        vector <int> tmp;
        int j;
        int a, b, c;
        a = commands[i][0];
        b = commands[i][1];
        c = commands[i][2];
        for(j=a-1; j<b;j++) {
            tmp.push_back(array[j]);
        }
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[c-1]);
    }
    return answer;
}//
// Created by park on 21. 11. 17..
//

