class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //  brute force attack
    //    vector<int> ans;

    //     for(int i=0;i<nums.size()-1;i++){
    //         int complement=target-nums[i];
    //                for(int j=i+1;j<nums.size();j++){
    //                    if(nums[j]==complement){
    //                     ans.push_back(i);
    //                     ans.push_back(j);
                       
    //                     break;
    //                    }
                     

                      
    //                }

    //                  if(!ans.empty()){
    //                     break;
    //                    }
            
    //     }

    //     return ans;
          unordered_map<int , int> answer;

          for(int i=0;i<nums.size();i++){
                int compliment= target-nums[i];
                  if(answer.count(compliment)){
                       return{answer[compliment],i};
                  }
                  answer[nums[i]]=i;
          }

          return {};

    }
    
};