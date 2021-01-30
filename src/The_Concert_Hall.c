//MASALA VANGULUA JARED
//INFOS ISTA
//G1
#include <stdio.h>
#include <conio.h>
void main()
{ int position1[6];
int position2[6];
int position3[6];
int position4[6], choix;
char scene1[6];
char scene2[6];
char scene3[6];
char scene4[6];
int a;
printf("********************************************************************\n ");
printf("**********Bienvenus dans le programme*****************\n ");
printf("********************************************************************\n ");
printf(" Ecrit par MASALA VANGULUA JARED 2EME METHODE\n ");
printf(" TAPEZ 1. Verifier vos sieges \n");
printf(" TAPEZ 2. Quitter\n\n");
printf("********************************************************************\n ");
printf("Entrez votre choix ENTRE 1 ET 2: ");
scanf("%d", &choix);

switch(choix){
case 1:
printf("\n Entrez les valeurs de vos 24 sieges:\n ");
printf("********************************************************************\n ");
for (a=0;a<6;++a)
{scanf("%d\t", &position1 [a]);
}for (a=0;a<6;++a)
{scanf("%d\t", &position2 [a]);
}for (a=0;a<6;++a)
{scanf("%d\t", &position3 [a]);
}for (a=0;a<6;++a)
//MASALA VANGULUA JARED
//INFOS ISTA
//G1
{scanf("%d\t", &position4 [a]);}
// Affichage des sieges
printf("**************************************************************************************\n ");
printf(" \t\t\tvoici vos 24 sieges en 4 lignes 6 colones \n ");
printf("**************************************************************************************\n ");
for (a=0;a<6;++a)
{
printf("%10d",position1[a]);

}
printf("\n");
for (a=0;a<6;++a)
{
printf("%10d",position2[a]);
}
printf("\n");
for (a=0;a<6;++a)
{
printf("%10d",position3[a]);
}
printf("\n");
for (a=0;a<6;++a)
{
printf("%10d",position4[a]);
}
// 1ere colonne à vérifier
for (a=0;a<6;++a){
if (position4[a]<=position3[a] || position4[a]<=position2[a] || position4[a]<= position1[a])
{
scene4[a]='N';
}
else
{

scene4[a]='Y';
//MASALA VANGULUA JARED
//INFOS ISTA
//G1
}
}
// 2eme colonne à vérifier
for (a=0;a<6;++a){
if (position3[a]<=position2[a] || position3[a]<=position1[a])
{
scene3[a]='N';
}
else
{scene3[a]='Y';}
}
// 3eme colonne à verifier
for (a=0;a<6;++a){
if (position2[a]<=position1[a])
{
scene2[a]='N';
}
else
{scene2[a]='Y';
}

}
// 4eme colonne a vérifier
printf("\n\n********************************************************************\n ");
printf("\t\t\t LA SCENES EN DISIGNE CONSOLE\n ");
printf("\n\n\n*********************************************************************\n ");
for (a=0;a<6;++a){
scene1[a]='Y';
}
printf("\n\n");
for (a= 0; a<6; ++a)
{
printf("%10c",scene1[a]);
}
//MASALA VANGULUA JARED
//INFOS ISTA
//G1
printf("\n");
for (a= 0; a<6; ++a)
{
printf("%10c",scene2[a]);
}
printf("\n");

for (a= 0; a<6; ++a)
{
printf("%10c",scene3[a]);
}
printf("\n");
for (a= 0; a<6; ++a)
{
printf("%10c",scene4[a]);
}
printf("\n");
break;
case 2:
exit(0);
default:
printf("Le choix saisie est invalide");
}
getch();
}
