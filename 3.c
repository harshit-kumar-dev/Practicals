//fibonacci code in c
#include <stdio.h>
int main() {
    int n;
    int f1=0, f2=1;
    printf("Enter the number of terms: "); 
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
            printf("%d\n", f1);
            int f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }

    return 0;
}
