#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map< string,int > name_times;
    string answer = "";
    // dictionary 사용 // key : 참여자 이름, value : 참여자 이름의  횟수 
    for (int i =0; i< participant.size(); i++)
    {
        if(name_times.count(participant[i])) // map::count = the function can only return 1 (found) or 0 (not found)
            name_times[participant[i]] += 1;
        else
            name_times[participant[i]] = 1;  
    }

    // 완주한 사람으로 참여자 이름의 횟수를 제외                    
    for (int i =0; i < completion.size(); i++)
        name_times[completion[i]] -= 1;

    // 한명만 남으므로 횟수가 0이 아닌 사람을 return
    for (int i=0; i<participant.size(); i++)
    {
         if (name_times[participant[i]] != 0)
             return participant[i];        
    }                                                                
                                    

}
