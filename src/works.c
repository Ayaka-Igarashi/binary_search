#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int zikan=0;
    int hito=0;
    int i2=0;
    
    while(hito<k){
    while(zikan<m){
    
        zikan+=A[i2];
        i2+=1;
        
        if(i2==n){return 1;}
    }
    hito+=1;
    zikan=0;
    }
    if(hito<n-1){return 0;}
}


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
        int a=0;
        
        while(hito<k&&i2<n){
            while(zikan<m){
                
                zikan+=A[i2];
                i2+=1;
                
                if(i2==n)a=1; break;
            }
            hito+=1;
            zikan=0;
        }
        if(hito<n-1)a=0;
     //
        
        if(a==0){
            lb=m;
        }else{
            ub=m;
        }
    
    }
    
    printf("%d\n",lb);

  return 0;
}
