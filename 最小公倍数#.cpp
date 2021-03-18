#include<iostream>
using namespace std;
typedef long long ll;
# a*b = 最小公倍数*最大公约数 
int gcb(int a,int b){
	if(a<b){
		return gcb(b,a);
	}
	else{
		return b==0?a:gcb(b,a%b);
	}
}
int main(void) {
	int a,b;
	cin>>a>>b;
	long long r = (long long)a*b;
	cout<<r/gcb(a,b)<<endl;
//	cout<<gcb(a,b)<<endl;
//	cout<<a<<" "<<b<<endl;
//	cout<<(long)(a*b)/gcb(a,b)<<endl;
//	cout<<(a*(long)b)<<endl;
} 
