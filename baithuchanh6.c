#include <stdio.h>
int main(){
    int N, count=0, num=2;
    printf("Mời nhập vào 1 số nguyên N:");
    scanf("%d", &N);
    printf("%d số nguyên tố đầu tiên là:\n", N);
    while (count < N){
        int check=1;
       for (int i=2; i <= sqrt(num); i++){
        if (num%i==0){
            check=0;

        }
        
       }
       if (check == 1){
        printf("%d ", num);
        count++;
       }
       num++;
       
    }
    return 0;
    
} 