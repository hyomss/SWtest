#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector< vector<int> > commands) {
    vector<int> answer;
    vector<int> temp;
    int a=0;
    
    for(int k=0;k<commands.size();k++){
        int f=commands[a][0];           //2
        int e=commands[a][1];         //5
        int position=commands[a][2];  //3
        int j=0;
        for(int i=f-1;i<e;i++){
            temp.push_back(array[i]);
        }
        sort(temp.begin(),temp.end());	
        int ans=temp[position-1];	//이부분도 -1잊지말기
        answer.push_back(ans);
        temp.clear();	//이거 잊지말기
        a++;
    }
    return answer;
}