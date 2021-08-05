#include <unistd.h>

char	*char_to_binary(char c);
void	ft_putchar(char c);

int main(int argc, char *argv[])
{
	char	*binary;
	int		i;
	char	*string;

	i = 0;
	if(argc < 3 || argc > 3)
	{
		write(2, "You must give only two arguments", 32);
		ft_putchar('\n');
		return (0);
	}
	if(argv[1][0] > '1')
	{
		write(1, "You must give 0 or 1 as first argument", 38);
		ft_putchar('\n');
		return (0);
	}
	string = argv[2];
	while(*string)
	{
		binary = char_to_binary(*string);
		while(i <= 7)
		{	
			ft_putchar(binary[i]);
			i++;		
		}
		ft_putchar(' ');
		i = 0;
		*string++;
	}
	ft_putchar('\n');
}
