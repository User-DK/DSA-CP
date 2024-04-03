#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
const int MOD = 1e9 + 7;
using ull = unsigned long long;
using ld = long double;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string x;
    cin>>n>>x;
    int countBlock = 0, countDot =0;
    int consDot =0,maxDot =0;
    for(int i=0;i<n;i++){
        if(x[i]=='#'){
            countBlock ++;
            consDot=0;
        }
        else if(x[i]=='.'){
            countDot++;
            consDot++;
            maxDot = max(maxDot,consDot);
        }
    }

    if(maxDot>=3){
        cout<<2<<endl;
    }
    else if(countDot==0){
        cout<<0<<endl;
    }
    else {
        cout<<countDot<<endl;
    }
  }
}