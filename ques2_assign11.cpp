//  WAP to find the largest three elements in the array.
#include<iostream>
#include<vector>
#include<climits>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int count = 0;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);}
    cout<<endl;
    cout<<"The array is: "<<endl;
    for(int i = 0; i<v.size(); i++){ 
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int max = INT_MIN;
    for(int i = 0; i<n ; i++)
    {
        if(v[i]>max) max = v[i];
    }
    cout<<"The largest elt is: "<<max<<endl;
    int sec_max = INT_MIN;
    for(int i = 0; i<n ; i++)
    {
        if(v[i]>sec_max && v[i]!=max) sec_max = v[i];
    }
    cout<<"The second largest elt is: "<<sec_max<<endl;
    int third_max = INT_MIN;
    for(int i = 0; i<n ; i++)
    {
        if(v[i]>third_max && v[i]!=max && v[i]!=sec_max) third_max = v[i];
    }
    cout<<"The third largest elt is: "<<third_max<<endl;

    cout<<"The largest three elements in the array are "<<max<<","<<sec_max<<","<<third_max<<".";

}
