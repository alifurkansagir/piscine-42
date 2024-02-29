/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:20:39 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:20:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char *ft_strstr(char *str, char *to_find) {
    int i;
    int f;

    if (to_find[0] == '\0')
        return str;

    i = 0;
    while (i[str]) {
        f = 0;

        while (str[i + f] == to_find[f] && str[i + f])
            f++;

        if (to_find[f] == '\0')
            return &i[str];

        i++;
    }
    return (0);
}
