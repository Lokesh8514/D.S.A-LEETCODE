class Solution {
public:
bool isvowel(char ch){
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
    bool doesAliceWin(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
        if(isvowel(s[i])){
            count++;
        }
        }
        return count==0?false:true;
    }
};