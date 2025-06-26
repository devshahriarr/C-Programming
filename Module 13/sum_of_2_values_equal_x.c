#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    int arraysize;
    scanf("%d", &arraysize);
    int array[arraysize];
    for (int i = 0; i < arraysize; i++)
    {
        /* code */

        scanf("%d", &array[i]);
    }

    int x;
    int flag = 0;
    scanf("%d", &x);

    for (int i = 0; i < arraysize - 1; i++)
    {
        for (int j = i+1; j < arraysize; j++)
        {
            if (array[i]+array[j]==x)
            {
                flag = 1;
                printf("yes");
            }
            
            // printf("%d %d\n", array[i], array[j]);
        }
        

        // printf("%d", array);
    }
    if (flag == 0)
    {
        printf("No");
    }
    
    
    return 0;
}