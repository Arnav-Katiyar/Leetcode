class Solution {
public:
    bool isSubsequence(string s, string t) {
        if((s.size()==0)){
            return true;
        }
      
        int k=0;
        int i=0;
        while((k<t.size())&&(i<s.size())){
            if(t[k]==s[i]){
                k++;
                i++;
            }
            else {
                k++;}
            
        }


        if(i==s.size())
        return true;


        else
        return false;
    }
};