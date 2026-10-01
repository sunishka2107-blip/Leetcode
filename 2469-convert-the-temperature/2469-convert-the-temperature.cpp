class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans ; 
        double k = celsius + 273.15 ; 
        double f = 1.80 * celsius + 32.00;
        ans.insert(ans.begin() , k);
        ans.push_back(f) ; 
        return ans ; 
        
    }
};