/*
*   Author       : Eklas Mohin
*   Prolem Name  : A. Paint the Numbers
*   Problem url  : https://codeforces.com/contest/1209/problem/A
*   Tags         : greedy * implementation * math
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},cnt{},arr[102]={};
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i{0}; i<n; i++)
    {
        if(arr[i]!=-1)
        {
            cnt++;
            for(int j{i+1}; j<n; j++)
            {
                if(arr[j]%arr[i]==0)
                {
                    arr[j]=-1;
                }
            }
        }

    }
    cout<<cnt<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    __solve();
    return 0;
}
