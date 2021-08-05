#include <stdio.h>

char binary_to_char(char *binary)
{
    int     sum;
    int     bin;
    char    c;
    int     i;
    
    i = 0;
    bin = 128;
    sum = 0;
    while(i <= 7)
    {

        if(binary[i] == '1')
        {
            sum += bin;
            bin /= 2;
            i++;
            //printf("i = %d\n sum = %d\n bin = %d\n", i, sum, bin);
        }
        else
        {
            bin /= 2;
            i++;
        }
    }
    c = sum;
    return (c);
}


/* int main(int argc, char *argv[])
{
    int i;

    i = 1;
    while(i < argc)
    {
        printf("%c", binary_to_char(argv[i]));
        i++;
    }
} */