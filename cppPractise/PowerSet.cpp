#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PowerSet(vector<int> v,int n, vector<vector<int> >& ans){
    
    int NoOfSubset = (1<<n);
    // cout<<NoOfSubset;
    for(int i=0;i<NoOfSubset;i++){
        vector<int> list;
        for(int j=0;j<n;j++){
            if((i&(1<<j))){
                list.push_back(v[j]);
            }
        }
        ans.push_back(list);
    }
    
};

int  main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<vector<int> > ans;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v[i]=k;
    }
    PowerSet(v,n,ans);
    // for(auto i : ans){
    //     for(auto it : i ){
    //         cout << it;
    //     }
    // }
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
