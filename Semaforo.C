#include <stdio.h>
#include <unistd.h>

//Questo blocco di codice descrive il funzionamento di un semaforo.

void setSemV() {
    sleep(0);
    printf("⚪ ⚪ 🟢\n");
    sleep(5);
    printf("⚪ 🟠 ⚪\n");
    sleep(15);
    printf("🔴 ⚪ ⚪\n");
    sleep(5);
}
void setSemP() {
    printf("🔴 ⚪\n");
    sleep(5);
    printf("⚪ 🟢\n");
    sleep(30);
    printf("⚪ ⚪\n");
    sleep(2);
    printf("⚪ 🟢\n");
    sleep(2);
    printf("⚪ ⚪\n");
    sleep(2);
    printf("⚪ 🟢\n");
    sleep(2);
    printf("⚪ ⚪\n");
    sleep(2);
    printf("🔴 ⚪\n");
    sleep(5);
     printf("⚪ ⚪ 🟢\n");
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
