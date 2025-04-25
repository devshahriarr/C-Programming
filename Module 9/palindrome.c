#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0, j = n-1;

    while (i<j)
    {
       
        if (a[i] == a[j])
        {
           printf("palindrome\n");
        }

        i++, j-- ;
    }
    
    for (int i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }
}