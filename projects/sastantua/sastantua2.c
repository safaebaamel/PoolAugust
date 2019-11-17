void ft_putchar(char c);

int		largeur_etage(int i)
{
	if (i == 0)
	return(7);
	
	return(largeur_etage(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void 	etage_overdoor(int hauteur, int largeur, int decallage, int door_size)
{
	int i;
	int j;

	i = 0;
	while (i < hauteur - door_size)
	{
		j = -decallage;
		while(j < hauteur - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		j+= hauteur + 1 - i;
		ft_putchar('/');
		while (j < largeur)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void	fill_door(int s, int i, int hauteur, int largeur, int decallage, int door_size)
{
	int j;

	j = s;
	ft_putchar('/');
	while (j < largeur - (largeur - s) / 2 - door_size / 2 - 1)
	{
		ft_putchar('*');
		j++;
	}
	while (j < largeur - (largeur - s) / 2 + door_size / 2)
	{
		if (door_size > 3 && hauteur - i - 1 == door_size / 2 && j == largeur - (largeur - s) / 2 + door_size / 2 - 2) 
			ft_putchar('$');
		else
			ft_putchar('|');
		j++;
	}
	while (j < largeur)
	{
		ft_putchar('*');
		j++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	etage_door(int hauteur, int largeur, int decallage)
{
	int i;
	int j;

	i = 0;
	while (i < hauteur)
	{
		j = -decallage;
		while(j < hauteur - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		j += hauteur + 1 - i;
		fill_door(j, i, hauteur, largeur, decallage, hauteur);
		i++;
	}
}

void	sastantua(int size)
{
	int i;
	int hauteur;
	int largeur;
	int decallage;
	int door_size;

	i = -1;
	door_size = size;
	if (door_size % 2 == 0)
		door_size--;
	while (++i < size)
	{
		decallage = (largeur_etage(size - 1) - largeur_etage(i)) / 2;
		hauteur = 3 + i;
		largeur = largeur_etage(i);
		if (i == size - 1)
		{
			etage_overdoor(hauteur, largeur, decallage, door_size);
			etage_door(door_size, largeur, decallage);
		}
		else
			etage_overdoor(hauteur, largeur, decallage, 0);
	}
}
