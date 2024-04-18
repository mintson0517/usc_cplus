#include <stdio.h>

int main(){
    int N = 3, i = 1, a, b;
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("Case #%d: print 77 times table from %02d downto %02d.\n", i, a, b);
        for(; a >= b; a--){
            printf("|innerloop=%d", a);
            if(a == b){
                printf("|\n");
            }
        }
    }else{
        printf("Case #%d: print 77 times table from %02d to %02d.\n", i, a, b);
        for(; a <= b; a++){
            printf("|innerloop=%d", a);
            if(a == b){
                printf("|\n");
            }
        }
    }
    i++;

    for(; i <= N; i++){ 
        if(scanf("%d %d", &a, &b) == 2){
          if(a > b){
              printf("\nCase #%d: print 77 times table from %02d downto %02d.\n", i, a, b);
              N++;
              for(; a >= b; a--){
                  printf("|innerloop=%d", a);
                  if(a == b){
                      printf("|\n");
                  }
                  
              }
          }else{
              printf("\nCase #%d: print 77 times table from %02d to %02d.\n", i, a, b);
              N++;
              for(; a <= b; a++){
                  printf("|innerloop=%d", a);
                  if(a == b){
                      printf("|\n");
                  }
              }
          }
        }
    }
    return 0;
}
