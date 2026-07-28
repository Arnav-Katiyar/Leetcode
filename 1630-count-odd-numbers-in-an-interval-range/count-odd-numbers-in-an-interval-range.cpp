class Solution {
public:
    int countOdds(int low, int high) {
        int d=(high-low)/2;
        if((low%2!=0)&(high%2!=0)){
            return d+1;
        }
        if((low%2==0)&(high%2==0)){
            return d;
        }
        if(((low%2!=0)&(high%2==0))||((low%2==0)&(high%2!=0))){
            return d+1;
        }
        else return 0;


    }
};