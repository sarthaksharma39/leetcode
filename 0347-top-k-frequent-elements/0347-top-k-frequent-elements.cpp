class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map <int,int> mp;
    for(int x:nums){
        mp[x]++;
    }
    vector<pair<int,int>> freqpair;
    for(auto x: mp){
        freqpair.push_back({x.second,x.first});
    }

    sort(freqpair.begin(),freqpair.end());
    vector <int> ans;
    for(auto x:freqpair){
        ans.push_back(x.second);
    }
    reverse(ans.begin(),ans.end());

    vector<int> finalans(ans.begin(),ans.begin()+k);
    return finalans;
    }
};