#include<iostream>
#include<algorithm>  // 注意这个的引入，下面结构体排序需要用到它 
#include<cmath>
using namespace std;
struct kv {
	int k;
	int v;
};
bool cmp(const kv &a, const kv &b) {
	if(a.v!=b.v) {
		return a.v > b.v;
	} else {
		return a.k<b.k;
	}
}
int main() {
	int n,m;
	cin>>n>>m;
	kv s[n];
	for(int i=0; i<n; i++) {
		cin>>s[i].k>>s[i].v;
	}
	sort(s,s+n,cmp);
	int M = ceil(m*1.5);
	for(int j =0; j<M; j++) {
		if(s[j].v == s[M].v) {
			M = M +1;
			continue;
		}
	}
	cout<<s[(int)(ceil(m*1.5)-1)].v<<" "<<M<<endl;
	for(int j =0; j<M; j++) {
		if(s[j].v == s[M].v) {
			M = M -1;
			continue;
		}
		cout<<s[j].k<<" "<<s[j].v<<endl;
	}
	return 0;
}
