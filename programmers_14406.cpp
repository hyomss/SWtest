//소수의 합 -> 메모이제이션 쓰면 연습상 더 좋음. 알고리즘은 아리스토테네스 체가 제일 좋음

#include <vector>

using namespace std;

//vector <int>prime(0);
bool check = true;
long long solution(int N) {
    int i=2;
    long long answer = 2;

    for(;i<=N;i++){
        if(i%2==0)  continue;
        for(int j=3;j<i;j+=2){
            if(i%j==0)  continue;
        }
        answer += i;
    }
    return answer;
}