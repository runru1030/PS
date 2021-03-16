#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, M;
vector <int> m;
vector <int> c;
int dp[10000000]={0};
main(){
   cin>>N>>M;
   int sum=0;
   for(int i=0;i<N;i++){
      int a;
      cin >>a;
      m.push_back(a);
   }
   for(int i=0;i<N;i++){
      int a;
      cin >>a;
      c.push_back(a);
      sum+=a;
   }

   int j=0;
   for(int i=0;i<N;i++){
      for(int j=sum;j-c[i]>=0;j--){
         
            dp[j]=max(dp[j], dp[j-c[i]]+m[i]);
         
      }
      
   }
   int cost=0;
   for(cost=0;cost<sum&&dp[cost]<M;cost++);
   cout<<cost;
}
