class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;

        for(int i=0;i<nums.size();i++){
              int subsum=0;
            for(int j=i;j<nums.size();j++){
                  subsum+=nums[j];
                  if(subsum==k) count++;    
            }
        }

        return count;
    }
};