#include<unistd.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{

	int	i;


	i = 0;
	

	while(s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
		return(s1[i] - s2[i]);	



}

int main ()

{
	char s1[] = "ABBBBA";
	char s2[] = "ABBBBZ";
	unsigned int n;
	n = 6;
	printf("%d\n", ft_strncmp(s1, s2, n));



}	
