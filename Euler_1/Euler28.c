/*************************************************************************
	> File Name: Euler28.c
	> Author: gpx
	> Mail: 
	> Created Time: 2018年07月22日 星期日 10时30分02秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int sum = 1,i;
    for (i = 3; i <= 1001; i += 2) {
        sum += 4 * i * i - 6 * i + 6;
    }
    printf("%d\n",sum);
    return 0;
}
