// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]



// the key take away here is the use of (i  & (1<<j))!=0   which checks whether the bit at a position is set or not and the left shift helps to keep up with the nums index
//time complexity is o(2^n*n);

//Using bit Manipulation
class Solution {
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int m = nums.size();
        int n = 1<<m;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<m;j++){
                if((i  & (1<<j))!=0 ){
                    temp.push_back(nums[j]);
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
