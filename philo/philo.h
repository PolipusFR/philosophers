/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabatie <lsabatie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:15:24 by lsabatie          #+#    #+#             */
/*   Updated: 2023/10/27 04:17:26 by lsabatie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdlib.h> // malloc/free
# include <sys/time.h> // gettimeofday
# include <stdio.h> // printf
# include <unistd.h> // usleep

struct	s_data;

typedef struct	s_philo
{
	struct s_data	*data;
	pthread_mutex_t mutex;
	int	id;
	int	dead;
	pthread_mutex_t *left_fork;
	pthread_mutex_t *right_fork;
}	t_philo;

typedef struct	s_data
{
	t_philo	*philos;
    int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_meals;
	long long unsigned start_time;

	pthread_mutex_t	*forks;
}	t_data;



int	ft_atoi(const char *str);
#endif