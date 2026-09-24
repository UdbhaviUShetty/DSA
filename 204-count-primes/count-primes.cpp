class Solution {
public:

    int countPrimes(int n) {
         ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=1;
        if(n<=2)
            return 0;
        vector<char> isPrime(n,true);
        for(int i=3;i*i<n;i+=2)
        {
            if(isPrime[i])
            {
                for(int j=i*i;j<n;j+=2*i)
                {
                    isPrime[j]=false;
                }
            }
        }
        for(int i=3;i<n;i+=2)
        {
            if(isPrime[i])
                count++;
        }
        return count;
    }
};