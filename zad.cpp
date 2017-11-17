#include <stdio.h>
#include <math.h>
// #define W while

int main()
{
    int n, q, k, m, i, r, s, f, a, A[10];
    scanf("%d %d %d %d", &n, &q, &k, &m);
    for (i = n; i >= 0;)
        scanf("%d", &A[i--]);
    for (i = q - 1; m - i++;)
    {
        r = f = s = 0;
        while (f <= n)
            s += pow(i, f) * A[f++];
        while (s)
        {
            a = s % 10;
            r += a * a;
            s /= 10;
        }
        printf("%d\n", r);
    }
    // int n, q, k, m, s, f, a, A[10];
    // scanf("%d %d %d %d", &n, &q, &k, &m);
    // s = n + 1;
    // W(s)
    //     scanf("%d", A + --s);
    // W(k){
    //     q++;
    //     k--;
    //     f = n + 1;
    //     W(f){
    //        s += pow(q - 1, --f) * A[f];
    //        s %= (int)round(pow(10, m));
    //     }
    //     W(s)
    //     {
    //         a = s % 10;
    //         f += a * a;
    //         s /= 10;
    //     }
    //     printf("%d\n", f);
    // }
    return 0;
}