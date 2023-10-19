/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabatie <lsabatie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:13:48 by lsabatie          #+#    #+#             */
/*   Updated: 2023/10/20 01:49:33 by lsabatie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// this function will assign main arguments value to newly created struct s_philo
void	init_av(int ac, char **av, t_data *data)
{
	data->number_of_philosophers = ft_atoi(av[1]);
	data->time_to_die = ft_atoi(av[2]);
	data->time_to_eat = ft_atoi(av[3]);
	data->time_to_sleep = ft_atoi(av[4]);
	if (ac == 6)
		data->number_of_meals = ft_atoi(av[5]);
	else
		data->number_of_meals = 100;
		
}

// this function fills in the info for every philo in the program
void	init_philos(t_data *data)
{
	int	i;

	i = 0;
	while(i < data->number_of_philosophers)
	{
		data->philos[i].data = data;
		data->philos[i].id = i + 1;
		pthread_mutex_init(&data->philos[i].id, NULL);
	}
}

// thinking function of philos
void	thinking(t_data data)
{
	
}

int	main(int ac, char **av)
{
	t_data	data;
	
	if (ac < 5 || ac > 6)
		return (1);
	init_av(ac, av, &data);
	init_philos(&data);
}