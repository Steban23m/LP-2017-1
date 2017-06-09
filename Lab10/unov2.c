#include<stdio.h>
#include <string.h>

int validar(int nro, int min, int max) {
  if (nro >= min && nro <= max) {
    return 1;
  }
  else return 0;
}

int is_bisiesto(int aaaa) {
  if (aaaa%4==0) return 1;
  else return 0;
}

int fromTheFuture(int a1,int a2, int m1,int m2,int d1,int d2) {
int flag=0;
  if (a1>a2) {
      flag=1;
    if (flag==0) {

      if (m1>m2){
        flag = 1;
      }
      if (flag ==0) {

        if (d1>d2) flag=1;
      }
    }
}
    return flag;
}

int main () {

int normal[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

struct Date {
  int dd;
  int mm;
  int aaaa;
};

struct Date fecha;
struct Date fecha_actual;

do {
  printf("Ingrese fecha\n");
  scanf("%d %d %d",&fecha.dd, &fecha.mm,&fecha.aaaa);
} while(!validar(fecha.dd,1,31)&&!validar(fecha.mm,1,12)&&!validar(fecha.aaaa,0,2017));

do {
  scanf("%d %d %d",&fecha_actual.dd, &fecha_actual.mm,&fecha_actual.aaaa);
} while(!validar(fecha_actual.dd,1,31)&&!validar(fecha_actual.mm,1,12)&&!validar(fecha_actual.aaaa,0,2017));

struct Mes {
 char mes[100];
};

struct Mes M[13];
strcpy(M[1].mes,"enero");
strcpy(M[2].mes,"febrero");
strcpy(M[3].mes,"marzo");
strcpy(M[4].mes,"abril");
strcpy(M[5].mes,"mayo");
strcpy(M[6].mes,"junio");
strcpy(M[7].mes,"julio");
strcpy(M[8].mes,"agosto");
strcpy(M[9].mes,"septiembre");
strcpy(M[10].mes,"octubre");
strcpy(M[11].mes,"noviembre");
strcpy(M[12].mes,"diciembre");

int valida = 1;

if (is_bisiesto(fecha.aaaa)) {
    if(fecha.dd > 29 && fecha.mm==2){

      valida = 0;
  }

  if (fromTheFuture(fecha.aaaa,fecha_actual.aaaa,fecha.mm,fecha_actual.mm,fecha.dd,fecha_actual.dd)) {

        valida=0;
  }
}

else {
  if(fecha.dd > normal[fecha.mm]){

    valida = 0;
      }
  if (fromTheFuture(fecha.aaaa,fecha_actual.aaaa,fecha.mm,fecha_actual.mm,fecha.dd,fecha_actual.dd)) {

        valida=0;
  }
}

if (valida==1) {
  printf("%d de %s de %d es valida\n", fecha.dd, M[fecha.mm].mes,fecha.aaaa);
}
else {
  puts("fecha invalida");
}
  return 0;
}
