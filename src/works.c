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
        int m= (lb+ub)/2;
    //
        int zikan=0;
        int hito=0;
        int i2=0;
        
        while(hito<k&&i2<n){
            while(zikan<=m&&i2<n){
                if(zikan+A[i2]<=m){
                    zikan=zikan+A[i2];
                    i2=i2+1;
                }else{
                    break;
                }
            }
            if(i2<n){
                hito+=1;
                zikan=0;
            }
        }
        
     //
        
        if(i2<n){
            lb=m;
        }else{
            ub=m;
        }
    
    }
    
    printf("%d\n",ub);

  return 0;
}
