class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //  unordered_map<int, int> numMap;
        // int n = nums.size();

        // for (int i = 0; i < n; i++) {
        //     int complement = target - nums[i];
        //     if (numMap.count(complement)) {
        //         return {numMap[complement], i};
        //     }
        //     numMap[nums[i]] = i;
        // }

        // return {};
        
       vector<int> ans;

        for(int i=0;i<nums.size()-1;i++){
            int complement=target-nums[i];
                   for(int j=i+1;j<nums.size();j++){
                       if(nums[j]==complement){
                        ans.push_back(i);
                        ans.push_back(j);
                       
                        break;
                       }
                     

                      
                   }

                     if(!ans.empty()){
                        break;
                       }
            
        }

        return ans;
    }
    
};