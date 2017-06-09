#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
#define FAIL -987536


int main () {


FILE *fp;
fp = fopen("datos.dat","r"); //Debe estar en el mismo proyecto / carpeta;
      if (fp == NULL) {
        printf("error\n");
      }
      else {
        int n=0;
        int N[SIZE];
        while (n < SIZE) {
          fscanf(fp,"%d", &N[n]);
          if(N[n]== FAIL) break;
          else {
            n++;
          }
        }
        FILE *salida;
        salida = fopen("salida.txt", "w");
        if (salida== NULL) {
          printf("error crear salida\n");
        }
        else {
          int sum=0;
          int i;
          for (i = 0; i < n; i++) {
            sum += N[i];
          }
          fprintf(salida,"%d\n",sum);
          fclose(salida);
        }
        fclose(fp);
      }
  return 0;
}
