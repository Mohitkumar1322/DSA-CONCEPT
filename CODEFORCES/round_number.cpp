#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    for(int i= 0; i< n; i++){

        int num;
        cin >> num;
        int count = 0;
        int temp = num;
        while(temp>0){
            count++;
            temp = temp/10;
        }
        cout<<count<<endl;
        int ans = 0;
        for(int i = 0; i<count; i++){
            ans = ans*10 + 1;
        }
        cout<<ans<<endl;
        int res = 0;
        for(int i = 1; i<=9; i++){
            int temp = ans*i;
            if(temp<=num){
                res++;
            }
        }
        cout<<res<<endl;
    }
}