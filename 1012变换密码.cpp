#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int y = x%123;
	int z = x%91;
	if(y>=97&&y<=122){
		cout<<char(y)<<endl;
	}else if(z>=65&&z<=90){
		cout<<char(z)<<endl;
	}else{
		printf("*");
	}
	return 0;
}

