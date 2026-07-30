class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int n=x;
        int digits=0;
        while(n!=0){
            n/=10;
            digits++;
        }

        vector<int> v;

        for(int i=0; i<digits; i++){
        
            v.push_back(x%10);
            x/=10;
        }
        
        int l=0;
        int r=digits-1;
        while(l<=r){
            if(v[l]==v[r]){
               v[l++];
               v[r--];
            }
            else 
            return false;
        }
        return true;


        
    }
};