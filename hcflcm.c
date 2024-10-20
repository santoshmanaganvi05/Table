#include <stdio.h>

int hcf(int a, int b) 
{
    while (b != 0)
     {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
 {
    return (a * b) / hcf(a, b);
}

int main()
 {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf_result = hcf(num1, num2);
    int lcm_result = lcm(num1, num2);

    printf("HCF of %d and %d is %d\n", num1, num2, hcf_result);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm_result);

    return 0;
}