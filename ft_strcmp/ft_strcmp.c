#include<unistd.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	
	
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
	
		i++;
	}
		return(s1[i] - s2[i]);
}
int main()

{
	char s1[10] = "ABA";
	char s2[10] = "ABZ";

	printf("%d\n",ft_strcmp(s1, s2));




}


