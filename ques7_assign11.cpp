//  If an array arr contains n elements, then check if the given array is a palindrome or not .
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
    // cout<<"The array is: ";
    // cout<<endl;
    // for(int i = 0; i<v.size(); i++)
    // { 
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // for array to be palindrome
    // v[i] = v[n-1-i]
    bool flag =  false;// means not a palindrome
    for(int i = 0; i<n; i++)
    {
        if(v[i]==v[n-1-i]) flag = true;
        else flag = false;
    }
    // cout<<flag;
    if(flag == true) cout<<"the array is plaindrome ";
    else cout<<"The array is not palindrome";
}