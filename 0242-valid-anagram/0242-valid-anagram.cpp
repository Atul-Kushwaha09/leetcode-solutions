class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        vector<char> sa;
        vector<char> ta;
        for(int i=0;i<s.length();i++){
            sa.push_back(s[i]);
            ta.push_back(t[i]);
        }

        sort(sa.begin(),sa.end());
        sort(ta.begin(),ta.end());
          bool ans=true;
        for(int i=0;i<sa.size();i++){
              if(sa[i] != ta[i]){
                 ans=false;
                 break;
              }
        }

        return ans;
    }

};