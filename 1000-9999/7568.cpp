#include<iostream>
#include<algorithm>
using namespace std;

struct body{
	int w;
	int h;
	int r=1;
	int index;
};

bool compairX(const body& A, const body& B) {  
	return A.w>B.w;
}  
bool index(const body& A, const body& B) {  
	return A.index<B.index;
} 

int main(){
	int num;
	cin>>num;
	struct	body a[num];
	for(int i=0;i<num;i++){
		cin>>a[i].w;
		cin>>a[i].h;
		a[i].index=i;
	}
	sort(a, a+num, compairX);
	for(int i=1;i<num;i++){
		for(int j=0;j<i;j++){
			if(a[j].h>a[i].h&&a[j].w!=a[i].w)a[i].r++;
		}
	}	
	sort(a, a+num, index);
	for(int i=0;i<num;i++){
		cout<<a[i].r<<' ';
	}
	return 0;
}

