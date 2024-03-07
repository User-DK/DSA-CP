// Binary strings with no consecutive 1s.


void stringGenerator(vector<string> &result, string temp, int i,int N){
    if(i==N){
        result.push_back(temp);
        return;
    }
    
    if(i!=0 && temp[i-1]=='1'){  
        stringGenerator(result,temp+'0',i+1, N);
    }

    else{
        stringGenerator(result,temp+'0',i+1,N);
        stringGenerator(result,temp+'1',i+1,N);
    }
}

vector<string> generateString(int N) {
    // Write your code here.
    vector<string>result;
    stringGenerator(result,"",0,N);
    sort(result.begin(),result.end());
    return result;
}
