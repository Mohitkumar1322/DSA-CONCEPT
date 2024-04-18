#include <iostream>
using namespace std;
#include <math.h>
#include <vector>
#include <algorithm>



int main(){
    vector<int> v;
    int x1,x2,x3;
    cin>> x1 >> x2 >> x3;
int min_distance = (max(x1, max(x2, x3)) - min(x1, min(x2, x3))) / 2;
   cout<< min_distance<<endl;

   return 0;

}