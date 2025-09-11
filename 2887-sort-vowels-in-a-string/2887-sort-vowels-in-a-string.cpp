class Solution {
public:

 bool isVowel(char ch) {
        ch = tolower(ch); 
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    string sortVowels(string s) {
     int n=s.length();
     string t(n,' ');
    vector<char>d;
     for(int i=0;i<n;i++){
        if(!(isVowel(s[i]))){
            t[i]=s[i];
        }
        else{
           d.push_back(s[i]);
        }
     }   
     //cout<<d<<endl;
     //cout<<t<<endl;
     sort(d.begin(),d.end());
     //cout<<d<<d.size()<<endl;
     int j=0;
     for(int i=0;i<n;i++){
        if(t[i]==' '){
        t[i]=d[j];
        j++;
        }
     }
     return t;
    }
};