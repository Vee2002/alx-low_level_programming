#include <stdio.h>                                                                                                              

#include <stdlib.h>                                                                                                             

                                                                                                                                

/**                                                                                                                             

 * main - Adds positive numbers                                                                                                 

 * @argc: Argument count                                                                                                        

 * @argv: Argument vector                                                                                                       

 * Return: returns an integer                                                                                                   

 */                                                                                                                             

                                                                                                                                

int main(int argc, char *argv[])                                                                                                

{                                                                                                                               

        int i,j, a = 1;                                                                                                         

                for (i = 1; i < argc; i++)                                                                                      

                {                                                                                                               

                        for (j = 0; argv[i][j]; j++)                                                                            

                        {                                                                                                       

                                if (isdigit(argv[i][j] == 0))                                                                   

                                                {                                                                               

                                                printf("Error\n");                                                              

                                                return (1);                                                                     

                                                }                                                                               

                        }                                                                                                       

                }                                                                                                               

                                                                                                                                

                for (i = 1; i < argc; i++)                                                                                      

                {                                                                                                               

                        a += atoi(argv[i]);                                                                                     

                }                                                                                                               

                printf ("%d\n", a);                                                                                             

                                                                                                                                

                return (0);                                                                                                     

}                                     
