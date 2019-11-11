#include<unistd.h>
int		largeuretage(int i)
{
	if (i == 0)
	return(7);
	
	return(largeuretage(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (1 / 2))));
}

void	etage(int h, int l, int d)
{
	int i;
	int j;

	i = 0;
	while (i < h)
	{
		j = -d;
		while(j < h - 1 - i)
		{
			write(1," ",1);
			j++;
		}
		j+= h + 1 - i;
		write(1,"/",1);
		while (j < l)
		{
			write(1,"*",1);
			j++;
		}
		write(1,"\\",1);
		write(1,"\n",1);
		i++;
	}
}

void	etage_door(int h, int l, int d, int door_size)
{
	int i;
	int j;
	int sd;

	i = 0;
	while (i < h - door_size)
	{
		j = -d;
		while(j < h - 1 - i)
		{
			write(1," ",1);
			j++;
		}
		j+= h + 1 - i;
		write(1,"/",1);
		while (j < l)
		{
			write(1,"*",1);
			j++;
		}
		write(1,"\\",1);
		write(1,"\n",1);
		i++;
	}
	while (i < h)
	{
		j = -d;
		while(j < h - 1 - i)
		{
			write(1," ",1);
			j++;
		}
		j+= h + 1 - i;
		sd = j;
		write(1,"/",1);
		while (j < l - (l - sd) / 2 - door_size / 2 - 1)
		{
			write(1,"*",1);
			j++;
		}
		while (j < l - (l - sd) / 2 + door_size / 2)
		{
			if (door_size > 3 && h - i - 1 == door_size / 2 && j == l - (l - sd) / 2 + door_size / 2 - 2) 
			{
				write(1,"$",1);
			}
			else
			{
				write(1,"|",1);
			}
			j++;
		}
		while (j < l)
		{
			write(1,"*",1);
			j++;
		}
		write(1,"\\",1);
		write(1,"\n",1);
		i++;
	}
}

void	sastantua(int size)
{
	int i;
	int h;
	int l;
	int d;
	
	i = 0;
	int door_size = size;
	if(door_size % 2 == 0)
	{
		door_size--;
	}
	while (i < size)
	{
		d = (largeuretage(size - 1) - largeuretage(i)) / 2;
		h = 3 + i;
		l = largeuretage(i);
		if (i == size - 1)
		{
			etage_door(h, l, d, door_size);
		}
		else
		{
			etage(h, l, d);
		}
		i++;
	}
}

int	main(int argc,char **argv)
{
sastantua(2);
return (0);
}

