class Solution {
public:
    void stringGenerator(vector<string>&result,string temp,int i, int left,int right,int n){
        if(left==n || i==2*n){
            while(right!=n){
                temp+=')';
                right++;
            }
            result.push_back(temp);
            return;
        }

        if(i==0 || (temp[i-1]==')' && right>=left)){
            stringGenerator(result,temp+'(',i+1,left+1,right,n);
        }
        else if(temp[i-1]==')' && right<left){
            stringGenerator(result,temp+'(',i+1,left+1,right,n);
            stringGenerator(result,temp+')',i+1,left,right+1,n);
        }
        else{
            stringGenerator(result,temp+'(',i+1,left+1,right,n);
            stringGenerator(result,temp+')',i+1,left,right+1,n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>result;
        stringGenerator(result,"",0,0,0,n);
        return result;
    }
};
