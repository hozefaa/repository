#include<stdio.h>

int main() {
int n = 13;
int p;
printf("Enter p : ");
scanf("%d", &p);
for(int i = 1; p!=n; i++) {
    printf("try again! : ");
    scanf("%d", &p);
    
} if(p==n) {
    printf("YOU WON !\n");
}


    return 0;
}