#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float r,x,p;
	cin>>r>>x>>p;
	float res;
	res = pow((float)((100+r)/100),p)*x;
	printf("%.2f",res);
	return 0;
} 
