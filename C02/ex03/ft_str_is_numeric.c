/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:18:43 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:18:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (i[str])
	{
		if (!(i[str] >= 48 && str [i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
