#include <stdio.h>



int main() {
    int a, b,add,sub;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
   // pa=&a;
    //pb=&b;
    add=*pa + *pb;
    sub=*pa - *pb;

    printf("%d\n%d", add, abs(sub));

    return 0;
}
