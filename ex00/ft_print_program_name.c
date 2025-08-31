#include <unistd.h>


void ft_putstr(char *str){
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	
}
int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr(argv[0]);

	}

	write(1, "\n", 1);
}



// argc combine number of parameters
// argv char pointer combining all parameters 
int	main(int argc, char **argv)
{
	if (argc >  1)
	{
		ft_putstr(argv[1]); // first param 

	}

	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr(argv[argc - 1]);// last param

	}

	write(1, "\n", 1);
}