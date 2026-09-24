class Solution {
public:
    bool isPalindrome(string s) {

       s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
        return !std::isalnum(c);
    }), s.end());
     for (char &c : s) {
        c = std::tolower(static_cast<unsigned char>(c));
    }
        string dup=s;
        for(int i=0;i<s.size();i++)
        {
            s[(s.size()-1)-i]=dup[i];
        }
        if(dup==s)
            return true;
        else
            return false;
        
        
    }
};