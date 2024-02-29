/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:27:04 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:27:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int p;

	p = 1;
	while (p < argc) 
	{
		i = 0; 
		while (argv[p][i]) 
		{
			write(1, &argv[p][i], 1); 
			i++;
		}
		write(1, "\n", 1); 
		p++; 
	}
}
