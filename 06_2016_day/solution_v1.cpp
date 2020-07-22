#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int days = b;
    int day_name_idx;
                        
    vector<int> month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> day_name = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"}; 
                                
    for (int i = 0; i < a - 1; i++)
    {
        days += month[i];
    }

    day_name_idx = (days-1) % 7;
    answer = day_name[day_name_idx];
                                            
    return answer;
}
