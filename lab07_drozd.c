/*===========================================================================*/
/*                               ZADANIE 52                                  */
/*===========================================================================*/


#include <stdio.h>

int main()
{
	printf("Program wypisuje tekst podany przez uzytkownika przy czym usuwa zbedne spacje.\nAutor: Jakub Drozd\n");
	char znak;
	int czyBialo;
	printf("Podaj tekst:\n");
	while ((znak = getchar()) != '\n' )
	{
		if (znak == ' ' && czyBialo)
		{
			continue;
		}
		if (znak == ' ' && !czyBialo)
		{
			czyBialo = 1;
			putchar(znak);
		}
		else
		{
		putchar(znak);
		czyBialo = 0;
		}
	}
	printf("\nKoniec programu\n");
	return 0;
}


/*===========================================================================*/
/*                               ZADANIE 53                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//	printf("Program wypisuje liczbe naturalna podana przez uzytkownika.\nAutor: Jakub Drozd\n");
//	int liczba;
//	printf("Podaj dowolna liczbe naturalna: ");
//	while (scanf_s("%d", &liczba)!=1 || liczba <= 0 || getchar()!='\n')
//	{
//		printf("Bledne dane, popraw: ");
//		int c;
//		while ((c = getchar()) != '\n' && c != EOF);
//	}
//	printf("Podales liczbe: %d", liczba);
//	printf("\nKoniec programu\n");
//	return 0;
//}


/*===========================================================================*/
/*                               ZADANIE 54                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//	printf("Program prosi o podanie literki 't' i wypisuje komunikat dla uzytkownika\nAutor: Jakub Drozd\n");
//	char znak;
//	printf("\nPodaj literke 't': ");
//	while (scanf_s("%c", &znak) != 1 || znak != 't' || getchar() != '\n')
//	{
//		printf("Bledne dane, popraw: ");
//		int c;
//		while ((c = getchar()) != '\n' && c != EOF)
//			;
//	}
//	printf("Wpisales literke 't'");
//	printf("\nKoniec programu\n");
//	return 0;
//}


/*===========================================================================*/
/*                               ZADANIE 55                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <limits.h>
//
//int main()
//{
//	printf("Program wyznacza minimum z podanych liczb\nAutor: Jakub Drozd\n");
//	printf("Podaj liczby naturalne, aby zakonczyc wpisz 0\n");
//	int liczba = 1;
//	int min = INT_MAX;
//	while (liczba != 0)
//	{
//		printf("Podaj liczbe: ");
//		while (scanf_s("%d", &liczba)!=1 || liczba < 0 || getchar()!='\n')
//		{
//			printf("Bledne dane, popraw: ");
//			int c;
//			while ((c = getchar()) != '\n' && c != EOF)
//				;
//		}
//		if (liczba != 0 && liczba < min)
//		{
//			min = liczba;
//		}
//	}
//	printf("Najmniejsza z podanych liczb to: %d", min);
//	printf("\nKoniec programu\n");
//	return 0;
//}


/*===========================================================================*/
/*                               ZADANIE 56                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//	int ilosc = 0;
//	double liczba;
//	double suma = 0;
//	printf("Program oblicza srednia dla podanych liczb zmiennopozycyjnych.\nAutor: Jakub Drozd\n");
//	printf("Podaj 10 liczb zmiennopozycyjnych:\n");
//	while (ilosc < 10)
//	{
//		printf("%d. ", ilosc+1);
//		while (scanf_s("%lf", &liczba)!=1 || getchar()!='\n')
//		{
//			printf("%d. Bledne dane, popraw: ", ilosc);
//			int c;
//			while ((c = getchar()) != '\n' && c != EOF)
//				;
//		}
//		suma += liczba;
//		ilosc++;
//	}
//	double srednia = suma / ilosc;
//	printf("Srednia arytmetyczna podanych liczb wynosi: %lf", srednia);
//	printf("\nKoniec programu\n");
//	return 0;
//}


/*===========================================================================*/
/*                               ZADANIE 57                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int ilosc = 1;
//	int liczba = 1;
//	int suma = 0;
//	int iloczyn = 1;
//	printf("Program wczytuje ciag liczb calkowitych dodatnich i wypisuje ich srednia arytmetyczna i geometryczna\nAutor: Jakub Drozd\n");
//	printf("Podaj ciag liczb calkowitych, zaby zakonczyc, podaj 0\n");
//	while (liczba !=0)
//	{
//		printf("%d. ", ilosc);
//		while (scanf_s("%d", &liczba)!=1 || liczba < 0 || getchar()!='\n')
//		{
//			printf("%d. Bledne dane, popraw: ", ilosc);
//			int c;
//			while ((c = getchar()) != '\n' && c != EOF);
//		}
//		if (liczba == 0)
//		{
//			continue;
//		}
//		else
//		{
//			suma += liczba;
//			iloczyn *= liczba;
//			ilosc++;
//		}
//		
//	}
//	ilosc -= 1;
//	double sredniaAry = (double)suma / ilosc;
//	double sredniaGeo = pow(iloczyn, (1.0 / ilosc));
//	printf("\nSrednia arytmetyczna podanych liczb: %lf\n", sredniaAry);
//	printf("Srednia geometryczna podanych liczb: %lf", sredniaGeo);
//	printf("\nKoniec programu\n");
//	return 0;
//}


/*===========================================================================*/
/*                               ZADANIE 58                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	printf("Program wczytuje ciag 0 i 1 o max. dlugosci 32 i przedstawia ja w postaci liczby dziesietnej\nAutor: Jakub Drozd\n");
//	long long liczba;
//	double wynik = 0;
//	double i = 0;
//	double reszta;
//	printf("Podaj ciag 0 i 1 NIE DLUZSZY niz 32:\n");
//	if (scanf_s("%lld", &liczba)!=1 || getchar() != '\n')
//	{
//		printf("Bledne dane.");
//		printf("\nKoniec programu\n");
//	}
//	while (liczba!=0)
//	{
//		reszta = liczba % 10;
//		liczba = liczba / 10;
//		wynik = wynik + reszta * pow(2,i);
//		i++;
//	}
//	printf("Podana przez ciebie liczba w systemie dwojkowym to %.0lf w systemie dziesietnym", wynik);
//	printf("\nKoniec programu\n");
//	return 0;
//}


/*===========================================================================*/
/*                               ZADANIE 59                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <limits.h>
//
//int main()
//{
//	printf("Program wykonuje wybrane operacje na podanych przez niego liczbach\nAutor: Jakub Drozd\n");
//	int wybor = 1;
//	int a = INT_MAX;
//	int b = INT_MAX;
//	int c;
//	while (wybor != 0) {
//		printf("\n0. Zakoncz program\n");
//		printf("1. Wczytaj liczby\n");
//		printf("2. Dodaj\n");
//		printf("3. Odejmij\n");
//		printf("4. Pomnoz\n");
//		printf("5. Podziel\n\n");
//		if (scanf_s("%d", &wybor) != 1 || wybor < 0 || wybor > 5 || getchar() != '\n')
//		{
//			printf("Nieznana operacja\n");
//			while ((c = getchar()) != '\n' && c != EOF);
//		}
//		else
//		{
//			if (wybor == 0)
//			{
//				printf("\nKoniec programu\n");
//				return 0;
//			}
//			if (wybor == 1)
//			{
//				printf("\nPodaj liczby a i b: \n");
//				printf("a: ");
//				while (scanf_s("%d", &a) != 1 || getchar() != '\n')
//				{
//					printf("Bledne dane, popraw.");
//					printf("\na: ");
//					while ((c = getchar()) != '\n' && c != EOF);
//				}
//				printf("b: ");
//				while (scanf_s("%d", &b) != 1 || getchar() != '\n')
//				{
//					printf("Bledne dane, popraw.");
//					printf("\nb: ");
//					while ((c = getchar()) != '\n' && c != EOF);
//				}
//				printf("\na = %d\n", a);
//				printf("b = %d\n\n", b);
//			}
//			if ((wybor >= 2 || wybor <= 5) && a == INT_MAX && b == INT_MAX)
//			{
//				printf("\nNie mozna wykonac operacji arytmetycznych, dopoki nie zostana wczytane liczby\n");
//			}
//			else if (wybor == 2)
//			{
//				printf("\n%d + %d = %d", a, b, a + b);
//			}
//			else if (wybor == 3)
//			{
//				printf("\n%d - %d = %d", a, b, a - b);
//			}
//			else if (wybor == 4)
//			{
//				printf("\n%d * %d = %d", a, b, a * b);
//			}
//			else if (wybor == 5)
//			{
//				if (b == 0)
//				{
//					printf("\nNie mozna wykonac dzielenia przez 0");
//				}
//				else
//				{
//					printf("\n%d / %d = %lf", a, b, (double)a / (double)b);
//				}
//			}
//		}
//	}
//}


