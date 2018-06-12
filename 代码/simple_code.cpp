#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20]={0};

bool tree(int i,int sum){
	if(i==n){
		printf("1=%d\n",sum);
		return sum==k;
	};
	if(tree(i+1,sum)){
		printf("2=%d\n",sum);
		return true;
	}
	if(tree(i+1,sum+a[i])){
		printf("3=%d\n",sum);
		return true;
	}
	printf("4=%d\n",sum);
	return false;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	printf("%d",tree(0,0));
	return 0;
} 
