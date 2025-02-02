#include <stdio.h>
#include <string.h>

int get_char_value(char letter);


int main (int argc,string argv[])
{

    char input1;
    printf("Player 1: ");
    scanf ("%c",&input1);
    char input2;
    printf("Player 2: ");
    scanf ("%c",&input2);
   
    int sum1 = 0;
    int sum2 = 0;
    char letter;

    for (int i = 0; i < strlen(input1);i++)
    {
        letter = input1[i];
        sum1 += get_char_value(letter);
    }
    for (int j = 0; j < strlen(input2);j++)
    {
        letter = input2[j];
        sum2 += get_char_value(letter);
    }
    if (sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum1 < sum2)
    {
        printf("Player 2 wins!\n");
    }
    else if (sum1 == sum2)
    {
        printf("Tie!\n");
    }

}
int get_char_value(char letter)
{
    if (letter == 'A'||letter == 'a')  return 1;
    if (letter == 'B'||letter == 'b') return 3;
    if (letter == 'C'||letter == 'c') return 3;
    if (letter == 'D'||letter == 'd') return 2;
    if (letter == 'E'||letter == 'e') return 1;
    if (letter == 'F'||letter == 'f') return 4;
    if (letter == 'G'||letter == 'g') return 2;
    if (letter == 'H'||letter == 'h') return 4;
    if (letter == 'I'||letter ==  'i') return 1;
    if (letter == 'J'||letter ==  'j') return 8;
    if (letter == 'K'||letter ==  'k') return 5;
    if (letter == 'L'||letter ==  'l') return 1;
    if (letter == 'M'||letter ==  'm') return 3;
    if (letter == 'N'||letter == 'n')  return 1;
    if (letter == 'O'||letter == 'o')  return 1;
    if (letter == 'P'||letter ==  'p') return 3;
    if (letter == 'Q'||letter ==  'q') return 10;
    if (letter == 'R'||letter ==  'r') return 1;
    if (letter == 'S'||letter ==  's') return 1;
    if (letter == 'T'||letter ==  't') return 1;
    if (letter == 'U'||letter ==  'u') return 1;
    if (letter == 'V'||letter ==  'v') return 4;
    if (letter == 'W'||letter == 'w')  return 4;
    if (letter == 'X'||letter ==  'x') return 8;
    if (letter == 'Y'||letter ==  'y') return 4;
    if (letter == 'Z'||letter ==  'z') return 10;

 return 0;


}