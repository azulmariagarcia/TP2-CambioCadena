/*Garcia Azul Maria
k2050
24\04\2015
El programa recibe caracteres y remplaza las tabulaciones por \t, los retrocesos por \b y las 
barras invertida por \\, luego imprime en pantalla el resultado
*/



#include <stdio.h>


int main(void) {
      int c;



      while((c=getchar())!= EOF){

             if(c=='\t'){
                putchar('\\');
                putchar('t');
                }
             else
                {if(c=='\b')
                      {putchar('\\');
                       putchar('b');

                      }
                  else
                     {if (c=='\\')
                            {putchar('\\');
                              putchar('\\');

                            }
                        else
                            {putchar(c);}
                }
                }
                }



}
