#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,sum=0;
    cout<<"how many natural number:-"<<endl;
    cin>>n;
    for(int i=1; i<=n;i++){
        cin>>a;
        sum+=a;
    }
    cout<<"the sum is "<<sum;
    return 1;
}
