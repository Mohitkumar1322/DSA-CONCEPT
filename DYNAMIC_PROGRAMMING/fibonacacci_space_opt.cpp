#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int prev1 =0;
    int prev2 = 1;
    int current =0;
    //here we are using only 3 variables to store the values of the fibonacci series
    //this is called space optimization
    for(int i =2;i<=n;i++){
        current = prev1+prev2;
        prev1 = prev2;
        prev2 = current;
    }

    cout<<current<<endl;
    return 0;
}