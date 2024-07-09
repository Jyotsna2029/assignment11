//  Find the unique number in a given Array where all the elements are being repeated twice with one 
// value being unique.
#include <iostream>
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
    //checking 
    for(int i = 0; i<n; i++)
    {
        bool flag = true; // means unique
        for(int j = 0; j<n; j++)
        {
            if(j==i) continue;
            if(v[j]== v[i]) //not unique
            {
                flag = false;
                break;
            }
        }
        if(flag == true) 
        {
            cout<<"array is unique with unique elt."<<v[i]<<endl;
        }
    }
}