class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // for(int i = 0 ; i < nums.size() - 1; i++){
        //     if(nums[i] == 0){
        //         for(int j = i+1; j < nums.size(); j++){
        //             if(nums[j] != 0){
        //                 swap(nums[i], nums[j]);
        //                 i++;
        //             }
        //         }
        //     }
        // }
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};