#include <iostream>
#include <vector>
using namespace std;
long long pow(int a, int b, int c){
	if(b==0)return 1;
	long long t= pow(a, b/2, c);
	if(b%2)return ((t*t)%c)*a%c;
	else return (t*t)%c;
}
int main(){
	long long int a, b, c;
	cin>>a>>b>>c;
	cout<<pow(a, b, c);
} 
