#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double s =sqrt((a+b+c)*(a+b-c)*(a-b+c)*(b+c-a))*0.25;
	printf("%0.4f",s);
	return 0;
}
