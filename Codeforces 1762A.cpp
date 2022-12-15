/*
*   Author       : Eklas Mohin
*   Prolem Name  : A. Divide and Conquer
*   Problem url  : https://codeforces.com/contest/1762/problem/A
*   Tags         : greedy * number theory
*/
#include<bits/stdc++.h>
using namespace std;
int arr[52];
void __solve()
{
    int n{},k{},sum{0},cnt{INT_MAX};
    cin >> n;
    for(int i{0};i<n;i++) {
        cin >> arr[i];
        sum=sum+arr[i];
    }
    if(sum%2==0) {
        cout<<0<<endl;
    } else {
        for(int i{0};i<n;i++) {
            k=sum;
            int temp{0};
            while(k%2==1) {
                k=k-(arr[i]-arr[i]/2);
                arr[i]=arr[i]/2;
                temp++;
            }
            if(temp<cnt) {
                cnt=temp;
            }
        }
        cout<<cnt<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t{};
    cin >> t;
    while(t-->0) {
        __solve();
    }
    return 0;
}
