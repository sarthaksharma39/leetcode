class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0); 
        stack<int> s;
        
        for (int i = 0; i < temperatures.size(); i++) {
            
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int prevIndex = s.top();
                s.pop();
                ans[prevIndex] = i - prevIndex; 
            }
            s.push(i); 
        }
        
        return ans;
    }
};
