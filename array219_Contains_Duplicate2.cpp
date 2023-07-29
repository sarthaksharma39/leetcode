class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[0]){
       
               if(abs(i)<=k)return true;
            }
             if(m[nums[i]]){
                 int index1=m[nums[i]];
                if(abs(i-index1)<=k)return true;
                m[nums[i]]=i;
             }
             else{
                 m[nums[i]]=i;
             }
        }
        return false;
    }
};