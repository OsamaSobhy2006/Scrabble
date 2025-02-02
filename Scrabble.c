#include <stdio.h>
#include <string.h>

int get_char_value(char letter);


int main (void)
{

    char input1 [100];
    char input2 [100];
    printf("Player 1: ");
    scanf("%s",&input1);
    printf("Player 2: ");
    scanf("%s",&input2);

    int sum1 = 0;
    int sum2 = 0;
    char letter;

    for (int i = 0; i < strlen(input1);i++)
    {

        sum1 += get_char_value(input1[i]);
    }
    for (int j = 0; j < strlen(input2);j++)
    {

        sum2 += get_char_value(input2[j]);
    }
    if (sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum1 < sum2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;

}
int get_char_value(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        letter += 32;
    }
    if (letter == 'a' || letter == 'e'||letter == 'i'|| letter == 'l' || letter == 'n'||
        letter == 'o'||letter == 'r'||letter == 's'||letter == 't'||letter == 'u')
    {
        return 1;
    }
    if (letter == 'd'||letter == 'g')
    {
        return 2;
    }
    if (letter == 'b'||letter == 'c'||letter == 'm'||letter == 'p')
    {
        return 3;
    }
    if (letter == 'f'||letter == 'h'||letter == 'v'||letter == 'w'||letter == 'y')
    {
        return 4;
    }
    if (letter == 'k')
    {
        return 5;
    }
    if (letter == 'j'||letter == 'x')
    {
        return 8;
    }
    if (letter == 'q'||letter == 'z')
    {
        return 10;
    }
return 0;
}
