#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
static int ROW = 3;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    // cout << commands.size(); // row
    // cout << commands[0].size(); // column
                        
    for (int i = 0; i < commands.size(); i++){
        for (int j = commands[i][0]-1; j < commands[i][1]; j++){
            temp.push_back(array[j]);
        }
                                                          
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2]-1]);
        temp.clear();
    }    
                
    return answer;
        
}
