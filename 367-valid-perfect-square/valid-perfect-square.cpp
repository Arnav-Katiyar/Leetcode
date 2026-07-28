class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i=sqrt(num); i<=sqrt(num)+1; i++){
            if(i*i==num){
                return true;
            }
            else return false;
        }
        return 0;
    }
};