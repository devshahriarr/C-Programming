int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }
}