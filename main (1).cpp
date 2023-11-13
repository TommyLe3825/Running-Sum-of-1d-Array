#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> results(nums.size());
        results[0] = nums[0];
        int sum;

        for(int i = 1; i < nums.size(); i++){
            sum = nums[i] + results[i - 1];
            results[i] = sum; 
        }

        return results;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5}; //vector of integers
    Solution solution; // Create an instance of the Solution class
    vector<int> result = solution.runningSum(nums); // Call the runningSum method

    // Print the resulting vector
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}
