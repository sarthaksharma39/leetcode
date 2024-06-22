class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length()-1;
    
        string temp="";
        string ans="";
        
        while(left<=right){
            if(s[left]!=' '){
                temp+=s[left];
            }
            else if(s[left]==' ' && temp!=""){
                if (ans!="") {
                    ans = temp + " " + ans;
                    temp="";
                }
                else {ans = temp;
                    temp = "";}
            }
            left++;
        }
        if (temp!="") {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
        }
        return ans;
    }
};