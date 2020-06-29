#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> solution = {0,0,0};
    vector<int> ans;
                    
    vector<int> one = {1,2,3,4,5}; // index % 6
    vector<int> two = {2,1,2,3,2,4,2,5}; // if ( % 2 ==0) 2; else cnt++%6;
    vector<int> thr = {3,3,1,1,2,2,4,4,5,5};
    
    int one_idx = 0;
    int two_idx = 0; 
    int thr_idx = 0;
    
    for (int i =0; i < answers.size();  i++)
    {
        if ( answers[i] == one[one_idx % (one.size() + 1)])
            solution[0] += 1;
            
        if ( answers[i] == two[two_idx % (two.size() + 1)]) 
            solution[1] += 1;
                    
        if ( answers[i] == thr[thr_idx % (thr.size() + 1)])   
            solution[2] += 1;     
                    
        // cout << one[one_idx % (one.size() + 1)];
        one_idx++;
        if (one_idx == one.size()){
            one_idx = 0;
        }                                         
            
        //  cout << two[two_idx % (two.size() + 1)];
        two_idx++;
        if (two_idx == two.size()){
            two_idx = 0;
        }               
        
        // cout << thr[thr_idx % (thr.size() + 1)];
        thr_idx++;
        if (thr_idx == thr.size()){
            thr_idx = 0;
        }
    }

    int max = -1;
    for (int i =0; i < solution.size(); i++)
    {
        if (max <= solution[i])
            max = solution[i];
    }
 
    for (int i=0; i < solution.size(); i++)
    {
        if ( max == solution[i])
            ans.push_back(i+1);
    }

    return ans;

}

// TEST CASE = [1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5] output = [1]
