#include <unistd.h>

int		largeur_etage(int i)
{
	/* la largeur de l'étage 1 */
	if (i == 0)
	return(7);
	/* (indice) + 2 * C
	C = "zone verte" + "hauteur ou zone jaune" + "zone rose" */
	return(largeur_etage(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void	etage(int hauteur, int largeur, int decallage)
{
	int i;
	int j;

	i = 0;
	while (i < hauteur)
	{
		j = -decallage;
		while(j < hauteur - 1 - i)
		{
			write(1," ",1);
			j++;
		}
		j += hauteur + 1 - i; // add 2
		write(1,"/",1);
		while (j < largeur)
		{
			write(1,"*",1);
			j++;
		}
		write(1,"\\",1);
		write(1,"\n",1);
		i++;
	}
}

void	fill_door(int s, int i, int hauteur, int largeur, int decallage, int door_size)
{
	int j;

	j = s;
	write(1,"/",1);
	/* that one finds the center l - (l - s) / 2, draws * up until the center, then draws the door, then finishes the line with "*" 
	 * it works because door_size is always odd/not divisible by 2 */
	while (j < largeur - (largeur - s) / 2 - door_size / 2 - 1)
	{
		write(1,"*",1);
		j++;
	}
	while (j < largeur - (largeur - s) / 2 + door_size / 2)
	{
		/* This one looks if door size is 3 or bigger, and if it's the middle line of the door (vertically), and if it's the second to last column
then it draws the $ instead. */
		if (door_size > 3 && hauteur - i - 1 == door_size / 2 && j == largeur - (largeur - s) / 2 + door_size / 2 - 2) 
			write(1,"$",1);
		else
			write(1,"|",1);
		j++;
	}
	while (j < largeur)
	{
		write(1,"*",1);
		j++;
	}
	write(1,"\\",1);
	write(1,"\n",1);
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
			write(1," ",1);
			j++;
		}
		j+= hauteur + 1 - i;
		write(1,"/",1);
		while (j < largeur)
		{
			write(1,"*",1);
			j++;
		}
		write(1,"\\",1);
		write(1,"\n",1);
		i++;
	}
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
			write(1," ",1);
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

	i = 0;
	door_size = size;
	if (door_size % 2 == 0)
	{
		door_size--;
	}
	while (i < size)
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
			etage(hauteur, largeur, decallage);
		i++;
	}
}

int	main(int argc,char **argv)
{
	sastantua(5);
	return (0);
}

