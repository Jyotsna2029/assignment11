//  Find the difference between the sum of elements at even indices to the sum of elements at odd 
// indices.
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
    int sum_even = 0;
    int sum_odd = 0;
    for(int i = 0; i<n; i++)
    {
        if(i%2 == 0) sum_even += v[i];
        else sum_odd +=v[i];
    }
    cout<<"The sum of elements at even "<<sum_even<<endl;
    cout<<"The sum of elements at odd "<<sum_odd<<endl;
    cout<<"The difference between sum_even and sum_odd is "<<(sum_even-sum_odd);

}


