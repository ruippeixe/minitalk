#include "minitalk.h"

void	signal_handler(int signal, siginfo_t *info, void *ucontext)
{
	static int	ch;
	static int	bit;

	(void)ucontext;
	ch |= (signal == SIGUSR2) << bit;
	bit++;
	if (bit == 8)
	{
		if (ch)
			ft_printf("%c", ch);
		else
			kill(info->si_pid, SIGUSR2);
		bit = 0;
		ch = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

void	display_input_error(void)
{
	ft_printf("Error: No input required.\n");
	ft_printf("Please use the following format: ./server\n");
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	int					pid;

	(void)argv;
	if (argc != 1)
	{
		display_input_error();
		exit (1);
	}
	pid = getpid();
	ft_printf("Server PID: %d\n", pid);
	ft_printf("Listening for incoming signals...\n");
	sa.sa_sigaction = signal_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
