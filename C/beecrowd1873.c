#include <stdio.h>
#include <string.h>
 
int main() {
    int n, r, s;
    scanf("%d", &n);
    char sheld[10];
    char raj[10];
    char jogadas[5][10] = {"spock", "lagarto", "tesoura", "pedra", "papel"};
    for(int i = 0; i < n; i++) {
        scanf("%s %s", sheld, raj);
        for(int j = 0; j < 5; j++) {
            if(strcmp(raj, jogadas[j]) == 0) {
                r = j;
            }
            if(strcmp(sheld, jogadas[j]) == 0) {
                s = j;
            }
        }
        if(r == s) {
            printf("empate\n");
        }else {
            if((s == 0 && ((r == 1) ||(r == 4))) || (s == 1 && ((r == 2) ||(r == 3)))
            || (s == 2 && ((r == 0) ||(r == 3))) || (s == 3 && ((r == 4) ||(r == 0)))
            || (s == 4 && ((r == 1) ||(r == 2)))) {
                printf("sheldon\n");
            }
            else {
                printf("rajesh\n");
            }
        }
    }
    return 0;
}