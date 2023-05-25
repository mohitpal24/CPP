#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <char> v;
	int n;
	cin>>n;
	for(char i='A';i<='Z'; i++ ){
		v.push_back(i);
	}

	
	
	for(int j=0; j<n; j++){

		for(int k=j; k>=0; k--){
			cout<<v[j]<<" ";
		}
		cout<<endl;
		
	}


}
