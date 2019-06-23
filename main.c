#include <stdio.h>
#include <stdlib.h>

 typedef struct{
char nombre[20];
char autor[20];
char genero[20];
int votosp;
int  votosn;
int aceptacion;
}CANCION;





void sacarcanciones (CANCION list);



int main()
{
    FILE *f;
    int i=0;
   CANCION list;
	int elegir=0;
	 do{
scanf("%d",&elegir);
switch(elegir)
{
    case 1:
        if(!(f=fopen("registro.txt","r")))
{
    printf("Error");
     return(1);
}


scanf("%s",list.nombre);
scanf("%s",list.autor);
scanf("%s",list.genero);
scanf("%d",&list.votosp);
scanf("%d",&list.votosn);

        fclose(f);
    break;
    case 2:sacarcanciones(list);
    break;
    case 3:

    break;
    default:printf("Saliendo...\n");
}
}
while(elegir!=0);
system("pause");
    return 0;

}


void sacarcanciones(CANCION list)
{
    int i=0;

    printf("%s\n%s\n%s\n%u\n%d\n",list.nombre,list.autor,list.genero,list.votosp,list.votosn);


}
