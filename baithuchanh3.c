#include <stdio.h>
int main(){
    int choice, money, convert;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE==============\n");
    printf("\n1. USD TO VND\n");
    printf("2.EUR TO VND\n");
    printf("3.GBP TO VND\n");
    printf("4.JPY TO VND\n");
    printf("5.VND TO USD\n");
    printf("6.VND TO EUR\n");
    printf("7.VND TO GBP\n");
    printf("8.VND TO JPY\n");
    printf("Nhập đơn vị tiền tệ bạn muốn chuyển đổi (1-8): \n");
    scanf("%d", &choice);
    printf ("Nhập số tiền bạn muốn chuyển đổi: ");
    scanf("%d", &money);
    switch (choice)
    {
    case 1:
    convert= money *23500;
    printf("%d USD = %d VND", money, convert); 

        break;
    
    
    case 2:
    convert = money * 25000;
    printf("%d EUR = %d VND", money, convert);
    break;
    case 3:
    convert = money * 28000;
    printf("%d GBP = %d VND", money, convert);
    break;
    case 4:
    convert = money * 180;
    printf("%d YEN = %d VND", money, convert);
    break;
    case 5:
    convert = money / 23500;
    printf("%d VND = %d USD", money, convert);
    break;
    case 6:
    convert = money / 25000;
    printf("%d VND = %d EUR", money, convert);
break;
case 7:
convert = money / 28000;
printf("%d VND = %d GBP", money, convert);
break;
case 8:
convert = money /180;
printf("%d VND = %d YEN", money, convert);
break;
    default:
    printf("Lựa chọn của bạn không hợp lệ");
        break;
    }
    return 0;
    

}