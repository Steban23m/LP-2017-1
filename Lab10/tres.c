#include<stdio.h>
#define N 45
#include <string.h>
#include <stdlib.h>

int validar(int nro, int min, int max) {
  if (nro >= min && nro <= max) {
    return 1;
  }
  else return 0;
}

int main () {

struct Info_Est {
  char nombre[30];
  float notas[5];
  float promedio;
  char A;
};

struct Info_Est e[N];
int n;
float prom_general=0.0;

do {
  scanf("%d",&n);
} while(!validar(n,1,45));

//leer
int i=0;

for (i = 0; i < n; i++) {
    getchar();
    float prom=0.0;
    gets(e[i].nombre);


  int j=0;
  while (j < 5) {
    //puts("lee notas");
    scanf("%f", &e[i].notas[j]);
    prom = prom + e[i].notas[j];
    j++;
  }
  prom = prom / 5;
  prom_general += prom;
  e[i].promedio=prom;
  if (prom >= 3.96) {
    e[i].A='y';
  }
  else {
    e[i].A='n';
  }
}

for ( i = 0; i < n; i++) {
  printf("%s %.3f ",e[i].nombre, e[i].promedio);
  if (e[i].A == 'y') {
    printf("aprobado\n");
  }
  else {
    printf("Reprobado\n");
  }
}
printf("Promedio general del curso: %f\n", prom_general/n);
  return 0;
}
