#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_SUM 2772

int main(void)
{
    char password[100];
    int sum = 0, i = 0, random;

    srand(time(NULL));

    while (sum < PASSWORD_SUM - 122)
    {
        random = rand() % 94 + 33;
        password[i] = random;
        sum += random;
        i++;
    }

    random = PASSWORD_SUM - sum;
    if (random > 126)
    {
        password[i] = random / 2;
        i++;
        password[i] = random - password[i - 1];
    }
    else
    {
        password[i] = random;
    }
    i++;
    password[i] = '\0';

    printf("%s", password);

    return (0);
}
