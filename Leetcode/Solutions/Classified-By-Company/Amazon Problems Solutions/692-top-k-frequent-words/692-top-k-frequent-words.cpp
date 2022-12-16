class Solution {
public:
    static bool cmp(pair<int , string> s , pair<int , string> f)
    {
        if (f.first == s.first)
            return s.second < f.second;
        return s.first > f.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string , int> fr;
        for(int i = 0 ; i < words.size() ; ++i)
            fr[words[i]]++;
        vector<pair<int , string> > count;
        for(auto x : fr)
            count.push_back({x.second , x.first});
        sort(count.begin() , count.end() , cmp);
        vector<string> ans;
        for(int i = 0 ; i < k ; ++i)
            ans.push_back(count[i].second);
            // cout<<count[i].first<<" "<<count[i].second<<"\n";
        return ans;
            
    }
};