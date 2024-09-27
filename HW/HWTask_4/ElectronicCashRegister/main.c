#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include<locale.h>




int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));

	int option, skan = 0, shk, count, type, f = 0, RTX, Rad, Gig, ASUS, RTX3060[] = { 1, 5, 6, 7 }, RadRX6600[] = { 2, 5, 7, 4 }, Gigabyte[] = { 5, 9, 7, 8 }, ASUSROG[] = { 6, 9, 1, 4 };
	float P_RTX3060, P_RadRX6600, P_Gigabyte, P_ASUSROG, sale1, sale2, sale3, sale4, itog;
	
	RTX = (RTX3060[0] * 1000) + (RTX3060[1] * 100) + (RTX3060[2] * 10) + (RTX3060[3] * 1);
	Rad = (RadRX6600[0] * 1000) + (RadRX6600[1] * 100) + (RadRX6600[2] * 10) + (RTX3060[3] * 1);
	Gig = (Gigabyte[0] * 1000) + (Gigabyte[1] * 100) + (Gigabyte[2] * 10) + (Gigabyte[3] * 1);
	ASUS = (ASUSROG[0] * 1000) + (ASUSROG[1] * 100) + (ASUSROG[2] * 10) + (ASUSROG[3] * 1);
	
	sale1 = rand() % 50;
	sale2 = rand() % 50;
    sale3 = rand() % 50;
	sale4 = rand() % 50;



	P_RTX3060 = 60000;
	P_RadRX6600 = 50000;
	P_Gigabyte = 20000;
	P_ASUSROG = 25000;
	

	printf("��� ���� ��� �� ����������� ����� - ������� '1'\n");
	printf("������� �������� ���������������� ������ - '2'\n");
	printf("�������� ������ � ������ � ��� - '3'\n");
	printf("������������ ��� �� ������� - ������� '4'\n");
	printf("���������� �������� ����� � ������ - ������� '5'\n");
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
				printf("������ ���� ���� ����� 1 - ���������� 2 - ������������ �����:\n");
				printf("������� ��� ��������: ");
				scanf_s("%d", &type);
				if (type == 1 || type == 2)
				{
					if (type == 1) 
					{
						printf("������� �����-��� ��������: ");
						scanf_s("%d", &shk);
						if (shk == RTX)
						{
							skan = skan + shk;
							printf("RTX3060\n ");
						}
						else
						{
							skan = skan + 2574;
							printf("RadRX6600\n");
						}
					}
					else
					{
						printf("������� �����-��� ��������: ");
						scanf_s("%d", &shk);
						if(shk == Gig)
						{
							skan = skan + shk;
							printf("Gigabyte\n");
						}
						else
						{
							skan = skan + 6914;
							printf("ASUSROG\n");
						}
					}
				}
				else
				{
					printf("������� ������������ ������!(����� ������ 1 ��� 2");
					f = 1;
				}
			} while (f == 1);
			break;
				
			}
			case 2:
			{
				if (skan == 1567)
				{
					printf("\n���������� RTX3060 10G 1��.                  %.1f ���.", P_RTX3060);
					printf("\n���������� ������           %0.1f %%", sale1);
				}
				else
				{
					if (skan == 2574)
					{
						printf("\n���������� RadRX6600 8G 1��.                    %.1f ���.", P_RadRX6600);
						printf("\n���������� ������           %0.1f %%", sale2);
					}
					else
					{
						if (skan == 5978)
						{
							printf("\n����������� ����� Gigabyte 1��.                %.1f ���.", P_Gigabyte);
							printf("\n���������� ������           %0.1f %%", sale3);
						}
						else
						{
							if (skan == 6914)
							{
								printf("\n����������� �����  ASUSROG  1��.                %.1f ���.", P_ASUSROG);
								printf("\n���������� ������           %0.1f %%", sale4);
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
				if (skan == 1567)
				{
					printf("������� ���������� ���������������� ������, ������� ����� �������� � ���:");
					scanf_s("%d", &count);
					f = 1;
					printf("\n����� �������� � ���");
				}
				else
				{
					if (skan == 2574)
					{
						printf("������� ���������� ���������������� ������, ������� ����� �������� � ���:");
						scanf_s("%d", &count);
						f = 2;
						printf("\n����� �������� � ���");
					}
					else
					{
						if (skan == 5978)
						{
							printf("������� ���������� ���������������� ������, ������� ����� �������� � ���:");
							scanf_s("%d", &count);
							f = 3;
							printf("\n����� �������� � ���");
						}
						else
						{
							if (skan == 6914)
							{
								printf("������� ���������� ���������������� ������, ������� ����� �������� � ���:");
								scanf_s("%d", &count);
								f = 4;
								printf("\n����� �������� � ���");
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
				if (f == 1)
				{
					P_RTX3060 = P_RTX3060 * count;
					printf("\nRTX3060 10G:");
					printf("\n\t���������� ������                         %0.1f %%", sale1);
					printf("\n\t����������                                %d ��.", count);
					printf("\n\t��������� � ������ �������                %0.1f ���.", P_RTX3060);
				}
				else
				{
					if (f == 2)
					{
						P_RadRX6600 = P_RadRX6600 * count;
						printf("\nRadRX6600 8G:");
						printf("\n\t���������� ������                         %0.1f %%", sale2);
						printf("\n\t����������                                %d ��.", count);
						printf("\n\t��������� � ������ �������                %0.1f ���.", P_RadRX6600);
					}
					else
					{
						if (f == 3)
						{
							P_Gigabyte = P_Gigabyte * count;
							printf("\nGigabyte:");
							printf("\n\t���������� ������                         %0.1f %%", sale3);
							printf("\n\t����������                                %d ��.", count);
							printf("\n\t��������� � ������ �������                %0.1f ���.", P_Gigabyte);
						}
						else
						{
							if (f == 4)
							{
								P_ASUSROG = P_ASUSROG * count;
								printf("\nASUSROG:");
								printf("\n\t���������� ������                         %0.1f %%", sale4);
								printf("\n\t����������                                %d ��.", count);
								printf("\n\t��������� � ������ �������                %0.1f ���.", P_ASUSROG);
							}
							else
							{
								printf("��� ������ ������������ �����!");
							}
						}
					}
				}
			}
			case 5:
			{
				printf("\n\t\t���(��������)");

				if (f == 1)
				{
					printf("\nRTX3060 10G:");
					printf("\n\t���������� ������                         %0.1f %%", sale1);
					printf("\n\t����������                                %d ��.", count);
					printf("\n\t��������� � ������ �������                %0.1f ���.", P_RTX3060);
				}
				else
				{
					P_RTX3060 = 0;
				}

				if (f == 2)
				{
					printf("\nRadRX6600 8G:");
					printf("\n\t���������� ������                         %0.1f %%", sale2);
					printf("\n\t����������                                %d ��.", count);
					printf("\n\t��������� � ������ �������                %0.1f ���.", P_RadRX6600);
				}
				else
				{
					P_RadRX6600 = 0;
				}

				if (f == 3)
				{
					printf("\nGigabyte:");
					printf("\n\t���������� ������                         %0.1f %%", sale3);
					printf("\n\t����������                                %d ��.", count);
					printf("\n\t��������� � ������ �������                %0.1f ���.", P_Gigabyte);
				}
				else
				{
					P_Gigabyte = 0;
				}

				if (f == 4)
				{
					printf("\nASUSROG:");
					printf("\n\t���������� ������                         %0.1f %%", sale4);
					printf("\n\t����������                                %d ��.", count);
					printf("\n\t��������� � ������ �������                %0.1f ���.", P_ASUSROG);
				}
				else
				{
					P_ASUSROG = 0;
				}

				itog = P_RTX3060 + P_RadRX6600 + P_Gigabyte + P_ASUSROG;
				printf("\n\n\n�����: %.1f ������", itog);

				break;
			}
			


			default:
			{
				printf("����� ������ ����� �� 1 �� 5!");
			}
				break;
		}
	} while (option != 5);

	_getch();
	return 0;
}