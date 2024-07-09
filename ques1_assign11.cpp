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
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i = 0; i<n; i++)
    {
        if(v[i]>x) count +=1;
    }
    cout<<"the number of elements strictly greater than "<<x<<" are "<<count; 
} 