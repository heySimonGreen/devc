#include<iostream>
#include<cmath>
using namespace std;
// ���ַ�ת��Ϊ���� 
// ������ 
int main(){
	string s; 
	cin>>s;
	string sr = s+s;
	int i;
	int res = 0;
	for(i=0;i<sr.length();i++){
		int num = sr[i]-'0';
		res = res + num*pow(10.0,5-i);
	} 
	cout<<res/(7*11*13)<<endl;
	return 0;
}
