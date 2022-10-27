#include <bits/stdc++.h>
using namespace std;
bool getPeak(int arr[],int n,int x){
	
	int i=0,j=n-1;
	while(i<=j){
		if(arr[i]+arr[j]==x) return true;
		else if(arr[i]+arr[j]>x) j--;
		else i++;
	}
	return false;
	
}
int main(){
	int n;cin>>n;
	int x;cin>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool ans=getPeak(a,n,x);
	cout<<ans;
}
