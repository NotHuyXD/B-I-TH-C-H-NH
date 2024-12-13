#include <stdio.h>
int main(){
    int N;
    
       printf("Mời nhập vào 1 số nguyên dương:");
       scanf("%d", &N);
       if (N<0){
        printf("Xin hãy nhập số nguyên DƯƠNG!\n");}
    for (int i = 1; i <= N; i++){
        if (N % i == 0){
            printf ("Số %d là ước của số %d\n", i, N);
        }
    }
    return 0;
}