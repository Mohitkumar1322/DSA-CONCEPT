#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int ans = 0;
    int max_cap =0;
    for(int i =0;i<n;i++){
        int pass , total_pass;
        cin>>pass>>total_pass;
         ans = ans - pass + total_pass;

        if(ans> max_cap){
            max_cap = ans;
        }

        
    }
    cout<<max_cap<<endl;
    return 0;
}