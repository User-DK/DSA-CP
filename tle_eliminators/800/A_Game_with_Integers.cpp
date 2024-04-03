#include <iostream>
using namespace std;
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int vovaLose=0;
        int i=1;
        while(true){
            if(i%2!=0){
                if((n-1)%3==0 || (n+1)%3==0){
                cout<<"First"<<endl;
                break;
                }
                else{
                    vovaLose++;
                    n=n+1;
                }
            }
            else{
                if(vovaLose==10){
                    cout<<"Second"<<endl;
                    break;
                }
                n=n-1;
            }
            i++;
        }
    }
}
