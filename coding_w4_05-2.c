#include <stdio.h>

void countCall(){
    int counter = 0;
    counter++;
    printf("Call function: counter = %d\n", counter);
}

int main(){
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
   return 0;
}
// ถูกรีเซ็ตเพราะฟั่งชั่นไม่ใช่ static