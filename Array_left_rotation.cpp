#include<bits/stdc++.h>

using namespace std;


vector<int> rotateArray(int n, int d, vector<int>&arr)
{
    vector<int> rotated(n);
    int newIndex;
   for(int i=0; i<n; i++)
   {  
     newIndex=(i+(n-d))%n;;
     rotated[newIndex]=arr[i];
   }

   return rotated;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the"<<endl;
    cin>>n;
     vector <int>arr(n);
     cout<<"Enter the elements in an array:\n";
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int d;
    cout<<"Enter the number of rotations :\n";
    cin>>d;
    cout<<endl;

    vector<int> result= rotateArray(n,d,arr); 
    for(int i=0; i<n ; i++)
      cout<<result[i]<<" ";
}