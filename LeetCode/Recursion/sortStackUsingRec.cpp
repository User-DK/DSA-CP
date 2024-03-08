#include <bits/stdc++.h> 

void funct(stack<int> &s, vector<int> &temp,int i){
	if(s.empty()){
		sort(temp.begin(), temp.end(),[](const int& a, const int& b){
			return a>b;
		});
		return;
	}
	temp.push_back(s.top());
	s.pop();
	funct(s,temp,i+1);
	s.push(temp[i]);
}


stack<int> sortStack(stack<int> &s)
{
	// Write code here.
	vector<int>temp;
	funct(s,temp,0);
	return s;
}
