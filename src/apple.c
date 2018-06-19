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
    
    lb=0;
    ub=1000000000;
    
while(ub-lb>1){
    
    int m =(lb+ub)/2;
    int kosu=0;//bagが必要な数
    for(i=0;i<n;i++){
        if(A[i]%m==0){
            kosu=kosu+(A[i]/m);
        }else{
            kosu=kosu+(A[i]/m)+1;
        }
        
    }
    if(kosu>k){
        lb=m;
    }else{
        ub=m;
    }
        
}
    printf("%d\n",ub);
  return 0;
}
