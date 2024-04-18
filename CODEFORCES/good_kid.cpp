#include <iostream>
using namespace std;
#include <vector>



int main(){
    int numCases;
    cout<<"number of test cases are: ";
    cin>>numCases ;
    for(int t = 0 ; t<numCases; t++){
        int n ;
        cout<<"Enter the number of digits: ";
        cin>>n;

        vector<int> arr(n);
        int product = 1;
        bool hasZero = false;
        int smallestNonzero = 10;

        cout<<"enter the digits: ";
        for(int i = 0; i<n ; i++){
            cin>>arr[i];
            if(arr[i] == 0 ){
                hasZero = true;
            
            }else{
                product *= arr[i];
                smallestNonzero = min(smallestNonzero,arr[i]);

            }
        }
        if(hasZero){
            product = 0;

        }else{
            for(int i = 0; i<n ; i++){
                if(arr[i]== smallestNonzero){
                    arr[i]=1;
                    break;
                }
            }
        }
        cout<<"the product is:"<<product<<endl;
    
    }
    return 0;

    
    
    
};