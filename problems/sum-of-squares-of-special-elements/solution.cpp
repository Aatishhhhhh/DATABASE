class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int target = nums.size();
        int i;
        int sum = 0;
        for(i=1; i<=nums.size(); i++){
            if(target % i == 0){
                sum = (sum + (nums[i-1] * nums[i-1]));
            }
        }

        return sum;
    }
};