#include <bits/stdc++.h>

using namespace std;

const int mxN=1e6;
int a[mxN], n, cnt=0;

void decode(){
	cin >> n;
	while(n!=0){
		a[cnt]=n%10;
		n/=10;
		cnt++;
	}
	int sum=0;
	for(int i=cnt-1; i>=0; i--){
		sum+=a[i];
	}
	cout << sum << "\n";
	cnt=0;	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}
