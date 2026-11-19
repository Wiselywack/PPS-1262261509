#include <stdio.h>
int changRef(int *p) {
*p=100;
return *p;
}

int main() {
int b=20;

changRef(&b);

printf("After Call by Reference,b = %d\n", b);

return 0;
}
