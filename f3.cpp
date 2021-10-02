#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   long arr[n];
   for(int i = 0; i < n; i++)
   cin>>arr[i];
   long ans = 0;
   for(int i = 0; i < n-1; i++)
   {
       if(arr[i] > arr[i+1])
       {
           ans = ans + abs(arr[i] - arr[i+1]);
           arr[i+1] = arr[i];
       }
   }
   cout<<ans;
}
