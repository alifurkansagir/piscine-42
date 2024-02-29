/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:19:45 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:19:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (i[str])
	{
		if (i[str] >= 'A' && i[str] <= 'Z')
		{
			i[str] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (i[str] != '\0')
	{
		if (i[str] >= 'a' && i[str] <= 'z')
		{
			if (i1 == 1)
			{
				i[str] -= 32;
				i1 = 0;
			}
		}
		else if (i[str] >= '0' && i[str] <= '9')
			i1 = 0;
		else
			i1 = 1;
		i++;
	}
	return (str);
}
