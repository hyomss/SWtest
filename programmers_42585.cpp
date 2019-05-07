//LV 2
//쇠막대기 자르기 

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    
    stack <char> open;
    for(int i=0;i<arrangement.size();i++){
        if(arrangement[i] == '('){
            if(arrangement[i+1]==')'){
                answer += open.size();
            }
            open.push('(');
        }
        else{
            if(arrangement[i-1] != '('){
                answer++;
            }
            open.pop();
                        
        }
    }
    return answer;
}