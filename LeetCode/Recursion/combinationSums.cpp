//-->https://leetcode.com/problems/combination-sum/

class Solution {
public:
    void helper(vector<int>&candidates,int target,vector<vector<int>>&result,vector<int>&temp,int i){
        if(i<0){
            return;
        }
        if(target==0){
            result.push_back(temp);
            return;
        }
        if(target>=candidates[i]){
            temp.push_back(candidates[i]);
            helper(candidates,target - candidates[i],result,temp,i);
            temp.pop_back();
        }
        helper(candidates,target,result,temp,i-1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        int n = candidates.size();
        vector<int>temp;
        helper(candidates,target, result,temp,n-1);
        return result;
    }
};
