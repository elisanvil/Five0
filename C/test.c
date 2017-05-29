//IMPORTANTE: AL COMPILAR --> gcc test.c -o -lm tt

/*  *********************************
    *    Declaración de librerías   *
    *********************************  */
#include<math.h>
#include<stdio.h>


/*  *********************************
    *    Definición de funciones    *
    *********************************  */
typedef struct {
    int coorX;
    int coorY;
    int coorZ;
} point;

point crearPunto(int x, int y, int z);
float calcularDistancia(point p1, point p2);


void main(){
	int x1, y1, z1, x2, y2, z2;
	float dist;
	point p1, p2;

	printf("Ingrese coorX: ");
	scanf("%d",&x1);
	printf("Ingrese coorY: ");
	scanf("%d",&y1);
	printf("Ingrese coorZ: ");
	scanf("%d",&z1);

	printf("\n\nIngrese coorX: ");
	scanf("%d",&x2);
	printf("Ingrese coorY: ");
	scanf("%d",&y2);
	printf("Ingrese coorZ: ");
	scanf("%d",&z2);
	
	p1 = crearPunto(x1, y1, z1);
	p2 = crearPunto(x2, y2, z2);

	dist = calcularDistancia(p1, p2);
	printf("\nLa distancia entre P1[%d, %d, %d] y P2[%d, %d, %d] es: %.2f", p1.coorX, p1.coorY, p1.coorZ, p2.coorX, p2.coorY, p2.coorZ, dist);
	printf("\n");

}


/*  *********************************
    *  Implementación de funciones  *
    *********************************  */
point crearPunto(int x, int y, int z){
	point p;
	
	p.coorX = x;
	p.coorY = y;
	p.coorZ = z;
	return p;
}

float calcularDistancia(point p1, point p2){
	float dist, dx, dy, dz;

	dx = p1.coorX - p2.coorX;
	dy = p1.coorY - p2.coorY;
	dz = p1.coorZ - p2.coorZ;

	dist = sqrt(dx * dx + dy * dy + dz * dz);
	return dist;
}
