/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-15 13:38:29 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-15 13:38:29 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_point
{
    int x;
    int y;
} t_point;

void    print_tab(char **tab, t_point size)
{
    for (int y = 0; y < size.y; y++)
    {
        for (int x = 0; x < size.x; x++)
        {
            printf("%c ", tab[y][x]);
        }
        printf("\n");
    }
    printf("\n");
}

void    fill(char **tab, t_point size, t_point cur, char to_fill)
{
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
        return;
    
    tab[cur.y][cur.x] = 'F';  // Rellenar con 'F'
    print_tab(tab, size);  // Imprimir la matriz después de cada modificación

    fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void    flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}

int    main()
{
    // Definir el tamaño de la matriz
    t_point size = {8, 6};
    
    // Crear la matriz en memoria dinámica
    char *tab[] = {
        strdup("11111111"),
        strdup("11111111"),
        strdup("11111111"),
        strdup("11111111"),
        strdup("11111111"),
		strdup("11111111"),
    };

    // Punto de inicio para flood fill
    t_point begin = {4, 3};

  

    // Llamar a flood fill
    printf("Rellenando la matriz:\n");
    flood_fill(tab, size, begin);

    // Liberar la memoria asignada
    for (int i = 0; i < size.y; i++)
        free(tab[i]);

    return 0;
}