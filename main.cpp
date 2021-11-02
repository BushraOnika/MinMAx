#include <iostream>
#include "MinMax.cpp"

using namespace std;
int main() {
    MinMax<double> n;
    int s;
    cin>>s;
    double arr[s];
    for (int i = 0; i < s; ++i) {
        cin>>arr[i];

    }
for (int i = 0; i < s; ++i) {
        cout<<arr[i]<<", ";

    }
    n.initializeMinMax(arr,s);
   cout<<endl<<fixed<< n.getMax()<<endl;
    cout<<fixed<<n.getMin()<<endl;

   // double arr[5]={29.75,-23.01,-23.001,29.757,-1.032}; 29.75 -23.01 -23.001 29.757 -1.032

    
    return 0;
}
