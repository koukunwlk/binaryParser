int	*char_to_binary(char c)
{
	static int	binary[8];
	int		i;
	int		mod;

	i = 7;
	while(c)
	{
		mod = c % 2;
		c /= 2;
		binary[i] = mod;
		i--;
	}
	
	while(i > 0)
	{
		binary[i] = 0;
		i--;
	}	
	return (binary);
}
