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

    for (int i = 0; i < arraysize - 1; i++)
    {
        for (int j = i+1; j < arraysize; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                
            }
            
            // printf("%d %d\n", array[i], array[j]);
        }
        

        // printf("%d", array);
    }

    for (int i = 0; i < arraysize; i++)
    {
        printf("%d ", array[i]);
    }
    
    
    return 0;
}