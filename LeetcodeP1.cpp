#include <iostream>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int x = nums[i];
            int newtarget = target - x;
            for (int j = i + 1; j < size; j++) {
                if (newtarget == nums[j]) {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }
        }
        return answer;
    }
};