#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int l_index = 0;
    int r_index=0;
    int temp_flag = 0;
    int okay = 0;
    
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    vector<int> both_case; // 여별옷도 있고 잃어도 버리고
    
    
    for (int i=0; i<reserve.size(); i++){
        temp_flag = 0;
        for(int j=0; j<lost.size(); j++){
            if (lost[j] == reserve[i])
                temp_flag = 1;  
        }
        if (temp_flag)
            both_case.push_back(reserve[i]);
      }
    
    ///////////////////////////////////////////
    
    while (l_index < lost.size())
    {
        temp_flag = 0;
        if (both_case.size() != 0)
        {
            for (int i=0; i< both_case.size(); i++)
            {
               // cout << "both_case[" << i <<"] : "  << both_case[i] << endl;
                if(both_case[i] == reserve[r_index]){
                    r_index++; // 도난과 여벌이 있는 사람은 빌려 줄 수 없다.
                    temp_flag = 1;    
                }
            }
        }
        if (temp_flag){
            cout << "CASE0(LEFT) RENTAL IMPOSSIBLE : " << l_index << " reserve_index : " << (r_index-1) << " okay : " << okay << endl;
            continue;
        }
            
        if (reserve[r_index]-1 == lost[l_index]){ //  reserve 기준으로 왼쪽의 경우 먼저 살피고 있을 경우
            if (both_case.size() != 0){ // 안빌려 줘도 되는 경우의 수를 찾고 싶을 때
                for (int i =0; i < both_case.size(); i++)
                {
                    if (both_case[i] == (reserve[r_index] -1)) // 도난 & 여별의 옷이 있고, 다른 사람이 빌려줄 수 있는 경우 -> 안빌려줘두 됨
                    {
                        l_index++;
                        temp_flag = 1;
                        cout << "CASE-SPECIAL(LEFT) lost_index : " << (l_index-1) << " reserve_index : " << (r_index) << " okay : " << okay << endl;
                        
                    }
                }
            }
            if(temp_flag)
                continue;
            okay++;
            l_index++;
            r_index++;
            cout << "CASE1(LEFT) lost_index : " << (l_index-1) << " reserve_index : " << (r_index-1) << " okay : " << okay << endl;
       }
       else if (reserve[r_index]+1 == lost[l_index]){ //  reserve 기준으로 왼쪽에 없고 오른쪽 경우에 있을 때
           if ( both_case.size() != 0){
               for(int i=0; i<both_case.size(); i++){
                   if (both_case[i] == lost[l_index]){ // 여벌&도난, 다른사람이 빌려줄 수 있지만 패스
                       l_index++;
                       temp_flag = 1;
                   }
                   
               }
           }
           if(temp_flag)
                continue;
           okay++;
           l_index++;
           r_index++;
           cout << "CASE4(RIGHT) lost_index : " << (l_index-1) << " reserve_index : " << (r_index-1) << " okay : " << okay << endl;
           
       }
       else{
           l_index++;
           cout << "CASE3(NO) lost_index : " << (l_index-1) << " reserve_index : " << (r_index-1) << " okay : " << okay <<endl;
       }           
    }
   
    cout << "n : " << n << " lost : " << lost.size() << " okay : " << okay << endl;
    answer = n - lost.size() + okay + both_case.size();
    
    
    return answer;
}
