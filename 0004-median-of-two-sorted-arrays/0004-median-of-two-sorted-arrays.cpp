class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        double n1=nums1.size();
        double n2=nums2.size();
        double i=0 , j=0 , k=0 ;
        while (i<=n1-1 && j<=n2-1){
            if (nums1[i]<nums2[j]){
                nums3.push_back(nums1[i]) ; 
                i++ ; 
            }
            else{
                nums3.push_back(nums2[j]);
                j++ ;
            }

        }
        while (i<=n1-1){
            nums3.push_back(nums1[i]);
            i++ ;
        }
        while (j<=n2-1){
            nums3.push_back(nums2[j]);
            j++ ;
        }
        int n3=nums3.size() ; 
        if (n3%2!=0){
            return nums3[(n3-1)/2] ;
        }
        else {
            return (nums3[n3/2] + nums3[n3/2 - 1]) / 2.0;
        }
                }
        
    
};