#include<bits/stdc++.h>
using namespace std;

//Find the largest and smallest number in a array

int main(){
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    ///Algorithm to find largest and smallest from the array
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i=0; i<n; i++){
       largest = max(largest, arr[i]);
       smallest = min(smallest, arr[i]);
    }

    cout<<"Smallest element is: "<<smallest<<endl;
    cout<<"Largest element is: "<<largest<<endl;
}
