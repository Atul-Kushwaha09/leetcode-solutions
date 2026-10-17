class Solution {
public:
    bool isPalindrome(int x) {
        // 
//         int r,    temp=x;
//         long rev;
//          while(x>0){
//             r=x%10;
//             x=x/10;
//             rev=rev*10 + r;
//          }

//          if(rev == temp){
//             return true;
//          }
// else{
//     return false;
// }
       
    //   lets solve this after converting it into string;

    string ori =to_string(x);

    string palin(ori.rbegin(),ori.rend());

    if(ori==palin) return true;
    else return false; 

    }
};