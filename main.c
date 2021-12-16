#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n < 0){
        printf("False");
        return 0;
    }
    int count = 1;
    int temp = n;
    while(temp >= 10) {
        temp /= 10;
        count++;
    }
    int sum = 0;
    temp = n;
    while(n >= 10) {
        int q = n % 10;
        n /= 10;
        sum += (int) pow((double) q, (double) count);
    }
    sum += (int)pow((double)n, (double)count);
    if(sum == temp)
        printf("True");
    else
        printf("False");
    return 0;
}
