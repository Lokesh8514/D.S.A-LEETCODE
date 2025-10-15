class Solution {
public:
    bool isanagram(string p,string q){
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        return p==q;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(!(isanagram(words[i-1],words[i])))
            ans.push_back(words[i]);
        }
        return ans;
    }
};