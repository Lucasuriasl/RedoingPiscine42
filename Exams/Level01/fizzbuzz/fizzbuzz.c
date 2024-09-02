//QUESTAO FIZZBUZZ 42 EXAME LEVEL01
// printa de 1 a 100, se for multiplo de 3 printa fizz, se for multiplo
// de 5 printa buzz, se for dos dois printa fizzbuzz. Bora!

#include<unistd.h>
#include <stdio.h>

int main ()

{
        int     i;
        //char  temp;

        i = 0;
        //temp = i;


        while ( i <= 100)
        {
                i++;


                if ( i % 3 == 0 )
                write ( 1, "fizz\n", 6);

                if ( i % 5 == 0)
                write (1, "buzz\n", 6);

                if ( i % 3 == 0 && i % 5 == 0 )
                write (1, "fizzbuzz\n", 9 );

                else

                //write (1, i, 3);
                printf("%d\n", i);

        }


}
