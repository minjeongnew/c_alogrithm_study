#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int n = phone_number.size();
    string answer = "";
    int i;
    for(i=0;i<n-4;i++){
        answer += "*";
    }
    for(int j=i;j<n;j++) {
        answer += phone_number[j];
    }
    return answer;
}