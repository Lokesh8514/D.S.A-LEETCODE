class Solution {
public:
    bool isanagram(string p,string q){
        // sort(p.begin(),p.end());
        // sort(q.begin(),q.end());
        // return p==q;
    if(p.length()!=q.length())
    return false;
        vector<int>hash(26,0);
        for(int i=0;i<p.length();i++){
            hash[p[i]-'a']++;
        }
        for(int i=0;i<q.length();i++){
            hash[q[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(hash[i]!=0)
            return false;
        }
        return true;

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