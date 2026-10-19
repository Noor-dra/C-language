#include <stdio.h>
#include <math.h>
void find_roots(int a1, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter a,b,c\n");
    scanf("%d %d %d", &a, &b, &c);
    find_roots(a, b, c);
    return 0;
}

void find_roots(int a1, int b, int c)
{
    int dis = (b * b) - (4 * a1 * c);
    if (a1 != 0)
    {
        if (dis == 0)
        {
            float root = -b / (2 * a1);
            printf("Two equal real root \n");
            printf("root:%f\n", root);
        }
        if (dis > 0)
        {
            int  root1 = (-b + sqrt(dis)) / (2 * a1);
            int root2 = (-b - sqrt(dis)) / (2 * a1);
            printf("Two distinct real roots \n");
            printf("root_1: %f, root_2: %f \n", root1, root2);
        }
        if (dis < 0)
        {
            float real_part = -b / (2 * a1);
            float imag_part = sqrt(dis) / (2 * a1);
            float root1 = real_part + imag_part;
            float root2 = real_part - imag_part;
            printf("Two complex roots\n");
            printf("root_1:%f, root_2: %f", root1, root2);
        }
    }
    else
        printf(" Error : a cannot be zero!\n");
}
