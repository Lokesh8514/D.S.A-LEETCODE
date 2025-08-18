class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>arr(26,0);
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            arr[t[i]-'a']--;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0)
            return false;
        }
        return true;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t?true:false;
    }
};