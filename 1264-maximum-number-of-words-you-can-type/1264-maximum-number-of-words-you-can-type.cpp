class Solution {
public:
bool word(string s,vector<int>&arr){
    for(int i=0;i<s.length();i++){
    int a=s[i]-'a';
    //cout<<a<<" ";
    if(arr[a]==1)
    return false;
    }
    return true;
   // return arr[a]==0?true:false;
}
    int canBeTypedWords(string text, string brokenLetters) {
        int n=text.size();
        int m=brokenLetters.size();
        int words=1;
        int count=0;
        vector<int>arr(26);
        for(int i=0;i<m;i++){
            int a=brokenLetters[i]-'a';
            //cout<<a<<" ";
            arr[a]++;
        }
        int s=0;
        for(int i=0;i<text.size();i++){
            
            if(i==n-1||text[i]==' '){
                // words++;
              string str = (i == n-1) ? text.substr(s, i - s + 1) : text.substr(s, i - s);
                cout<<str<<" ";
                if(word(str,arr)){
                    count++;
                }
                s=i+1;
               
            }

        }
        // cout<<words<<endl;
        // cout<<count<<endl;
        // return 0;

        return count;

    }
};