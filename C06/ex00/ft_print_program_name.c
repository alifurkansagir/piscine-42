/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:26:31 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:26:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	
	while (av[0][i]) 
	{
		write(1, &av[0][i], 1); 
		i++; 
	}
	
	write(1, "\n", 1); 
}