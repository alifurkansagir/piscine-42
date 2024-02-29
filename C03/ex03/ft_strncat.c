/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:20:31 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:20:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	d;
	int	i;

	d = 0;
	while (dest[d])
		d++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (dest);
}