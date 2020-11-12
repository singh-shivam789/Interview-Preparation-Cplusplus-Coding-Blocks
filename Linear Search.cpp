#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    int arr[1000] = {0};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key you want to search ";
    cin>>key;

    ///Linear Search Algorithm
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<"The key is found at index "<<i<<endl;
            break;
        }
    }
    if(i == n)
    {
        cout<<"The key wasn't found in the array!"<<endl;
    }
    return 0;
}
