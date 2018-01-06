#include "addition.h"
#include "subtract.h"
#include "multiplication.h"
#include "division.h"
#include <stdio.h>

int main(){
int res;
res = sum_2_int(1,1);
printf("res of addition %d\n",res);
res = diff_2_num(2,1);
printf("res of subtraction %d\n",res);
res = product_2_int(2,1);
printf("res of multiplication %d\n",res);
res = divide(2,1);
printf("res of division %d\n",res);
return 0;	
}