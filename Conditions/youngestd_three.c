#include <stdio.h>
int main()
{
    int Ram, Shyam, appu;

    printf("Enter Ram age:\n");
    scanf("%d", &Ram);
    printf("Enter appu age:\n");
    scanf("%d", &appu);
    printf("Enter Shyam age:\n");
    scanf("%d", &Shyam);

    if (Ram < Shyam && Ram < appu)
    {
        printf("Ram is youngest");
    }

    if (appu < Shyam && appu < Ram)
    {
        printf("appu is youngest");
    }

    if (Shyam < Ram && Shyam < appu)
    {
        printf("Shyam is youngest");
    }

    return 0;
}