#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char *keyword[] = {"int", "float", "double", "char"};

    char *value = "int";
    char count;

    int size = sizeof(keyword) / sizeof(keyword[0]);


    for (int i = 0; i < size; i++) {
        if (strcmp(keyword[i], value) == 0) {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}