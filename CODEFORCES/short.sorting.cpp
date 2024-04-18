#include <iostream>
using namespace std;

int main(){
int n ;
cin>>n;
string cards;
cin>>cards;
if(cards=="abc"){
    cout<<"YES"<<endl;
}
if ((cards[0] == 'a' && cards[1] == 'b') || (cards[1] == 'a' && cards[2] == 'b') || (cards[0] == 'c' && cards[2] == 'c')) {
    cout<<"YES"<<endl;

}else{
    cout<<"NO"<<endl;
}

return 0;
}


    




