class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int j=nums[i],k=nums[i+1];
            if(j==k){
                return true;
            }

        }
        return false;
    }
};