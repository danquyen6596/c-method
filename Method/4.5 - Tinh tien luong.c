#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

#define N 100

int tienluong(int NCNV[], int TLNV[], int n);
void bangluong(int NCNV[], int TLNV[], int n);

int main()

{	
	int NCNV[N], TLNV[N], i, n, *p;
	
	printf("Nhap vao so NV cong ty: ");
	scanf("%d", &n);
	printf("Nhap vao So ngay cong cua cac NV: \n");
	for(i=0; i<n; i++)
		{	
			printf("So NCNV[%d]= ",i+1);
			scanf("%d",&NCNV[i]);
		}

	tienluong(NCNV,TLNV,n);	
	bangluong(NCNV,TLNV,n);
		
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}

int tienluong(int NCNV[], int TLNV[], int n)
	{
		int i;
		for(i=0; i<n; i++)
			{
				if(NCNV[i]==24)
					TLNV[i]=3000000;
				else
					if(NCNV[i] < 24)
					TLNV[i]=3000000 - (24 - NCNV[i])*150000;
					else
						if(NCNV[i] > 24)
							TLNV[i]=3000000 + (NCNV[i]-24)*100000;
			
			}	
		return TLNV[i];
	}

void bangluong(int NCNV[], int TLNV[], int n)
	{	
		int i;
		system("cls");	
		printf("So ngay cong va tien luong cua NV cong ty An Huy la:\n");
		for(i=0; i<n; i++)
				printf("So NCNV[%d]= %d \tTien luong= %d \n",i+1, NCNV[i], TLNV[i]);
	}
