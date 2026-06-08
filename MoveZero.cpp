class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int f=0;
       
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                f++;

            }
            else if(f>0){
                swap(nums[i],nums[i-f]);
            }
        }
        
    }
};