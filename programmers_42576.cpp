// 문자열 소팅의 경우 sort(.begin, .end) 하면 자동으로 된다

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    int i;
    for(i=0;i<participant.size();i++){
        if(participant[i] != completion[i])
            break;
    }
    answer = participant[i];
   
    return answer;
}