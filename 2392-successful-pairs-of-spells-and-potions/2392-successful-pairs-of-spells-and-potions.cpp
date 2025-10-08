class Solution {
public:
    int helperBS(vector<int>&potions,int target,int m){
        int s=0;
        int e=m-1;
    int ans=m;
        while(s<e){
            int mid=s+(e-s)/2;
            if(potions[mid]>=target)
            e=mid;
            else
            s=mid+1;
        }
        return s;
        
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        sort(potions.begin(),potions.end());
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            double den=spells[i];
            long long target=(success+den-1)/den;
            if(target<=potions[m-1])
            ans[i]=m-helperBS(potions,target,m);
            
        }
        return ans;

        
    }
};