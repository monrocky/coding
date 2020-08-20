#include<bits/stdc++.h>
using namespace std;
struct cell{
	int x;
	int y;
};
int shortestPath(cell c1,cell c2){
    int dx=abs(c1.x-c2.x);
    int dy=abs(c1.y-c2.y);
    return max(dx,dy);
}
int fun(cell arr[],int n){
int count=0;
for(int i=0;i<n-1;i++){
    count+=shortestPath(arr[i],arr[i+1]);
}
return count;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int B[n];
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    cell arr[n];
    for(int i=0;i<n;i++){
        arr[i].x=A[i];
        arr[i].y=B[i];
    }
	cout<<fun(arr,n)<<endl;
}
