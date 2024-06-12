/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedina- <rmedina-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:04:30 by rmedina-          #+#    #+#             */
/*   Updated: 2024/06/12 19:05:52 by rmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		lower_case_converter(char *str);
int			checking_arg(int argc, char **argv);
//int			checking_set(char *str);
int			ft_isalpha(int c);
size_t		ft_strlen(const char *c);
int			nbrcompare(char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(char *s1, char *s2);
#endif
