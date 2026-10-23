class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1 = ay2 - ay1 ; 
        int w1 = ax2 - ax1 ; 
        int area1 = l1*w1 ; 

        int l2 = by2 - by1 ; 
        int w2 = bx2 - bx1 ; 
        int area2 = l2*w2 ; 

        int left = max(ax1 , bx1) ; 
        int right = min(ax2 , bx2) ; 
        int top = min(ay2 , by2) ; 
        int bottom = max(ay1 , by1) ; 

        int ol = max(0 , right-left) ; 
        int ow = max(0 , top - bottom) ; 

        int overlap = ol*ow ; 
        return area1+area2-overlap ; 
        
    }
};