#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int CheckForUniqueValue(vector<int> v,int n){
    int ans=v[0];
   for(int i=1;i<n;i++){
    ans = (ans^v[i]);
   }
    return ans;
};

int  main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v[i]=k;
    }
    cout<<CheckForUniqueValue(v,n);
  
    return 0;
}
