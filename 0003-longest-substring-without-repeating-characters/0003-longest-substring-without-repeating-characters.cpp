class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // brute force attack
        
    //  int maxel=0;
       
       

    //     for(int i=0;i<s.length();i++){
    //         int remain;
             
    //             unordered_set<char> duplicate;
    //                for(int j=i;j<s.length();j++){
                    
    //             char ascii=s[j];
                 
    //               if(duplicate.count(ascii)){
                      
    //                   break;
    //               }
    //                 duplicate.insert(ascii);
    //                 remain=j;
                  
                  
    //                }
                
                 
    //           if(maxel<duplicate.size()) maxel=duplicate.size();
    //           if(remain==s.length()-1) break;
    //     }

    //     return maxel;

            //optimized one using slide window
            unordered_set<char> window;
            int left=0;
            int maxl=0;

             for(int right=0;right<s.length();right++){
                    
                    while(window.count(s[right])){
                         window.erase(s[left]);
                         left++;      
                    }
                       window.insert(s[right]);
                        maxl=max(maxl,right-left+1);
                    
             }
return maxl;
             

    }
};