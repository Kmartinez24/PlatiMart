#include <stdio.h>
#include "Platinub.h"
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>


void Logueo(char* titulo,char* Subtema,char* a,char* b,char* c,char* d)
{
	char ra1[]="                -ENTRAR-                 ";
	char ra2[]="A ESTE APARTADO SOLO DEBES ACCEDER CUANDO";
	char ra3[]="YA USASTE NUESTRA APLICACION EN UN PASADO";
	char ra4[]="DEBERAS UTILIZAR TUS DATOS QUE COLOCASTE";
	char ra5[]="EN EL ANTERIOR FORMULARIO Y ACCEDERAS AL";
	char ra6[]="CENTRO DEL PROGRAMA, DONDE ESTAN TODAS";
	char ra7[]="NUESTRAS FUNCIONES POR QUE SI, HAY MAS";
	char ra8[]="FUNCIONES EN NUESTRO PROGRAMA!";
	simple_menu(titulo,Subtema,a,b,c,d,ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}

void Registros(char* titulo,char* Subtema,char* a,char* b,char* c,char* d)
{
	char ra1[]="             -RESGISTRO-                 ";
	char ra2[]="EN ESTE APARTADO PODRAS ENTRAR PARA";
	char ra3[]="FORMAR PARTE DE NUESTRA PLATAFORMA CON UN";
	char ra4[]="SENCILLO FORMULARIO QUE DEBERAS DE LLENAR";
	char ra5[]="SIN LA UTILIZACION DE LOS ESPACIOS.      ";
	char ra6[]="ADEMAS DE QUE AL CONCLUIRLO TE DARAN TU";
	char ra7[]="NUM. DE CUENTA CON EL CUAL ESTAS REGIST.";
	char ra8[]="Y CON EL PODRAS ENTRAR A LA PLATAFORMA";
	simple_menu(titulo,Subtema,a,b,c,d,ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}


void Tutorial(char* titulo,char* Subtema,char* a,char* b,char* c,char* d)
{
    char ra1[]="             -TUTORIAL-                 ";
    char ra2[]="1.-REGISTRA LOS DATOS PARA CONTINUAR";
    char ra3[]="2.-INGRESA TU CUENTA";
    char ra4[]="3.-BUSCA OTROS USUARIOS ";
    char ra5[]="4.-INGRESA AL TUTORIAL";
    char ra6[]="0.-SALIR DEL PROGRAMA";
    char ra7[]=" ";
    char ra8[]=" ";
    simple_menu(titulo,Subtema,a,b,c,d,ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}

void Busqueda(char* titulo,char* Subtema,char* a,char* b,char* c,char* d)
{
    char ra1[]="             -TUTORIAL-                 ";
    char ra2[]="1.-REGISTRA LOS DATOS PARA CONTINUAR";
    char ra3[]="2.-INGRESA TU CUENTA";
    char ra4[]="3.-BUSCA OTROS USUARIOS ";
    char ra5[]="4.-INGRESA AL TUTORIAL";
    char ra6[]="0.-SALIR DEL PROGRAMA";
    char ra7[]=" ";
    char ra8[]=" ";
    simple_menu(titulo,Subtema,a,b,c,d,ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
}

int ADMIN(int &opcion)
{
	char ra1[]="            -BIENVENIDO ADMIN-          ";
    char ra2[]="EN ESTE LUGAR ES DONDE PUEDES MODIFCAR A";
    char ra3[]="LOS USUARIOS Y LOS OBJETOS QUE SE VENDEN";
    char ra4[]="EN TU TIENDA SIN NECESIDAD DE PROGRAMAR.";
    char ra5[]="SOLO RECUERDA QUE PARA QUE SE GUARDE EL";
    char ra6[]="CAMBIO DEBES DE SALIR PRESIONANDO 0!";
    char ra7[]="";
    char ra8[]="                      By: -TeamPlatinub-";
    char a[]="1|MANEJAR OBJETOS";
	char b[]="2|VER OBJETOS    ";
	char c[]="3|VER USUARIOS   ";
	char d[]="4|MODIFICAR $    ";
	char titulo[]="PlatiMart©";
	char Subtema[]="-[BUSCAMOS ORO PERO SIEMPRE ENCONTRAMOS PLATINO.]-";
	simple_menu(titulo,Subtema,a,b,c,d,ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
	opciones_prefix(&opcion,a,b,c,d);
}
int USER(int &opcion)
{
	char ra1[]="          -BIENVENIDO USUARIO-          ";
    char ra2[]="EN ESTE LUGAR ES DONDE PUEDES COMPRAR";
    char ra3[]="DISTINTOS PRODUCTOS QUE VIENEN DESDE LO";
    char ra4[]="PRACTICO HASTA LO SOFISTICADO SOLO QUE";
    char ra5[]="TEN CUIDADO NUESTRAS OFERTAS ATRAEN A";
    char ra6[]="TODO CLIENTE Y TE PUEDES LLEGAR A";
    char ra7[]="ENDEUDAR C:";
    char ra8[]="                      By: -TeamPlatinub-";
    char a[]="1|VER TU PERFIL  ";
	char b[]="2|COMPRAR        ";
	char c[]="3|VER LA TIENDA  ";
	char d[]="4|OFERTA?        ";
	char titulo[]="PlatiMart©";
	char Subtema[]="-[BUSCAMOS ORO PERO SIEMPRE ENCONTRAMOS PLATINO.]-";
	simple_menu(titulo,Subtema,a,b,c,d,ra1,ra2,ra3,ra4,ra5,ra6,ra7,ra8);
	opciones_prefix(&opcion,a,b,c,d);
}

int main()
{
	int color=0;
	system("color 7c");
	struct
	{
		char Nombre[40];
		char Apellidos[40];
		char Contra[40];
		char Telefono[40];
		float Saldo;
	}Personas[1001];
	
	struct 
	{
		char Nombre[50];
		float Precio;
	}Productos[1001];
	int aiudax2;
	int NumCuenta;
	int Pi=0;
	int opcBus=0;
	int Dados;
	int Dados2;
	float Extra, Repuesto;
	char Descuento[50];
	char a[]="1|ENTRAR         ";
	char b[]="2|REGISTRARTE    ";
	char c[]="3|VER LA TIENDA  ";
	char d[]="4|MODO DIA/NOCHE ";
	int PiAux=0;
	char Nombre[40];
	char Contra[40];
	int usuario1,usuario2;
	int aiuda;
	int Obj=0;
	int ObjAux=1;
	char aplus[]=">>ENTRAR         ";
	char bplus[]=">>REGISTRARTE    ";
	char cplus[]=">>VER LA TIENDA  ";
	char dplus[]=">>MODO DIA/NOCHE ";
	
	char r1[]="         BIENVENIDO A PLATIMART.";
    char r2[]="        EN ESTE SUPERMARKET PODRAS";
    char r3[]="       ENCONTRAR UNA GRAN VARIEDAD";
    char r4[]="      DE PRODUCTOS , PODRAS VER TU";
    char r5[]="      PERFIL DE UNA MANERA RAPIDA Y";
    char r6[]="    COMODA, APARTE EN PLATIMART PODRAS";
    char r7[]="     ENCONTRAR UNA GRAN VARIEDAD DE";
    char r8[]="OFERTAS QUE NO ENCONTRARAS EN OTRO LUGAR";
	char Oferta[50];
	int opcion=0;
	char titulo[]="PlatiMart©";
	char Subtema[]="-[BUSCAMOS ORO PERO SIEMPRE ENCONTRAMOS PLATINO.]-";
	int contador;
	FILE*archivo;
	FILE*Dinero;
	FILE*Objetos;
	Dinero=fopen("DatosDinero.dat","r+");
	archivo=fopen("DatosPersonales.dat","r+");
	Objetos=fopen("DatosObjetos.dat","r+");
	if(archivo==NULL || Dinero==NULL || Objetos==NULL)
	{
	LineaCargar();
	printf("   SE TE HAN GENERADO LOS ARCHIVOS\n");
	archivo=fopen("DatosPersonales.dat","w+");
	Dinero=fopen("DatosDinero.dat","w+");
	Objetos=fopen("DatosObjetos.dat","w+");
	
	fprintf(Objetos,"MANZANAS\n5.40\nPERAS\n8.70\nPLATANOS\n7.35");
	system("pause");
	}
	else
	{
	while(!feof(archivo))
	{
		fscanf(archivo,"%s",&Personas[Pi].Nombre);
		fscanf(archivo,"%s",&Personas[Pi].Apellidos);
		fscanf(archivo,"%s",&Personas[Pi].Contra);
		fscanf(archivo,"%s",&Personas[Pi].Telefono);
		Pi++;
	}
	Pi=0;
	while(!feof(Dinero))
	{
		fscanf(Dinero,"%f",&Personas[Pi].Saldo);
		Pi++;
	}
	while(!feof(Objetos))
	{
		fscanf(Objetos,"%s",&Productos[Obj].Nombre);
		fscanf(Objetos,"%f",&Productos[Obj].Precio);
		Obj++;
	}
	Obj--;
	Cargar();
	do
	{
	simple_menu(titulo,Subtema,a,b,c,d,r1,r2,r3,r4,r5,r6,r7,r8);
	opciones_prefix(&opcion,a,b,c,d);		
	switch(opcion)
	{
		case 1:
			RANDOM(&Dados2,1,6);
            Logueo(titulo,Subtema,aplus,b,c,d);
            FormularioStart();
            printf("                   %c%c ",175,175); printf("ESCRIBA SU NUMERO DE USUARIO:     "); scanf("%d",&PiAux);
            printf("                   %c%c ",175,175); printf("INSERTE SU NOMBRE:                "); scanf("%s",&Nombre);
            printf("                   %c%c ",175,175); printf("INSERTE SU CONTRASE%cA:            ",165); scanf("%s",&Contra);
            FormularioEnd();
            
            LineaCargar();
            if (strcmp(Nombre,Personas[PiAux].Nombre) == 0)
            { usuario1=1; }
            else if (strcmp(Nombre,"ADMIN")==0 || strcmp(Nombre,"admin")==0)
            { usuario1=2; }
            else
            { usuario1=0; }
            if (strcmp(Contra,Personas[PiAux].Contra) == 0)
            { usuario2=1; }
            else if (strcmp(Contra,"ADMIN")==0 || strcmp(Nombre,"admin")==0)
            { usuario2=2; }
            else
            { usuario2=0; }
            if (usuario1==1 && usuario2==1)
            {
            	RANDOM(&Dados,1,5);
            	switch(Dados)
            	{
            		case 1:
            			LineaCargar();
            			Sleep(2000);
            			RANDOM(&Dados,0,Obj+1);
            			switch(Dados2)
            			{
            				case 1:
            					Repuesto=Productos[Dados].Precio;
            					Extra= 45*Productos[Dados].Precio;
            					Extra= Extra / 100;
            					Productos[Dados].Precio=Productos[Dados].Precio-Extra;
            					strcpy(Oferta,"SI HAY");
            					strcpy(Descuento,"45%");
            					break;
            				case 2:
            					Repuesto=Productos[Dados].Precio;
            					Extra= 20*Productos[Dados].Precio;
            					Extra= Extra/100;
            					Productos[Dados].Precio=Productos[Dados].Precio-Extra;
            					strcpy(Oferta,"SI HAY");
            					strcpy(Descuento,"20%");
            					break;
            				case 3:
            					Repuesto=Productos[Dados].Precio;
            					Extra= 40*Productos[Dados].Precio;
            					Extra= Extra/100;
            					Productos[Dados].Precio=Productos[Dados].Precio-Extra;
            					strcpy(Oferta,"SI HAY");
            					strcpy(Descuento,"40%");
            					break;
            				case 4:
            					Repuesto=Productos[Dados].Precio;
            					Extra= 60*Productos[Dados].Precio;
            					Extra= Extra/100;
            					Productos[Dados].Precio=Productos[Dados].Precio-Extra;
            					strcpy(Oferta,"SI HAY");
            					strcpy(Descuento,"60%");
            					break;
            				case 5:
            					Repuesto=Productos[Dados].Precio;
            					Extra= 55*Productos[Dados].Precio;
            					Extra= Extra/100;
            					Productos[Dados].Precio=Productos[Dados].Precio-Extra;
            					strcpy(Oferta,"SI HAY");
            					strcpy(Descuento,"55%");
            					break;
						}
            			
            			
            			
            			break;
            		default:
					strcpy(Oferta,"NO HAY"); 
					break;
				}
			printf("ENTRASTE");
			while(opcion!=0)
			{
				USER(opcion);
				printf("\n");
				switch(opcion)
				{
					case 3:
						aiuda=0;
            			system("cls");
            			printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            			printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            			printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            			while(aiuda<=119)
            			{
            				printf("%c",205);
            				aiuda++;
            				Sleep(2);
						}
						printf("\n\n");
						ObjAux=0;
						aiuda=10;
						while(opcion!=1)
						{
						while(ObjAux<=aiuda)
						{
							if (ObjAux==aiuda)
							{
						Sleep(120);
						printf("           %c%c%c%c%c   [NUMERO]: |%d|\n",196,196,196,175,175,ObjAux);
						printf("                                  [NOMBRE]: |%s|\n",Productos[ObjAux].Nombre);
						printf("                                  [PRECIO]: |$%.2f|\n\n",Productos[ObjAux].Precio);
						ObjAux++;
							}
							else
							{
							Sleep(120);
						printf("           %c%c%c%c%c   [NUMERO]: |%d|",196,196,196,175,175,ObjAux);
						ObjAux++;
						printf("                             %c%c%c%c%c   [NUMERO]: |%d|\n",196,196,196,175,175,ObjAux);
						ObjAux--;
						printf("                               [NOMBRE]: |%s|",Productos[ObjAux].Nombre);
						ObjAux++;
						printf("                                      [NOMBRE]: |%s|\n",Productos[ObjAux].Nombre);
						ObjAux--;
						printf("                               [PRECIO]: |$%.2f|",Productos[ObjAux].Precio);
						ObjAux++;
						printf("                                      [PRECIO]: |$%.2f|\n\n",Productos[ObjAux].Precio);
						ObjAux++;
						}
						}
            			FormularioStart();
            			printf("               Inserte       1| Salir     2| Siguientes 10      3| Comprar\n               ");
            			scanf("%d",&opcion);
            			FormularioEnd();
            			switch(opcion)
            			{
            				case 2:
            					
            						system("cls");
            						aiudax2=0;
            						system("cls");
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            						printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            						while(aiudax2<=119)
            						{
            						printf("%c",205);
            						aiudax2++;
            						Sleep(2);
									}
								printf("\n\n");
            					aiuda=aiuda+10;
            					break;
            				case 1:
            					aiuda=0;
            					break;
            				case 3:
            					goto COMPRAR;
            					break;
						}
						}
						break;
					case 1:
									system("cls");
									aiuda=0;
									printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            						printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            						while(aiuda<=119)
            			{
            				printf("%c",205);
            				aiuda++;
            				Sleep(2);
						}
						Sleep(120);
						printf("           %c%c%c%c%c   [NUMERO]: |%d|\n",196,196,196,175,175,PiAux);
						printf("                                  [NOMBRE]:       %s\n",Personas[PiAux].Nombre);
						printf("                                  [APELLIDOS]:    %s\n",Personas[PiAux].Apellidos);
						printf("                                  [CONTRASE%cA]:   %s\n",165,Personas[PiAux].Contra);
						printf("                                  [TELEFONO]:     %s\n",Personas[PiAux].Telefono);
						printf("                                  [SALDO]:              |$%.2f|\n\n",Personas[PiAux].Saldo);
						system("pause");
						break;
					case 2:
						COMPRAR:
						FormularioStart();
            			printf("                   %c%c ",175,175); printf("INSERTE EL NUMERO DEL PRODUCTO:      "); scanf("%d",&ObjAux);
            			if(Personas[PiAux].Saldo<Productos[ObjAux].Precio)
            			{
            				printf("                   %c%c ",175,175); printf("NO TIENES SUFICIENTE SALDO:      ");
            			}
            			else
            			{
            			printf("                   %c%c ",175,175); printf("ESTAS APUNTO DE COMPRAR %s A %.2f:      \n                           1|COMPRAR       2|CANCELAR\n                                       ",Productos[ObjAux].Nombre,Productos[ObjAux].Precio); scanf("%d",&opcion);
            			switch(opcion)
            			{
            				case 1:
            					Personas[PiAux].Saldo=Personas[PiAux].Saldo-Productos[ObjAux].Precio;
            					aiuda=0;
            			fclose(Dinero);
            			Dinero=fopen("DatosDinero.dat","r+");
            			while(aiuda<Pi-1)
            			{
            				fprintf(Dinero,"%.2f\n",Personas[aiuda].Saldo);
            				aiuda++;
						}
            					
						}
						}
            			FormularioEnd();
            			LineaCargar();
            			system("pause");
						break;
					case 4:
						FormularioStart();
						if(strcmp(Oferta,"SI HAY")==0)
						{
						printf("                   %c%c ",175,175); printf("SI HAY!, TU OFERTA ES DE:\n "); printf("%c%c ",175,175);
						printf("EL PRODUCTO %s TIENE UN DESCUENTO DE %s Y ESTA A SOLO %.2f",Productos[Dados].Nombre,Descuento,Productos[Dados].Precio);
						
						}
						else
						{
							printf("                   %c%c ",175,175);
							printf("No hay :C");
						}
						FormularioEnd();
						printf("\n");
						system("pause");
						break;
				}
			}
            }
            else if (usuario1==2 && usuario2==2)
            {
            	printf("MODO ADMIN");
            	while(opcion!=0)
            	{
				
            	ADMIN(opcion);
            	printf("\n");
            	switch(opcion)
            	{
            		case 1:
            			FormularioStart();
            			printf("                   %c%c ",175,175); printf("AGREGAR O ELIMINAR PRODUCTOS ESE ES EL DILEMA\n                   1|AGREGAR 2|ELIMNAR                   "); scanf("%d",&opcion);
            			switch(opcion)
            			{
            				case 1:
            					Obj++;
            			FormularioStart();
            			printf("                   %c%c ",175,175); printf("INSERTE EL PRODUCTO:      "); scanf("%s",&Productos[Obj].Nombre);
            			printf("                   %c%c ",175,175); printf("INSERTE SU PRECIO:        "); scanf("%f",&Productos[Obj].Precio);
            			FormularioEnd();
            			fprintf(Objetos,"\n%s\n",Productos[Obj].Nombre);
            			fprintf(Objetos,"%.2f",Productos[Obj].Precio);
            			LineaCargar();
            				break;
            				case 2:
            					FormularioStart();
            			printf("                   %c%c ",175,175); printf("INSERTE EL NUMERO DEL PRODUCTO:      "); scanf("%d",&ObjAux);
            			FormularioEnd();
            				aiuda=0;
            				fclose(Objetos);
            				int remove(char *Objetos);
            				FILE*Objetos;
            				Objetos=fopen("DatosObjetos.dat","w+");
            				while(aiuda<=Obj)
            				{
            					if(aiuda == ObjAux)
            					{
            						aiuda++;
								}
								else
								{
									fprintf(Objetos,"%s\n",Productos[aiuda].Nombre);
            						fprintf(Objetos,"%.2f\n",Productos[aiuda].Precio);
            						aiuda++;
								}
							}
            				LineaCargar();
            				
            					break;
            			}
            			
            			break;
            		case 2:
            			aiuda=0;
            			system("cls");
            			printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            			printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            			printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            			while(aiuda<=119)
            			{
            				printf("%c",205);
            				aiuda++;
            				Sleep(2);
						}
						printf("\n\n");
						ObjAux=0;
						aiuda=10;
						while(opcion!=1)
						{
						while(ObjAux<=aiuda)
						{
							if (ObjAux==aiuda)
							{
						Sleep(120);
						printf("           %c%c%c%c%c   [NUMERO]: |%d|\n",196,196,196,175,175,ObjAux);
						printf("                                  [NOMBRE]: |%s|\n",Productos[ObjAux].Nombre);
						printf("                                  [PRECIO]: |$%.2f|\n\n",Productos[ObjAux].Precio);
						ObjAux++;
							}
							else
							{
							Sleep(120);
						printf("           %c%c%c%c%c   [NUMERO]: |%d|",196,196,196,175,175,ObjAux);
						ObjAux++;
						printf("                             %c%c%c%c%c   [NUMERO]: |%d|\n",196,196,196,175,175,ObjAux);
						ObjAux--;
						printf("                               [NOMBRE]: |%s|",Productos[ObjAux].Nombre);
						ObjAux++;
						printf("                                      [NOMBRE]: |%s|\n",Productos[ObjAux].Nombre);
						ObjAux--;
						printf("                               [PRECIO]: |$%.2f|",Productos[ObjAux].Precio);
						ObjAux++;
						printf("                                      [PRECIO]: |$%.2f|\n\n",Productos[ObjAux].Precio);
						ObjAux++;
						}
						}
            			FormularioStart();
            			printf("               Inserte       1| Salir     2| Siguientes 10\n               ");
            			scanf("%d",&opcion);
            			FormularioEnd();
            			switch(opcion)
            			{
            				case 2:
            					
            						system("cls");
            						aiudax2=0;
            						system("cls");
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            						printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            						while(aiudax2<=119)
            						{
            						printf("%c",205);
            						aiudax2++;
            						Sleep(2);
									}
								printf("\n\n");
            					aiuda=aiuda+10;
            					break;
            				case 1:
            					aiuda=0;
            					break;
						}
						}
            			break;
            		case 3:
            			aiuda=0;
            			system("cls");
            			printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            			printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            			printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            			while(aiuda<=119)
            			{
            				printf("%c",205);
            				aiuda++;
            				Sleep(2);
						}
						printf("\n\n");
						PiAux=0;
						aiuda=2;
						while(opcion!=1)
						{
						while(PiAux<=aiuda)
						{
							
						Sleep(120);
						printf("           %c%c%c%c%c   [NUMERO]: |%d|\n",196,196,196,175,175,PiAux);
						printf("                                  [NOMBRE]:       %s\n",Personas[PiAux].Nombre);
						printf("                                  [APELLIDOS]:    %s\n",Personas[PiAux].Apellidos);
						printf("                                  [CONTRASE%cA]:   %s\n",165,Personas[PiAux].Contra);
						printf("                                  [TELEFONO]:     %s\n",Personas[PiAux].Telefono);
						printf("                                  [SALDO]:              |$%.2f|\n\n",Personas[PiAux].Saldo);
						PiAux++;
							
						}
            			FormularioStart();
            			printf("               Inserte       1| Salir     2| Siguientes 3\n               ");
            			scanf("%d",&opcion);
            			switch(opcion)
            			{
            				case 2:
            					
            						system("cls");
            						aiudax2=0;
            						system("cls");
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            						printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            						while(aiudax2<=119)
            						{
            						printf("%c",205);
            						aiudax2++;
            						Sleep(2);
									}
								printf("\n\n");
            					aiuda=aiuda+3;
            					break;
            				case 1:
            					PiAux=0;
            					aiuda=0;
            					break;
						}
						}
            			break;
            		case 4:
            			FormularioStart();
            			printf("                   %c%c ",175,175); printf("A QUE USUARIO DESEA MODIFICAR SU SALDO?\n                   %c%c ",175,175);
            			scanf("%d",&PiAux);
            			if (PiAux >= Pi-1 || PiAux<=-1)
            			{
            				printf("NO EXISTE UN USUARIO CON ESE NUMERO\n");
						}
						else
						{
            			printf("                   %c%c ",175,175); printf("INSERTE EL NUEVO SALDO DEL USUARIO?\n                   %c%c ",175,175);
            			scanf("%f",&Personas[PiAux].Saldo);
            			aiuda=0;
            			fclose(Dinero);
            			Dinero=fopen("DatosDinero.dat","r+");
            			while(aiuda<Pi-1)
            			{
            				fprintf(Dinero,"%.2f\n",Personas[aiuda].Saldo);
            				aiuda++;
						}
						}
            			break;
            		default:
            			break;
				}
            	}
			}
			else
			{
				printf("USUARIO INCORRECTO");
			}
            system("pause");
            break;
		case 2:
			Registros(titulo,Subtema,a,bplus,c,d);
			FormularioStart();//utilizado el cuadro de mi libreria 7u7;
			printf("                   %c%c ",175,175); printf("INSERTE SU NOMBRE:        "); scanf("%s",&Personas[Pi].Nombre);//scaneo las cosas  aunque todabia no las ocupamos :v
			printf("                   %c%c ",175,175); printf("INSERTE SU APELLIDO:      "); scanf("%s",&Personas[Pi].Apellidos);
			printf("                   %c%c ",175,175); printf("INSERTE SU CONTRASE%cA:    ",165); scanf("%s",&Personas[Pi].Contra);
			printf("                   %c%c ",175,175); printf("INSERTE SU TELEFONO       "); scanf("%s",&Personas[Pi].Telefono);
			printf("                   %c%c ",175,175); printf("SU NUMERO DE USUARIO ES:  %d  RECUERDALO",Pi-1); 
			FormularioEnd();//cerramos el cuadro con mi libreria 7u7;
			Personas[Pi].Saldo=100;
			fprintf(archivo,"%s\n",Personas[Pi].Nombre);
			fprintf(archivo,"%s\n",Personas[Pi].Apellidos);
			fprintf(archivo,"%s\n",Personas[Pi].Contra);
			fprintf(archivo,"%s\n",Personas[Pi].Telefono);
			fprintf(Dinero,"%.2f\n",Personas[Pi].Saldo);
			LineaCargar();
			printf("ahora debes reloguear!");
			system("pause");
			return 0;
			break;
		case 3:
			Cargar();
			aiuda=0;
            			system("cls");
            			printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            			printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            			printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            			while(aiuda<=119)
            			{
            				printf("%c",205);
            				aiuda++;
            				Sleep(2);
						}
						printf("\n\n");
						ObjAux=0;
						aiuda=10;
						while(opcion!=1)
						{
						while(ObjAux<=aiuda)
						{
							if (ObjAux==aiuda)
							{
						Sleep(120);
						printf("           %c%c%c%c%c   [NUMERO]: |%d|\n",196,196,196,175,175,ObjAux);
						printf("                                  [NOMBRE]: |%s|\n",Productos[ObjAux].Nombre);
						printf("                                  [PRECIO]: |$%.2f|\n\n",Productos[ObjAux].Precio);
						ObjAux++;
							}
							else
							{
							Sleep(120);
						printf("           %c%c%c%c%c   [NUMERO]: |%d|",196,196,196,175,175,ObjAux);
						ObjAux++;
						printf("                             %c%c%c%c%c   [NUMERO]: |%d|\n",196,196,196,175,175,ObjAux);
						ObjAux--;
						printf("                               [NOMBRE]: |%s|",Productos[ObjAux].Nombre);
						ObjAux++;
						printf("                                      [NOMBRE]: |%s|\n",Productos[ObjAux].Nombre);
						ObjAux--;
						printf("                               [PRECIO]: |$%.2f|",Productos[ObjAux].Precio);
						ObjAux++;
						printf("                                      [PRECIO]: |$%.2f|\n\n",Productos[ObjAux].Precio);
						ObjAux++;
						}
						}
            			FormularioStart();
            			printf("               Inserte       1| Salir     2| Siguientes 10\n               ");
            			scanf("%d",&opcion);
            			FormularioEnd();
            			switch(opcion)
            			{
            				case 2:
            					
            						system("cls");
            						aiudax2=0;
            						system("cls");
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            						printf("                                              %c-=%c%c>>[PLATIMART©]<<%c%c=-%c\n",186,175,175,174,174,186);
            						printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            						while(aiudax2<=119)
            						{
            						printf("%c",205);
            						aiudax2++;
            						Sleep(2);
									}
								printf("\n\n");
            					aiuda=aiuda+10;
            					break;
            				case 1:
            					aiuda=0;
            					break;
						}
						}
			break;
		case 4:
			LineaCargar();
			if(color==1)
			{
				color=0;
				system("color 7c");
			}
			else
			{
				system("color 0b");
				color++;
			}
			system("pause");
			break;
			
	}
	}while(opcion!=0);
	}
	return 0;
}
