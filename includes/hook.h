/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:00:43 by espiroux          #+#    #+#             */
/*   Updated: 2013/12/28 16:01:43 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_H
# define HOOK_H
# include <stdlib.h>
# include "struct.h"
# include "mlx.h"
# include "libft.h"

/*
** keep push key and apply an exit if it's ESC
*/
int		exit_key_hook(int keycode, t_env *e);

/*
** Use for learning, put a "ICI" string where you click.
*/
int		mouse_hook(int button, int x, int y, t_env *e);

#endif /* !HOOK_H */
