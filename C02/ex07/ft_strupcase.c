/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:19:26 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:19:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (i[str])
	{
		if (i[str] >= 'a' && i[str] <= 'z')
		{
			i[str] -= 32;
		}
		i++;
	}
	return (str);
}
