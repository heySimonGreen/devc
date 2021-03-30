#include<iostream>
using namespace std;
int main(){
	float a ,b;
	cin>>a>>b;
	if(a<0){
		a=-a;
	}
	if(b<0){
		b=-b;
	}
	if(a<1&&b<1){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}

