//implement POW(x,n) using recursion 

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
        if(n==-1)return 1/x;
        if(n==1)return x;
        double t = myPow(x,n/2);
        return t*t*myPow(x,n%2);   
    }
};
