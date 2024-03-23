#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countSet(int n){
    int count =0;
    while(n>1){
        count += n&1;
        n=(n>>1);
    }
    if(n==1) count++;
    return count;
};
int countSetOpti(int n){
int count =0;
while(N!=0){
    n=(n&(n-1));
    count++;
}
return count; 
}
int  main()
{
    int n;
    cin>> n;
    cout<<countSet(n)<<endl;
    cout<<__builtin_popcount(n);
    return 0;
}
