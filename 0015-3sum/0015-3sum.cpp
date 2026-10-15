class Solution {
public:
    

     
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> ansreturn;
         int n=nums.size();
   
  for(int i=0;i<nums.size()-2;i++){
          if(i>0 && nums[i]==nums[i-1]) continue;
   
         int target=-nums[i];
        unordered_map<int , int> sum2;
        for(int j=i+1;j<nums.size();j++){
              int complement=target-nums[j];
                if(sum2.count(complement)){
                    //    pair3.push_back(nums[i]);
                    //    pair3.push_back(nums[j]);
                    //    pair3.push_back(complement);
                    //    break;
                    ansreturn.push_back({nums[i],complement,nums[j]});
                    while(j<n-1 && nums[j]==nums[j+1] ){
                        j++;
                    }
                }
                sum2[nums[j]]=j;
        }
        //   if(pair3.size()!=0){
        // sort(pair3.begin(),pair3.end()); 
        // ansreturn.push_back(pair3);

        // }
  }

  return ansreturn;        

    }
};