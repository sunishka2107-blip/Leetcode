class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int j = people.size()-1 ;
        int i = 0 ; 
        int count = 0 ;
        sort(people.begin() , people.end()) ; 
        while(i<=j){
            if(people[i] + people[j] <= limit){
                count++ ; 
                i++;
                j--;
            }
            else{
                count++ ; 
                j-- ; 
            }
        } 
        return count ; 
    }
};