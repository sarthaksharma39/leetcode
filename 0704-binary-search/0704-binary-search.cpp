class Solution {
public:
    int binary(int i, int j, int t, vector<int>& nums) {
        if (i > j) { // base case: if i > j, the search space is empty
            return -1;
        }
        
        int mid = i + (j - i) / 2; // calculating mid properly to avoid overflow
        if (t == nums[mid]) return mid;
        else if (t < nums[mid]) {
            return binary(i, mid - 1, t, nums); // adjust the upper bound
        }
        else if (t > nums[mid]) {
            return binary(mid + 1, j, t, nums); // adjust the lower bound
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        return binary(i, j, target, nums);
    }
};
