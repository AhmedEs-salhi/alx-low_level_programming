#include <stdio.h>
#include <math.h>
#define MAX 10

void Lire_tableau(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Tab[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void Affiche_tableau(int arr[], int size)
{
	int i;

	printf("[ ");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("]\n");
}

void Affiche_carre(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		arr[i] *= arr[i];
	Affiche_tableau(arr, size);
}

int main()
{
	int tab[MAX], size;
	int i;
	
	printf("Entrer la taille: ");
	scanf("%d", &size);
	Lire_tableau(tab, size);
	Affiche_carre(tab, size);
	printf("\n");
	Lire_tableau(tab, size);

	for (i = 0; i < size; i++)
		tab[i] = (int)pow(tab[i], 2);

	Affiche_tableau(tab, size);

	return (0);


return (0);
}
