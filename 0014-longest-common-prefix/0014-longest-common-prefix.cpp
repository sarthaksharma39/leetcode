class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n= strs.size();
        string f=strs[0],l=strs[n-1];
        for(int i=0;i<min(f.length(),l.length());i++){
            if(f[i]!=l[i]) return ans;
            else ans+=f[i];
        }
        return ans;
    }
};