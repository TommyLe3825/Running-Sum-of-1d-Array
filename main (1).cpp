#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) { //The parameter probably is using the address of nums so that changes can change nums directly
        int n = nums.size();                                //It could also be to save memory and time as it is directly accessing the variable
        for (int i = 1; i < n; ++i) {                       //at that address which is especially good with large data
            nums[i] += nums[i - 1]; // Update each element with the current sum
        }
        return nums;
    }
};

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    
    Solution solution;
    std::vector<int> result = solution.runningSum(nums); //using the function runningSum to return the new vector of integers of Running Sum

    // Display the result
    for (int num : result) { //for every num in result, print it out
        std::cout << num << " ";
    }

    return 0;
}
