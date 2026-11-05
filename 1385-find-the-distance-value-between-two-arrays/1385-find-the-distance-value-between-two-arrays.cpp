class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0 ;
        int n1 = arr1.size() ; 
        int n2 = arr2.size() ; 

        for(int i=0 ; i<n1 ; i++){
            for(int j=0 ; j<n2 ; j++){
                if(abs(arr1[i]-arr2[j]) <= d){
                    count++ ; 
                    break;
                }
            }
        }
        return n1 - count ; 
        
    }
};