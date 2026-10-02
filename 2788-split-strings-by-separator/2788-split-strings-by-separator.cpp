class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words,
                                         char separator) {
        vector<string> v;
        for (int i = 0; i < words.size(); i++) {
            string s = "";
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] != separator) {
                    s = s + words[i][j];
                }

                else {
                    if (s != "") {
                        v.push_back(s);
                        s = "";
                    }
                }
            }
            if(s!=""){
                v.push_back(s) ; 
            }
        }
        return v;
    }
};