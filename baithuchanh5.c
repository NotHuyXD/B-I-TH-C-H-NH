#include <stdio.h>
int main(){
    int N;
    printf("Mời nhập vào 1 số nguyên N:");
    scanf("%d", &N);
    if (N < 2){
        printf("%d không phải là số nguyên tố\n", N);
    }
    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0){
        printf("%d không phải là số nguyên tố\n", N);
        break;}
        else {
            printf("%d là số nguyên tố", N);
        }
    }
    
    return 0;
    
}