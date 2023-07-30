#include <stdio.h>
#include <stdlib.h>
#include <time.h>



char generaterandomchar() {
    return (char)(rand() % (126 - 33 + 1) + 33);
}

int main() {

    int passwordlength;

    printf("Password length: ");
    scanf("%d", &passwordlength);
    srand(time(NULL));

    char password[passwordlength + 1];
    password[passwordlength] = '\0';

    for(int i = 0; i < passwordlength; i++) {
        password[i] = generaterandomchar();
    }

    printf("Random password: %s\n", password);

    return 0;
}