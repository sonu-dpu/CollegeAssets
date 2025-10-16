#include <stdio.h>

int main() {
    int n, r;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter number of resources: ");
    scanf("%d", &r);

    int max[n][r], alloc[n][r], need[n][r];

    printf("Enter Max matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<r;j++)
            scanf("%d",&max[i][j]);

    printf("Enter Allocation matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<r;j++)
            scanf("%d",&alloc[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<r;j++)
            need[i][j] = max[i][j] - alloc[i][j];

    printf("Need Matrix:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<r;j++)
            printf("%d ", need[i][j]);
        printf("\n");
    }

    return 0;
}
