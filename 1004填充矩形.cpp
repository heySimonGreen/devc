#include<iostream>
using namespace std;
int main(){
	long long n,m,a;
	cin>>n>>m>>a;
	long long x = n/a;
	long long y = m/a;
	long long res = x*y;
	cout<<res<<endl;
	return 0;
}

