#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  int *N = (int*)malloc(sizeof(int) * (t+1));
  int *M = (int*)malloc(sizeof(int) * (t+1));

  for(int i =0; i<t; i++){
    cin>>N[i];
    cin>>M[i];
  }

  long long dp[31][31]={0,};

  for(int i =1; i<=29; i++){
    for(int j =i; j<=29; j++){
      if(i == 1 ){
        dp[i][j] = j;
      }
      else if(i == j){
        dp[i][j] = 1;
      }
      else{
        dp[i][j] = dp[i-1][j-1] + dp[i][j-1];  
      }
      
    }
  }


  for(int i =0; i<t; i++){
    cout << dp[N[i]][M[i]] << endl;
  }

  return 0;
  
  

}