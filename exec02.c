/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:35:15 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/13 01:10:49 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ex02/ft_strcat.c"

int	main(void)
{
	char *s1;
	char *s2;

	s1 = calloc(50, sizeof(char));
	s2 = calloc(50, sizeof(char));
	
	printf("================================EX02===================================\n");
	printf("=======================================================================\n\n");
	strcpy(s1, "This is Dest: ");
	strcpy(s2, "This is Src.");
	
    strcat(s1, s2);
    printf("		strcat:		%s\n",s1);
	
	strcpy(s1, "This is Dest: ");
	strcpy(s2, "This is Src.");
	
	ft_strcat(s1, s2);
	printf("		ft_strcat:	%s\n\n",s1);
	printf("================================FIM====================================\n");
	printf("=======================================================================\n");
	free(s1);
	free(s2);
	return (0);
}
