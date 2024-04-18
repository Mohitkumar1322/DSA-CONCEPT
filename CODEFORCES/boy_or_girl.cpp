#include<iostream>

#include<string>
#include<unordered_set>



using namespace std;

string deteminedGender(string s){
    unordered_set<char> set;
    for(char i : s ){
        set.insert(i);
    }

    if(set.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}

int main(){
    string s;
    cin>>s;
    deteminedGender(s);
}
