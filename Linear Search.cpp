///Linear Search

///Search a particular element in the array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin>>n;

    int arr[1000] = {0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    ///Ask for the element we want to search
    cout<<"Enter the element you want to search: ";
    cin>>key;

    ///Linear Search Algorithm
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<key<<" is found at index: "<<i<<endl;
            break;
        }
    }
    if(i == n)
    {
        cout<<key<<" wasn't found in the array!"<<endl;
    }
    return 0;
}
