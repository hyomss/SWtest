//�Ҽ��� �� -> �޸������̼� ���� ������ �� ����. �˰����� �Ƹ������׳׽� ü�� ���� ����

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