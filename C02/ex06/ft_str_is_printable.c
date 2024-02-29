/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:19:18 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:19:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (i[str])
	{
		if (!(i[str] >= 32 && i[str] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
