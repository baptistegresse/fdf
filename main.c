/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgresse <bgresse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:01:40 by bgresse           #+#    #+#             */
/*   Updated: 2022/12/14 15:05:21 by bgresse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mlx/mlx.h"
#include <stdio.h>

int my_key_print(int keycode, void *param)
{
    (void)param;
    printf("touche clicker:%d", keycode);
    return (0);
}

int main(void)
{
    void    *mlx;
    void    *window;
    int     y;
    int     x;
    
    mlx = mlx_init();
    window = mlx_new_window(mlx, 100, 100, "Title");
    y = 20;
    while (y < 70)
    {
        x = 20;
        while (x < 70)
        {
            mlx_pixel_put(mlx,window, x, y, 234031100);
            x++;
        }
        y++;
    }
    mlx_key_hook(window, my_key_print, 0);
    mlx_loop(mlx);
    return (0);
}