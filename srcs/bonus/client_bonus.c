#include "minitalk.h"

int	is_digit_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

void	send_character(int pid, int ch)
{
	int		bit;

	bit = 0;
	while (bit < 8)
	{
		if ((ch >> bit) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(250);
		bit++;
	}
}

void	signal_handler(int signal)
{
	if (signal == SIGUSR1)
		return ;
	else if (signal == SIGUSR2)
		ft_printf("Message received.\n");
}

void	display_input_error(void)
{
	ft_printf("Error: Invalid input.\n");
	ft_printf("Please use the following format: ./client <PID> \"<string>\"\n");
}

int	main(int argc, char **argv)
{
	int					pid;
	int					i;

	i = 0;
	if (argc != 3 || is_digit_string(argv[1]) == 1)
	{
		display_input_error();
		exit (1);
	}
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		send_character(pid, argv[2][i]);
		i++;
	}
	send_character(pid, argv[2][i]);
}
