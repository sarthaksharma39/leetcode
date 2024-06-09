class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2= nums2.size();
        vector<int> ans;

        for (int i = 0; i < n1; i++) {
            int a = -1; // Reset 'a' for each element in nums1
            int j = 0;
            while (j < n2 && nums2[j] != nums1[i]) {
                j++;
            }
            for (j = j + 1; j < n2; j++) {
                if (nums2[j] > nums1[i]) {
                    a = nums2[j]; // Set 'a' to the next greater element
                    break; // No need to continue the inner loop
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
    
};