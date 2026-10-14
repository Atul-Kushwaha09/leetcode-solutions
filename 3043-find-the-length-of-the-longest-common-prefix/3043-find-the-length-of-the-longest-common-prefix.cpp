class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        // brute force version,time limit exceeded
        // int l1=arr1.size();
        //     int l2=arr2.size();
        //     vector<int> length;

        //     for(int i=0;i<l1;i++){
        //             string s1=to_string(arr1[i]);
                    
        //               for(int j=0;j<l2;j++){
        //                  string s2=to_string(arr2[j]);
        //               //  if(arr1.size()==1 and arr2.size()==1){
        //                 int count=0;
                           
        //                     int minu = min(s1.length(),s2.length());
        //                           for(int k=0;k<minu;k++){
        //                             if(s1[k]!=s2[k]){
        //                                 break;
        //                             }
        //                             else if(s1[k]==s2[k]  or s2[k]==s1[k]){
        //                                 count++;
        //                              }    
        //                           }
        //                           length.push_back(count);
        //               //  }
        //                  // else {
        //                     //    if(s1.find(s2)==0){
        //                     //       length.push_back(s2.length());
        //                     // }
        //                     // if(s2.find(s1)==0){
        //                     //       length.push_back(s1.length());
        //                     // }
        //                   }
        //               }
            
        //     if(!length.empty()){
        //     int min= *max_element(length.begin(),length.end());
        //     return min;
        //      }
        //      else{
        //         return 0;
        //      }


        // lets try with HAsh Table

        unordered_set<int> prefixes;

        for(int num : arr1){
            while(num>0){
                prefixes.insert(num);
                num/=10;
            }
        }

        int maxlength=0;

        for(int num : arr2){
            while(num>0){
                  
                  if(prefixes.count(num)){
                     int currentlength= to_string(num).length();
                     maxlength= max(maxlength,currentlength);
                     break;

                  }
                  num/=10;
            }

            
        }
        return maxlength;
    }
};