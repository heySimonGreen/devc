#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,res,res2;
	cin>>a>>b;
	res = a / b;
	res2 = a - ((int)res * b);
	printf("%.2f",res2);
	return 0;
} 
