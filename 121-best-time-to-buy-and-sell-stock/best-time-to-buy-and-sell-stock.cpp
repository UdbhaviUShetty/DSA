class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_so_far=0,min_so_far=INT_MAX;

        for(size_t i=0;i<prices.size();i++)
        {
           if(prices[i]<min_so_far)
           {
            min_so_far=prices[i];
           }
           if(max_so_far<(prices[i]-min_so_far))
            max_so_far=prices[i]-min_so_far;
           
        }
        return max_so_far;
        
    }
};