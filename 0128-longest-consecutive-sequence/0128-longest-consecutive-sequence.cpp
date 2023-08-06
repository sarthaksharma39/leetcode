class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int count=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for(auto x:s){
            nums.push_back(x);
        }
        if(nums.size()==1 || nums.size()==0){
            return nums.size();
        }
        int m=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                count++;
            }
            else{
                count=1;
            }
            m=max(m,count);
        }
        return m;
    }
};