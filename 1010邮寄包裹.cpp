#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>30){
		cout<<"Fail"<<endl;
	}else if(n<=10){
		printf("%.2f",(0.8*n+0.2));
	}else if(n>10&&n<=20){
		printf("%.2f",(0.75*(n-10)+0.2+8));
	}else if(n>20&&n<=30){
		printf("%.2f",(0.7*(n-20)+0.2+15.5));
	}
	return 0;
}

