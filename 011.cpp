#include<bits/stdc++.h>
using namespace std;
int main(){
int a[8][8]={{1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8}};

 
int j=0;
for(int i=0;i<7;i+=2){
for(int j=0;j<7;j=j+2){
   
if(a[i][j]<=a[i][j+1]&&a[i][j]<=a[i+1][j]&&a[i][j]<=a[i+1][j+1]){
cout<<"element"<<" "<<a[i][j]<<" "<<"postion("<<i<<","<<j<<")"<<endl;
}
else if(a[i][j+1]<=a[i][j]&&a[i][j+1]<=a[i+1][j]&&a[i][j+1]<=a[i+1][j+1]){
cout<<"element"<<" "<<a[i][j+1]<<" "<<"postion("<<i<<","<<j+1<<")"<<endl;
}
else if(a[i+1][j]<=a[i][j]&&a[i+1][j]<=a[i+1][j]&&a[i+1][j]<=a[i+1][j+1]){
cout<<"element"<<" "<<a[i+1][j]<<" "<<"postion("<<i+1<<","<<j<<")"<<endl;
}
else if(a[i+1][j+1]<=a[i][j]&&a[i+1][j+1]<=a[i+1][j]&&a[i+1][j+1]<=a[i+1][j+1]){
cout<<"element"<<" "<<a[i+1][j+1]<<" "<<"postion("<<i+1<<","<<j+1<<")"<<endl;
}
}
}
}
