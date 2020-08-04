#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int v_size = arr.size();
                        
    answer.push_back(arr[0]);
    for(int i=1; i < v_size; i++)
    {
         if (arr[i-1] != arr[i]){
            answer.push_back(arr[i]);
        }
    }   
    return answer;
}
