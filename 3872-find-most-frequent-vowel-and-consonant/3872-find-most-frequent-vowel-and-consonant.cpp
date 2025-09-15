class Solution {
public:
bool isvowel(char ch){
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end())
            mp[s[i]]++;
            else
            mp.insert({s[i],1});
        }
        int maxv=0;
        int maxc=0;
        for(auto i:mp){
            if(isvowel(i.first))
            maxv=max(maxv,i.second);
            else
            maxc=max(maxc,i.second);
        }
        return maxv+maxc;

    }
};