#include <stdio.h>
#include <unistd.h>

//Questo blocco di codice descrive il funzionamento di un semaforo.

void setSemV() {
    printf("⚪ ⚪ 🟢");
    sleep(5);
    printf("⚪ 🟠 ⚪");
    sleep(15);
    printf("🔴 ⚪ ⚪");
    sleep(5);
}
void setSemP() {
    printf("🔴 ⚪");
    sleep(5);
    printf("⚪ 🟢");
    sleep(30);
    printf("⚪ ⚪");
    sleep(2);
    printf("⚪ 🟢");
    sleep(2);
    printf("⚪ ⚪");
    sleep(2);
    printf("⚪ 🟢");
    sleep(2);
    printf("⚪ ⚪");
    sleep(2);
    printf("🔴 ⚪");
    sleep(5);
     printf("⚪ ⚪ 🟢");
    sleep(25);
}
    
int main(void) {
    for (;;) {
    char p = getchar();
        if(p == 'x') {
            return 0;
        } else {
            setSemV();
            setSemP();
        }
    }
    return 0;
}
