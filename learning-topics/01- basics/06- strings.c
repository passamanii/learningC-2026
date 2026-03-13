#include <stdio.h>
#include <string.h>

int main() {

    char * first_name = "John";
    char last_name[] = "Doe";
    char name[100];

    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);

    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    
    name[0]='\0';
    strncat(name,first_name,4);
    strncat(name,last_name,20);
    printf("%s\n",name);

    return 0;
}

//strlen(var) --> retorna o cumprimento da string
//strncmp(var, string, max_len) --> retorna 0 se as strings forem iguais, e outro valor se forem distintas
//strncat(var_destino, var_origem, max_len) --> concatena na string destino, max_len caracteres da string origem