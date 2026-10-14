class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums;
         int l1=nums1.size();
         int l2=nums2.size();
           int i=0,j=0;
         while(i<l1 and j<l2){
            if(nums1[i]<nums2[j]){
                 nums.push_back(nums1[i]);
                 i++;
            }
            else {
                nums.push_back(nums2[j]);
                j++;
            }
         }  
          while(i<l1){
            nums.push_back(nums1[i]);
            i++;
          }  
             
          while(j<l2){
            nums.push_back(nums2[j]);
            j++;
          }  
                
             
         
         int x=nums.size();
         if(x%2==0){

            int ans= nums[x/2]+nums[x/2 -1 ];
            return ans/2.0;
         }
         else{
            return nums[x/2];
         }

    }        
    
};