//https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// O(3^N * 4^M) where N is the number of 3 length strings and M is 4 length string numbers


class Solution {
public:
    void helper(vector<string> &result, string &temp,string &digits, vector<string> &map,int ind,int n,int length){
        if(length==n){
            result.push_back(temp);
            return;
        }
        for(int i = ind;i<n;i++){
            int x = digits[i]-'0';
            for(int j=0;j<map[x].length();j++){
                temp += map[x][j];
                length ++;
                helper(result,temp,digits,map,i+1,n,length);
                temp.erase(temp.size()-1);
                length--;
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        string temp;
        if(digits.length()==0){
            return {};
        }
        vector<string> map = {"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        int n = digits.length();
        helper(result, temp, digits, map,0,n,0);
        return result;
    }
};
