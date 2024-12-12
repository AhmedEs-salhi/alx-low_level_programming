#include <stdio.h>
#define MAX 10

//void lire_matrice(int ,int , int, int);
void lire_dim(int *l, int *c, int lmax, int cmax)
{
	do {
		printf("Entrer les dimensions: ");
		printf("\nLignes: ");
		scanf("%d", l);
		printf("Colonnes: ");
		scanf("%d", c);
	} while (*l > lmax || *c > cmax);
}

void lire_matrice(int mat[][MAX], int l, int c)
{
	int i, j;
	
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}

void ecrire_matrice(int mat[][MAX], int l, int c)
{
	int i, j;

	for (i = 0; i < l; i++)
	{
		printf("[ ");
		for (j = 0; j < c; j++)
			printf("%d ", mat[i][j]);
		printf("]\n");
	}
}

int *somme_matrice(int m[][MAX], int n[][MAX], int l, int c)
{
	int somme[l][c];
	int *matPtr;
	int i, j;
	
	matPtr = &somme[0][0];
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
			somme[i][j] = m[i][j] + n[i][j];
	}

	return (matPtr);
}

/**
 * main - asldjaflskfjö
 * @arg1
 * @ar2
 *
 * Description: alsdjföasjfalsjd
 *
 * Return: 
 */
	
int main()
{
	int lmax = 10;
	int cmax = 10;
	int n[MAX][MAX], m[MAX][MAX], somme[MAX][MAX], c, l;
	int *sommePtr;

	sommePtr = &somme[0][0];

	lire_dim(&l, &c, lmax, cmax);
	printf("Entrer les element de votre matrice:\n");
	lire_matrice(m, l, c);
	printf("\nEntrer les element de votre matrice:\n");
	lire_matrice(n, l, c);
	sommePtr = somme_matrice(m, n, l, c);
	printf("Affichage de votre matrice: \n");
	ecrire_matrice(somme, l, c);
	printf("Succeed\n");
	return (0);
}

