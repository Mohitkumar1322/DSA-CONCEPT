#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;

    //step 1: create a dp array of size n+1

    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;

    for(int i =2; i<=n; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    cout<<dp[n]<<endl;
    


}