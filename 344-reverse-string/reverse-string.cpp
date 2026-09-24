class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> dup=s;
        for(size_t i=0;i<s.size();i++)
        {
            s[(s.size()-1)-i]=dup[i];
        }
        
    }
};