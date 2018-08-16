#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

#define N 1000

void NhapDTK(float DTK[], int n);
int Xeploai(float DTK[], int n);

int main()

{	
	float DTK[N];
	int n;
	printf("Nhap vao so hoc sinh: ");
		scanf("%d", &n);

	NhapDTK(DTK,n);
	Xeploai(DTK,n);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}

void NhapDTK(float DTK[], int n)
	{
		int i;
		printf("Nhap vao DTK cua cac HS: \n");
		for(i=0; i<n; i++)
			{	
				printf("HOCSINH[%d]= ",i+1);
				scanf("%f",&DTK[i]);
			}
	}
	
Xeploai(float DTK[],int n)
	{
		system("cls");	
		printf("DTK va XEP LOAI cua cac HS THCS Nang Khieu:\n");	
		int i;
		for(i=0; i<n; i++)
			{
				if(DTK[i]>=8.0)
					printf("HOCSINH[%d] \tDTK= %2.2f \tXLoai= GIOI \n", i+1, DTK[i]);
				else
					if(DTK[i]>=7.0 && DTK[i]<8.0)
						printf("HOCSINH[%d] \tDTK= %2.2f \tXLoai= KHA \n", i+1, DTK[i]);
					else
						if(DTK[i]>=5.0 && DTK[i]<7.0)
							printf("HOCSINH[%d] \tDTK= %2.2f \tXLoai= TRUNGBINH \n", i+1, DTK[i]);
						else 
							printf("HOCSINH[%d] \tDTK= %2.2f \tXLoai= YEU \n", i+1, DTK[i]);

			}
	}
