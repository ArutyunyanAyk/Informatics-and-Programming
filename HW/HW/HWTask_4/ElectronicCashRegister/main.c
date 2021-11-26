#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <locale.h>
#include <malloc.h>
#include <stdlib.h>

#define ARRSIZE 4

void Filling_ProductARR(int * prodname)                             //���������� ������� �����-����
{                                          
	for (int i = 0; i < ARRSIZE; i++)
	{
		prodname[i] = rand() % 9 + 1;
	}
}


void SHTK_Product(int* prodmass_name, int *prod_name)               //�������� �������� ������� � ����������
{
	for (int i = 0; i < ARRSIZE; i++)
	{
		int b = *prod_name;
		b *= 10;
		*prod_name = b;
		*prod_name += prodmass_name[i];
		
	}
}

void case4_printf( float sale, int count, float produkts)           //����� ���������� � ������
{
 printf("\n\t���������� ������ =  %0.1f %%", sale);
 printf("\n\t���������� ������ =  %d ��.", count);
 printf("\n\t��������� � ������ ������� = %0.0f ���.", produkts);
}
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));

	int option = 0, skan = 0, shk = 0, count = 0, type, f = 0, fs = 0, fRTX = 0, fRad = 0, fGig = 0, fASUS = 0, RTX = 0, Rad = 0, Gig = 0, ASUS = 0, skanRTX = 0, skanRad = 0, skanGig = 0, skanASUS = 0, countRTX = 0, countRad = 0, countGig = 0, countASUS = 0;
	int* RTX3060 = NULL, * RadRX6600 = NULL, * Gigabyte = NULL, * ASUSROG = NULL, * STRISH = NULL;
	float P_RTX3060, P_RadRX6600, P_Gigabyte, P_ASUSROG, sale1, sale2, sale3, sale4, P_RTX3060s, P_RadRX6600s, P_Gigabytes, P_ASUSROGs, SUMM;
	
	//��������� ������ 
	RTX3060   = (int*)malloc(ARRSIZE * sizeof(int*));
	RadRX6600 = (int*)malloc(ARRSIZE * sizeof(int*));
	Gigabyte  = (int*)malloc(ARRSIZE * sizeof(int*));
	ASUSROG   = (int*)malloc(ARRSIZE * sizeof(int*));
	STRISH    = (int*)malloc(ARRSIZE * sizeof(int*));
	//���������� ������� ����-���� 
	Filling_ProductARR(RTX3060);
	Filling_ProductARR(RadRX6600);
	Filling_ProductARR(Gigabyte);
	Filling_ProductARR(ASUSROG);
	//�������� �����-���� � �����������
	SHTK_Product(RTX3060, &RTX);
	SHTK_Product(RadRX6600, &Rad);
	SHTK_Product(Gigabyte, &Gig);
	SHTK_Product(ASUSROG, &ASUS);
	//������
	sale1 = rand() % 50;
	sale2 = rand() % 50;
    sale3 = rand() % 50;
	sale4 = rand() % 50;
	//���� �������
    P_RTX3060   = 60000;
	P_RadRX6600 = 50000;
	P_Gigabyte  = 20000;
	P_ASUSROG   = 25000;
	//���� ������� � ������ ������
	P_RTX3060s = P_RTX3060 * (1 - (sale1 / 100));
	P_RadRX6600s = P_RadRX6600 * (1 - (sale2 / 100));
	P_Gigabytes = P_Gigabyte * (1 - (sale3 / 100));
	P_ASUSROGs = P_ASUSROG * (1 - (sale4 / 100));

	
	

	printf("\n��� ���� ��� �� ����������� ����� - ������� '1'\n");
	printf("������� �������� ���������������� ������ - '2'\n");
	printf("�������� ������ � ������ � ��� - '3'\n");
	printf("������������ ��� �� ������� - ������� '4'\n");
	printf("���������� �������� ����� � ������ - ������� '5'\n");
	
	printf("\n\n����� ��� RTX3060 - %d\n", RTX);
	printf("����� ��� RadRX6600 - %d\n", Rad);
	printf("����� ��� Gigabyte - %d\n", Gig);
	printf("����� ��� ASUSROG - %d\n", ASUS);
	do 
	{
		printf("\n������� ����� ��������: ");
		scanf_s("%d", &option);

		switch (option)
		{   
			case 1:
			{   
				do
				{
					fs = 0;
					printf("\n������� ����� ���:");
					scanf_s("%d", &shk);
					
					if (shk == RTX)
					{
						printf("\n�� ������������� RTX3060\n");
						f = 1;
					}
					else
					{
						if (shk == Rad)
						{
							printf("\n�� ������������� RadRX6600\n");
							f = 2;
						}
						else
						{
							if (shk == Gig)
							{
								printf("\n�� ������������� Gigabyte\n");
								f = 3;
							}
							else
							{
								if (shk == ASUS)
								{
									printf("\n�� ������������� ASUSROG\n");
									f = 4;
								}
								else
								{
									printf("\n>����� �� ������");
									fs = 1;
								}
							}
						}
					}
									
			    } while (fs == 1);
			     break;
				
			}
			case 2:
			{
				if (f == 1)
				{
					printf("\n���������� RTX3060 - 10G 1��.\n���� �� ��. = %.1f ���.", P_RTX3060);
					printf("\n���������� ������ = %0.1f %%\n", sale1);
				}
				else
				{
					if (f == 2)
					{
						printf("\n���������� RadRX6600 - 8G 1��.\n���� �� ��. = %.1f ���.", P_RadRX6600);
						printf("\n���������� ������ = %0.1f %%\n", sale2);
					}
					else
					{
						if (f == 3)
						{
							printf("\n����������� ����� Gigabyte 1��\n���� �� ��. = %.1f ���.", P_Gigabyte);
							printf("\n���������� ������ = %0.1f %%\n", sale3);
						}
						else
						{
							if (f == 4)
							{
								printf("\n����������� �����  ASUSROG  1��\n���� �� ��. = %.1f ���.", P_ASUSROG);
								printf("\n���������� ������ = %0.1f %%\n", sale4);
							}
							else
							{
								printf("����� ���������� ���������� � ������ ������� ����� ��� �������������!");
							}
						}
					}
				}

				break;
			}
			case 3:
			{
				if (f == 1)
				{				
					printf("������� ���������� ���������������� ������, ������� ����� �������� � ���:");
					scanf_s("%d", &countRTX);
					printf("\n����� �������� � ���");
					fRTX = 1;
				}
				else
				{
					if (f == 2)
					{
						printf("������� ���������� ���������������� ������, ������� ����� �������� � ���:");
						scanf_s("%d", &countRad);
						printf("\n����� �������� � ���");
						fRad = 1;
					}
					else
					{
						if (f == 3)
						{
							printf("������� ���������� ���������������� ������, ������� ����� �������� � ���:");
							scanf_s("%d", &countGig);
							printf("\n����� �������� � ���");
							fGig = 1;
						}
						else
						{
							if (f == 4)
							{
								printf("������� ���������� ���������������� ������, ������� ����� �������� � ���:");
								scanf_s("%d", &countASUS);
								printf("\n����� �������� � ���");
								fASUS = 1;
							}
							else
							{
								printf("��� ������ ������������ �����");
							}
						}
					}
				}

				break;
			}
			case 4:
			{
				printf("��� �� ������� �� ������ ������:");

				if (fRTX == 1)
				{
					P_RTX3060s = P_RTX3060s * countRTX;
					printf("\nRTX3060 10G:");
					case4_printf(sale1, countRTX, P_RTX3060s);
				}
			
		     	if (fRad == 1)
				{
					P_RadRX6600s= P_RadRX6600s * countRad;
					case4_printf(sale2, countRad, P_RadRX6600s);
				}
				
				
				if (fGig == 1)
				{
				    P_Gigabytes = P_Gigabytes * countGig;
				    case4_printf(sale3, countGig, P_Gigabytes);
				}
					
					
				if (fASUS == 1)
				{
					P_ASUSROGs = P_ASUSROGs * countASUS;
					printf("\nASUSROG:");
					case4_printf(sale4, countASUS, P_ASUSROGs);
		     	}

				if(fRTX == 0 && fRad == 0 && fGig == 0 && fASUS == 0)
				{
				    printf("��� ��� ����, ��� ������ ������������ ����� � �������� ��� � ���!!!");
				}

				break;
			}
			
			case 5:
			{
				printf("\n���(��������): ");

				if (fRTX == 1)
				{
					printf("\nRTX3060 10G:");
					case4_printf(sale1, countRTX, P_RTX3060s);
				}
				else
				{
					P_RTX3060s = 0;
				}

				if (fRad == 1)
				{
					printf("\nRadRX6600 8G:");
					case4_printf(sale2, countRad, P_RadRX6600s);
				}

				else
				{
					P_RadRX6600s = 0;
				}

				if (fGig == 1)
				{
					printf("\nGigabyte:");
					case4_printf(sale3, countGig, P_Gigabytes);
				}
				else
				{
					P_Gigabytes = 0;
				}

				if (fASUS == 1)
				{
					printf("\nASUSROG:");
					case4_printf(sale4, countASUS, P_ASUSROGs);
				}
				else
				{
					P_ASUSROGs = 0;
				}

				SUMM = P_RTX3060s + P_RadRX6600s + P_Gigabytes + P_ASUSROGs;
				printf("\n\n�������� ����: %.1f ������", SUMM);

				break;
			}
			default:
			{
				printf("������� ������������ �����!!!(����� ������ ����� �� 1 �� 5)");
			}
			
		  break;
		}
	} while (option != 5);

	_getch();
	return 0;
}