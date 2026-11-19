class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        long long count = 0 ; 
        for(int i=0 ; i<n1 ; i++){
            long long a = 1LL * nums1[i] * nums1[i] ; 
            for(int j=0 ; j<n2 ; j++){
                for(int k=j+1 ; k<n2 ; k++){
                    if(1LL * nums2[j]*nums2[k] == a){
                        count ++ ; 
                    }
                }
            }
        }
        for(int i=0 ; i<n2 ; i++){
            long long a = 1LL * nums2[i] * nums2[i] ; 
            for(int j=0 ; j<n1 ; j++){
                for(int k=j+1 ; k<n1 ; k++){
                    if(1LL * nums1[j]*nums1[k] == a){
                        count ++ ; 
                    }
                }
            }
        }
        return count ; 
    }
};