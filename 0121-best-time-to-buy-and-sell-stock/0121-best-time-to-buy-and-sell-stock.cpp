class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxstock=0;
        // Brute force attack;
        //   for(int i=0;i<prices.size()-1;i++){
        //              for(int j=i+1;j<prices.size();j++){
        //                      if(prices[i]>prices[j]){
        //                         break;
        //                      }
        //                      else{
        //                          maxstock=max(maxstock,prices[j]-prices[i]);
        //                      }
        //              }
        //   }

        //   return maxstock;
    // optimized solution
              int buyprice=prices[0];
              int profit=0;

              for(int i=1;i<prices.size();i++){
                     if(buyprice>prices[i]){
                             buyprice=prices[i];
                     }

                     profit=max(profit,prices[i]-buyprice);
              }    
              return profit;
     }
};