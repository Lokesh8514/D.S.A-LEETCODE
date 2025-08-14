class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string>s{"999","888","777","666","555","444","333","222","111","000"};
        for(int i=0;i<s.size();i++){
            if(num.find(s[i])!=string::npos){
                return s[i];
            }
        }
        return "";

        // int maxi=-1;
        // for(int i=0;i<num.size()-2;i++){
        //     if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
        //         string s=num.substr(i,3);
        //         int a=stoi(s);
        //         if(a==0)
        //         return "000";
        //         maxi=max(maxi,a);
        //     }
        // }
        // return maxi!=-1 ? to_string(maxi) : "";
    }
};