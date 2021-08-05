char	*char_to_binary(char c)
{
	static char	binary[8];
	int		i;
	int		mod;

	i = 7;
	while(c)
	{
		mod = c % 2;
		c /= 2;
		binary[i] = mod + 48;
		i--;
	}
	
	while(i > 0)
	{
		binary[i] = 0 + 48;
		i--;
	}	
	return (binary);
}
