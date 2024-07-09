// Given an array of integers, change the value of all odd indexed elements to its second multiple 
// and increment all even indexed values by 10.
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
    for(int i = 0; i<n; i++)
    {
        if(i%2 == 0) v[i] = v[i]+10;
        if(i%2 != 0) v[i] = v[i]*2;
    }
    cout<<endl;
    cout<<"The array modified array is: ";
    cout<<endl;
    for(int i = 0; i<v.size(); i++)
    { 
        cout<<v[i]<<" ";
    }
    cout<<endl;
}