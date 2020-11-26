#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int op;
    double num1, num2, res;

    system ("clear");
    do
    {
        printf ("\tEscolha a operação desejada:\n\t1 - Adição\n\t2 - Subtração\n\t3 - Multiplicação\n\t4 - Divisão\n\t5 - Potênciação\n\t6 - Sair\n\t");
        scanf ("%i", &op);

        switch (op)
        {
            case 1:
                system ("clear");
                printf ("Digite o primeiro número: ");
                scanf ("%lf", &num1);
                system ("clear");
                printf ("Digite o segundo número: ");
                scanf ("%lf", &num2);
                system ("clear");

                res = num1+num2;

                printf ("\t%lf + %lf = %lf\n\n", num1, num2, res);

                break;
            
            case 2:
                system ("clear");
                printf ("Digite o primeiro número: ");
                scanf ("%lf", &num1);
                system ("clear");
                printf ("Digite o segundo número: ");
                scanf ("%lf", &num2);
                system ("clear");

                res = num1-num2;

                printf ("\t%lf - %lf = %lf\n\n", num1, num2, res);

                break;

            case 3:
                system ("clear");
                printf ("Digite o primeiro número: ");
                scanf ("%lf", &num1);
                system ("clear");
                printf ("Digite o segundo número: ");
                scanf ("%lf", &num2);
                system ("clear");

                res = num1*num2;

                printf ("\t%lf * %lf = %lf\n\n", num1, num2, res);

                break;

            case 4:
                system ("clear");
                printf ("Digite o primeiro número: ");
                scanf ("%lf", &num1);
                system ("clear");
                printf ("Digite o segundo número: ");
                scanf ("%lf", &num2);
                system ("clear");

                res = num1/num2;

                printf ("\t%lf / %lf = %lf\n\n", num1, num2, res);

                break;

            case 5:
                system ("clear");
                printf ("Digite o primeiro número: ");
                scanf ("%lf", &num1);
                system ("clear");
                printf ("Digite o segundo número: ");
                scanf ("%lf", &num2);
                system ("clear");

                res = pow(num1,num2);

                printf ("\t%lf ^ %lf = %lf\n\n", num1, num2, res);

                break;

            case 6:
                system ("clear");
                break;

            default:
                system ("clear");
                break;
        }
    } while (op != 6);
    return 0;
}