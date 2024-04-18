/*
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.
*/

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;

    int len = s.size();

    //first digit

    int f = s[0] - '0';
    if(f==9){
        s[0]='9';
    }else{
        if(f>4){
            s[0] = ((9-f)+'0');
        }
    }

    for(int i=1;i<len;i++){
        int a = s[i] - '0';

        if(a<5 || a==0){
            continue;
        }else{
            s[i] = ((9-a)+'0');
        }
    }

    cout<<s;

    return 0;
}
