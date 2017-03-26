#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<unistd.h>
#include<sys/wait.h>

#include "parser.h"
#include "pwd.h"

#define maxln_Com_Amb 105

int main () {

    
    bool bandera = true;
    char prompt [10] = "lawea# ";
    char  comando [60];
    char ** items;
    int i, num, background,status;

    while (bandera) {
        printf("%s",prompt);
        scanf("%s",comando);
        num = separaItems (comando, &items, &background);
        
        if (strncmp(items[0],"mypwd",5) == 0 && num == 1) {
            pid_t pid_h1 = fork();
            if (pid_h1 == 0) {
                status = execl ("./pwd","./pwd");
            }else {
                pid_t wait(int *status);
            }
        }

        if (strncmp(items[0],"myexit",6) == 0 && num == 1) {
            bandera = false;
        }
    }
    return 0;
}