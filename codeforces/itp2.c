#include <stdio.h>

//declaring the p/q structure
struct fraction
{
    int num;
    int denum;

} fraction;

//getting the input of q and p from user
struct fraction get_fraction()
{
    printf("Enter numerator :");
    scanf("%d", &fraction.num);
    printf("Enter denomerator :");
    scanf("%d", &fraction.denum);
    return fraction;
}

//printing the output on screen
void print_fraction(struct fraction fraction)
{
    printf("%d/%d", fraction.num, fraction.denum);
}

//calculating the greatest common devisior of a and b
int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

//reducing the fraction to smallest form
struct fraction reduce_fraction()
{
    int hcf = gcd(fraction.num, fraction.denum);
    fraction.num = fraction.num / hcf;
    fraction.denum = fraction.denum / hcf;
    return fraction;
}

int main()
{
    fraction = get_fraction();
    print_fraction(fraction);
    printf(" = ");
    print_fraction(reduce_fraction());
}