#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<unistd.h>

#define maxln_Com_Amb 105

int main () {
    char SHELL[maxln_Com_Amb];
    char PATH[maxln_Com_Amb];
    char HOME[maxln_Com_Amb];
    char PWD[maxln_Com_Amb];

    getcwd(PWD,maxln_Com_Amb);
    strcpy(PATH,getenv("PATH"));
    strcpy(HOME,PWD);
    strcpy(SHELL,PWD);
    printf("\n La ruta es: %s \n",PWD);
    return 0;
}
