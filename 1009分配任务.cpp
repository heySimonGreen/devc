#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a ,b,c;
	cin>>a>>b;
	c = a+b;
	if(c<10){
		cout<<"water"<<endl;
		return 0;
	}else if(a>b){
		cout<<"tree"<<endl;
		return 0;
	}else {
		cout<<"tea"<<endl;
	}
	return 0;
} 
