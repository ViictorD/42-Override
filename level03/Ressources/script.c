int	main(int argc, char *argv[])
{
	int	i;
	int	mask;
	int	seed;
	char	*original;
	char	*target;

	seed = 1;
	original = (char*)malloc(17);
	original = strcpy(original, "Q}|u`sfg~sf{}|a3\0");
	target = (char*)malloc(17);
	while (seed < 22)
	{
		i = 0;
		while (i < strlen(original))
		{
			mask = seed ^ original[i];
			target[i] = (mask & 0xFF);
			i++;
		}
		printf("seed[%d] : %s\n", seed, target);
		seed++;
	}
	return (0);
}
