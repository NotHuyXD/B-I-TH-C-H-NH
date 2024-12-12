#include <stdio.h>
int main(){
int hour, salary, all, bonus, basic;
salary = 15000;
printf("Mời nhập vào số giờ làm: ");
scanf("%d", &hour);
basic = salary * hour;
if (hour > 160){
    bonus = (salary * hour) * 0.1;

    all = (salary * hour) + bonus;

}
else {
    all = salary * hour;
}
printf("Tổng Số tiền lương là: %d\n", all);
printf ("Tiền lương cơ bản là: %d\n", basic);
printf("Số tiền phụ cấp là: %d", bonus);
return 0;
}
