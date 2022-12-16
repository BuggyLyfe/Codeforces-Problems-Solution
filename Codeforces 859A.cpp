/*
*   Author       : Eklas Mohin
*   Prolem Name  : A. Declined Finalists
*   Problem url  : https://codeforces.com/contest/859/problem/A
*   Tags         : implementation
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},k{},x{0};
    cin >> n;
    for(int i{1};i<=n;i++) {
        cin >> k;
        if(k>x) x=k;
    }
    cout<<max(x-25,0)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    __solve();
    return 0;
}
