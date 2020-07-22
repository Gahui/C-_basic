#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
        string answer = "";
        int string_length = s.length();
        int start = 0;


                        
        if (string_length % 2 == 0)  // even
        {
            start = string_length / 2 - 1;
            answer = s.substr(start, 2);
        }
        else
        {
            start = (string_length - 1) / 2;   
            answer = s[start];
        }
        return answer;
}
