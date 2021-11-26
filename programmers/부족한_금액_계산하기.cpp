using namespace std;

long long solution(int price, int money, int count)
{
    int answer = -1;
    int sum = 0;
    for (int i = 1; i<= count;i++) {
        sum += i*price;
    }
    if (sum-money <0) return 0;
    return sum-money;
}//
// Created by park on 21. 11. 26..
//

