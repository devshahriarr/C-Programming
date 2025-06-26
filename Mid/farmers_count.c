#include <stdio.h>
int main()
{
    int n = 0, w1 = 0, w2 = 0, day = 0;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &w1, &w2, &day);
        int total_worker = w1 + w2;
        int single_person_can_do = w1 * day;
        int all_person_can_do = single_person_can_do / total_worker;
        int save_time = day - all_person_can_do;
        printf("%d\n", save_time);
    }
    return 0;
}