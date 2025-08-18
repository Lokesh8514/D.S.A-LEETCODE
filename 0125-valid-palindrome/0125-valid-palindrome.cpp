class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) {
            return true;
        }
       /*brute force*/
        // string a="";
        // for(int i=0;i<s.size();i++){
        //     if(isalnum(s[i])){
        //     char b=tolower(s[i]);
        //     a=a+b;
        //     }
        // }
        // int i=0;
        // int j=a.length()-1;
        // while(i<=j){
        //     if(a[i]!=a[j])
        //     return false;
        //     i++;
        //     j--;
        // }
        // return true;

        /*optimized*/
        int start = 0;
        int last = s.length() - 1;
        
        while (start <= last) {
            char currFirst = s[start];
            char currLast = s[last];
            
            if (!isalnum(currFirst)) {
                start++;
            } else if (!isalnum(currLast)) {
                last--;
            } else {
                if (tolower(currFirst) != tolower(currLast)) {
                    return false;
                }
                start++;
                last--;
            }
        }
        return true;
    }
};
