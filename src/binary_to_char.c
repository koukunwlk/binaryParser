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
