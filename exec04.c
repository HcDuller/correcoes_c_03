/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:08:25 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/13 16:11:13 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ex04/ft_strstr.c"

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;	

	s1 = calloc(50, sizeof(char));
	//s2 = calloc(50, sizeof(char));


	printf("================================EX04===================================\n");
	printf("=======================================================================\n\n");
	strcpy(s1, "I will search for \'arc\'");
	s2 = strstr(s1, "arc");
	s3 = ft_strstr(s1, "arc");
	printf("Str original:				%s\n",s1);
	printf("Str encontrada(strstr):			%s\n",s2);
	printf("Str encontrada(ft_strstr):		%s\n",s3);
	printf("=======================================================================\n\n");
	strcpy(s1, "I will search for \'il\'");
	s2 = strstr(s1, "il");
	s3 = ft_strstr(s1, "il");
	printf("Str original:				%s\n",s1);
	printf("Str encontrada(strstr):			%s\n",s2);
	printf("Str encontrada(ft_strstr):		%s\n",s3);
	printf("=======================================================================\n");
	printf("================================FIM====================================\n");

	free(s1);
	//free(s2);
	return (0);
}