#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string num;
	int i;
	int res=0 ,n=0;
	cin>>num;
	for(i=0;i<3;i++){
		n = n+ pow(10.0,2-i)*(num[i] - '0');
		res = res+pow((float)(num[i]-'0'),3);
	}
	if (n == res){
		cout<<"YES"<<endl; 
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
} 
