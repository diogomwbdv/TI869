#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.1415
#define areaCirculo(r) ((PI)*(r)*(r))
#define perimetroCirculo(r) (2*(PI)*(r))
#define areaQuadrado(l) ((l)*(l))
#define perimetroQuadrado(l) (4*(l))
#define areaRetangulo(a,b) ((a)*(b))
#define perimetroRetangulo(a,b) ((2*(a))+(2*(b)))
#define areaTriangulo(b,h) (((b)*(h))/2)
#define perimetroTriangulo(b,c1,c2) ((b)+(c1)+(c2))


void leDados(float *valor)
{

    printf("Insira um valor: ");
    scanf("%f", valor);
}

int main()
{

    float v1,v2,v3;
    int op;

    setlocale(LC_ALL, "PORTUGUESE");

    do
    {
        printf(">>>> MENU TRIGONOMETRIA <<<<\n");
        printf("1- Calcular a área do circulo\n");
        printf("2- Calcular o perimetro do circulo\n");
        printf("3- Calcular a área do quadrado\n");
        printf("4- Calcular o perimetro do quadrado\n");
        printf("5- Calcular a área do retangulo\n");
        printf("6- Calcular a perimetro do retângulo\n");
        printf("7- Calcular a área do triângulo\n");
        printf("8- Calcular o perimetro do triângulo\n");
        printf("9- Sair\n");
        scanf("%i", &op);


        switch(op)
        {

        case 9:
            break;

        case 1:
            leDados(&v1);
            printf("\n\nÁrea do circulo de raio %.2f: %.2f\n\n", v1, areaCirculo(v1));
            break;

        case 2:
            leDados(&v1);
            printf("\n\nPerimetro do circulo de raio %.2f: %.2f\n\n", v1, perimetroCirculo(v1));
            break;

        case 3:
            leDados(&v1);
            printf("\n\nÁrea do quadrado: %.2f\n\n", areaQuadrado(v1));
            break;

        case 4:
            leDados(&v1);
            printf("\n\n Perimetro do quadrado: %.2f\n\n", perimetroQuadrado(v1));
            break;

        case 5:
            leDados(&v1), leDados(&v2);
            printf("\n\nÁrea do retângulo: %.2f\n\n", areaRetangulo(v1,v2));
            break;

        case 6:
            leDados(&v1), leDados(&v2);
            printf("\n\Perimetro do retângulo: %.2f\n\n", perimetroRetangulo(v1,v2));
            break;

        case 7:
            leDados(&v1), leDados(&v2);
            printf("\n\nArea do triângulo: %.2f\n\n", areaTriangulo(v1,v2));
            break;
        case 8:
            leDados(&v1), leDados(&v2), leDados(&v3);
            printf("\n\nPerimetro do triângulo: %.2f\n\n", perimetroTriangulo(v1,v2,v3));
            break;
        }

    }
    while(op!=9);

    return 0;
}
