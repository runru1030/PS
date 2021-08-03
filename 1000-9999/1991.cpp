#include <iostream>
#include <vector>
#include <utility>

using namespace std;
struct node{
	char left;
	char right;
};
vector<node> tree(26); 
void preOrder(char root){
	if(root != '.'){
		cout<<root;
		preOrder(tree[root-'A'].left);
		preOrder(tree[root-'A'].right);
	}
}
void inOrder(char root){
	if(root != '.'){
		inOrder(tree[root-'A'].left);
		cout<<root;
		inOrder(tree[root-'A'].right);
	}
}
void postOrder(char root){
	if(root != '.'){
		postOrder(tree[root-'A'].left);
		postOrder(tree[root-'A'].right);
		cout<<root;
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char root, l, r;
		cin>>root>>l>>r;
		tree[root-'A'].left=l;

		tree[root-'A'].right=r;
	}
	preOrder('A');
	cout<<"\n";
	inOrder('A');
	cout<<"\n";
	postOrder('A');
}
