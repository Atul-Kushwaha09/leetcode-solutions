class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //   approach 
    //    int maxsub=INT_MIN;
    //    for(int i=0;i<=nums.size()-1;i++){
    //     int tempmax=nums[i];
    //           for(int j=i+1;j<nums.size();j++){
    //              tempmax+=nums[j];
    //              maxsub = max(maxsub,tempmax);   
    //           }
    //         //   maxsub = max(maxsub,tempmax);
    //    }

    //    return maxsub; 

    // optimized solution;

     int leftsum=nums[0];
     int result=nums[0];
     for(int i=1;i<nums.size();i++){
        leftsum= max(nums[i], leftsum + nums[i]);
        result = max(result,leftsum);

     }
     return result;

    }
};