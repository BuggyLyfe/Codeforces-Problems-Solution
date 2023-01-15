#include<bits/stdc++.h>
using namespace std;
int arr[10];
void __solve()
{
    for(int i=0;i<7;i++) {
        cin >> arr[i];
    }
    cout<<arr[0]<<' '<<arr[1]<<' '<<arr[6]-arr[0]-arr[1]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t-->0) {
        __solve();
    }
    return 0;
}
