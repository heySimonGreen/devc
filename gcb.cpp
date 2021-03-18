#include<iostream>
using namespace std;
typedef long long ll;
ll gcb(int a,int b){
	return b==0?a:gcb(b,a%b);
}
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	cout<<"chenwei"<<endl;
	cout<<"\n";
	printf("chen");
	cout<<gcb(a,b);
	return 0;
} 
