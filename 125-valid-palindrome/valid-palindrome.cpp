class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i=0; i<s.size(); i++){
            
            if(((s[i]>=32)&&(s[i]<=47))||(s[i]>=58)&&(s[i]<=64)||(s[i]>=91)&&(s[i]<=96)||(s[i]>=123)){
                s.erase(i,1);
                i--;
                continue;
            }
            s[i]=tolower(s[i]);
        }
        int l=0;
        int r=s.size()-1;

        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else 
            return false;
        }
        return true;



    }
};