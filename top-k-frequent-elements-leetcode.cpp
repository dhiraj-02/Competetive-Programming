//https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> m;
        for(auto i:nums)
        {
            m[i]++;
        }
        multimap<int, int, greater<int>> MM;
        for (auto& it : m) 
        {
            MM.insert({ it.second, it.first });
        }
        vector<int> v;

        for(auto i = MM.begin(); i != MM.end(); i++)
        {
            //cout<<i->first<<" "<<i->second<<endl;
            v.push_back(i->second);
            k--;
            if(k==0)
            break;
        }
        return v;
    }
};