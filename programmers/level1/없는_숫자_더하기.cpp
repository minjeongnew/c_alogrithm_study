#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(auto a:numbers){
        answer +=a;
    }
    return 45-answer;
}