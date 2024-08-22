#include <stdio.h>

void affichage(int *nb,int *nb1,int *nb2,int *nb3);
void identification(int nb,int nb1,int nb2,int nb3);

int main()
{
	int nb,nb1,nb2,nb3;

	affichage(&nb,&nb1,&nb2,&nb3);
	identification(nb,nb1,nb2,nb3);

return 0;
}

void affichage(int *nb,int *nb1,int *nb2,int *nb3)
{
	printf("Veuiler saisir adresse IP\n");
	scanf("%d",nb);
	scanf("%d",nb1);
	scanf("%d",nb2);
	scanf("%d",nb3);
	
	printf("Adresse IP: %d.%d.%d.%d",*nb,*nb1,*nb2,*nb3);
	
	}

void identification(int nb,int nb1,int nb2,int nb3)
{
	if(nb>0 && nb>255) printf("\n\t---cette adresse IP n'existe pas---");
	if(nb>0 && nb1>255) printf("\n\t---cette adresse IP n'existe pas---");
	if(nb>0 && nb2>255) printf("\n\t---cette adresse IP n'existe pas---");
	if(nb>0 && nb3>255) printf("\n\t---cette adresse IP n'existe pas---");
	
	if(nb>0 && nb<127 && nb<255)printf("\n\tCette adresse est de classe:A");
	if(nb>0 && nb<191 && nb<255)printf("\n\tCette adresse est de classe:B");
	if(nb>0 && nb<223 && nb<255)printf("\n\tCette adresse est de classe:C");
	if(nb>0 && nb<239 && nb<255)printf("\n\tCette adresse est de classe:D");
	if(nb>0 && nb<255 && nb<255)printf("\n\tCette adresse est de classe:E");
	}
