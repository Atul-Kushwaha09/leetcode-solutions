class Solution {
public:
    //  int prefix(int a){
    //     int count=0;
    //      for(int i=0;i<a;i++){
    //         for(int j=0;j<a;j++){
    //             if()
    //         }
    //      }
    //  }
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> C;
         for(int i=0;i<A.size();i++){
             int count=0;
                 for(int j=0;j<=i;j++){
                      for(int k=0;k<=i;k++){
                            if(A[j]==B[k]){
                                count++;
                                break;
                            }
                      }
                 }
                 C.push_back(count);

         }
         return C;
    }
};