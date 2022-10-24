class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int MaxProfit = 0, SmallIndex = 0;
        
        for(int i=1; i< prices.size(); i++) 
        {
            if(prices[SmallIndex] > prices[i])
                SmallIndex = i;
            
            if((prices[i] - prices[SmallIndex]) > MaxProfit)
                MaxProfit = (prices[i] - prices[SmallIndex]);
        }    
        
        return MaxProfit;
    }
};