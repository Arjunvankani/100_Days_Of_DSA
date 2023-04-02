class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    vector<int> &subarray;
    int max_sum = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        int curr_sum = 0;
        for (int j = i; j < nums.size(); j++) {
        curr_sum += nums[j];
        if (curr_sum > max_sum) {
            subarray.clear();
            max_sum = curr_sum;
            subarray.push_back(i);
            subarray.push_back(j);
        }
        }
    }
    return max_sum;
        }
};
