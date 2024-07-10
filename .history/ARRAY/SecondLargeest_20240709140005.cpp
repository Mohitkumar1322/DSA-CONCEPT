#include <iostream>
using namespace std;

#include <climits>


int findsecondLargest(int arr[], int size){
    int largest=INT_MIN;
    int secondlargest = INT_MIN;
    for(int i = 0 ; i<size; ++i){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i] != largest){
            secondlargest=arr[i];
        }
    }
}

int main(){
    int arr[] = { 1,3,5,3,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int secondLargest = findsecondLargest(arr,size);

    if(secondLargest != INT_MIN){
        cout<<"Second largest element is "<<secondLargest;
    }
    else{
        cout<<"There is no second largest element"; 
    }
    return 0;

}
