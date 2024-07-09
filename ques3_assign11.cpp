// Check if the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int count = 0;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    cout<<"The array is: ";
    cout<<endl;
    for(int i = 0; i<v.size(); i++)
    { 
        cout<<v[i]<<" ";
    }
    cout<<endl;
    bool flag = false; // means not sorted
    for(int i = 0; i<n-1; i++)
    {
        for( int j = i+1; j<n; j++)
        {
            if(v[j] > v[i]) flag = true;
            else flag = false;
        }
    }
    if(flag == true) cout<<"The array is sorted";
    else cout<<"The array is not sorted";
}