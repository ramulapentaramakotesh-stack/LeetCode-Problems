class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        int sum = 0;
        int subArrayCount = 0;

        for(int i=0; i<n; i++){
            sum = sum + nums[i];

            if(sum == k)
                subArrayCount++;
            
            int prev = sum - k;
            if(mpp.find(prev) != mpp.end())
                subArrayCount += mpp[prev];

            mpp[sum]++;

        }
        return subArrayCount;
    }
};