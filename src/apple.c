#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    int P[1000000000];
    lb=0;
    ub=1000000000;
    
    int m =(lb+ub)/2;
    for(i=0;i<n;i++){
        int kosu;
        if(A[i]%m==0){
            kosu=(A[i]/m);
        }else{
            kosu =(A[i]/m)+1;
        }
        
        
    }

    
  return 0;
}
