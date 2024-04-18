#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b,c,f,s;
        f=s=-1;
        cin>>a>>b;
        if(a<c) f=1;
        if(b*a>c) s=b;

        cout<<f<<" "<<s<<endl;
    }
}