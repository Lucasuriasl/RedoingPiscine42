#include<unistd.h>

void ft_putnbr(int nb)

{

      	
	char nb2;	
	nb2 = nb + 48;
	write(1, &nb2, 1);
	
}

int main()
{

	ft_putnbr(42);

}
