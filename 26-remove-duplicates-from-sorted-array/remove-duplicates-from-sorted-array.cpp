
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (auto it = nums.begin(); it!=nums.end()-1;){
        
            if(*it==*(it+1))
            nums.erase(it);
            else it++;
        }

    return nums.size();
    }
};