class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> m ; 
        for(int i=0 ; i<matches.size() ; i++){
            m[matches[i][0]] ;
            m[matches[i][1]] ++ ; 
        }
        vector<vector<int>> answer(2) ; 
        for(auto it : m){
            if(it.second == 0){
                answer[0].push_back(it.first);
            }
            else if(it.second == 1){
                answer[1].push_back(it.first);
            }
        }
        return answer ; 
    }
};