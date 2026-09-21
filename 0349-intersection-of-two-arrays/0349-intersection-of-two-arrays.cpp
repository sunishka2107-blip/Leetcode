class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> s1 ; 
        set <int> s2 ; 
        vector <int> v ; 
        for(int i=0 ; i<nums1.size() ; i++){
            s1.insert(nums1[i]) ; 
        }
        for(int i=0 ; i<nums2.size() ; i++){
            s2.insert(nums2[i]) ; 
        }
        for(auto i : s1){
            if(s2.count(i)){
                v.push_back(i) ; 
            }
        }
        return v ; 
    }
};