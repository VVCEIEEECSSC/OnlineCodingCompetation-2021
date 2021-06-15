#include <bits/stdc++.h>
#define ll long long int 
#define nl '\n'
#define fst ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 



int main()
{
    int a[8][8];
    int ans= INT_MIN;
    int s=0;
for(int i=1; i<=8; i++)
for(int j=1; j<=8; j++)
{
cin>>a[i][j];
s=min(a[i][j],ans);
}

int a1[8];

int t=16;
int i=1;
int j=1;
// 2*2 mat
while(t--)
{
for(; i<=2; i++){
for(; j<=2; j++)

cout<<a[i][j]<<nl;
a1[i]=min(a[i][j],ans);
i=i+2;
j=j+2;}
}

//min index;
for(int i=1; i<=8; i++)
for(int j=1; j<=8; j++)
{
    if(a[i][j]==s)
    cout<<i<<" "<<j<<nl;
//cin>>a[i][j];
//s=min(a[i][j],ans);
}

// min element;
for(int i=1; i<=8 ;i++)
cout<<a[i]<<nl;





}
