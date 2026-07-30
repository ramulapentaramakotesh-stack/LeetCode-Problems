class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        int left_sum = 0;
        int right_sum = 0;
        temp[0] = nums[0];

        for(int i=1; i<n; i++){
            temp[i] = temp[i-1]+nums[i];
        }
        
        for(int i=0; i<n; i++){

            if(i == 0) left_sum = 0;
            else left_sum = temp[i-1];

            if(i == n-1) right_sum = 0;
            else right_sum = temp[n-1]-temp[i];

            if(left_sum == right_sum)
                return i;
        }
        return -1;
    }
};