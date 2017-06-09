#include <stdio.h>
#include <string.h>
#define N 30

typedef struct Persona{
    char nombre[30];
    char apellido_p[30];
    int edad;
    float peso;
    float estatura;
}people;

void clean(char s[]) {
  char* where = strchr(s,'\n');
  if (where !=NULL)
  *where = '\0';
}

int main () {

people X[N];
int n;
scanf("%d",&n);


int i;
for (i = 0; i < n; i++) {
  fflush(stdin);
  scanf("%s\n",X[i].nombre);
  scanf("%s\n",X[i].apellido_p);
  scanf("%d",&X[i].edad);
  scanf("%f",&X[i].peso);
  scanf("%f",&X[i].estatura);
}
char nombre[N];
char apellido[N];
scanf("%s",nombre);
scanf("%s",apellido);
int flag=0;



for (i = 0; i < n; i++) {

  if(strcmp(X[i].nombre,nombre)==0 && strcmp(X[i].apellido_p,apellido)== 0) {
    flag=1;
      printf("%s %s\n",X[i].nombre,X[i].apellido_p);
      printf("%d\t",X[i].edad);
      printf("%f\t",X[i].peso);
      printf("%f\n",X[i].estatura);
  }

}
if(flag==0) {
  printf("%s %s no se encuentra en la lista\n",nombre,apellido);
}
return 0;
}
