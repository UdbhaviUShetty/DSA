auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isPalindrome(int x) {

        int rev=0,n=x;
        while(x>0)
        {
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
                return 0;
            rev = rev*10+x%10;
            x=x/10;
        }
        if(rev==n)
            return true;
        else
            return false;
    }
};