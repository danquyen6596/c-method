#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

#define N 1000

int tiendien(int a[], int b[], int n);
void intiendien(int a[], int b[], int n);

int main()

{	
	int a[N],b[N], i, n;
	
	printf("Nhap vao so ho GD: ");
	scanf("%d", &n);
	printf("Nhap vao chi so dien cua cac ho GD xa Duc Thuong: \n");
	
	for(i=0; i<n; i++)
		{	
			printf("CS dien GD so[%d]= ",i+1);
			scanf("%d",&a[i]);
		}

	tiendien(a,b,n);
	intiendien(a,b,n);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}

int tiendien(int a[],int b[], int n)
	{	
		int i;
		for(i=0; i<n; i++)
			{
				if(a[i]>=1 && a[i]<=99)
					b[i]=a[i]*1000;
				else
					if(a[i]>=100 && a[i]<=199)
						b[i]=99000 + (a[i]-99)*1400;
					else
						if(a[i]>=200)
							b[i]=239000 + (a[i]-199)*2000;
						else
							b[i]=0;
			}

		return b[i];
	}
	
void intiendien(int a[],int b[], int n)
	{
		int i;
		system("cls");
		printf("Chi so dien va tien tien cua tung ho GD xa Duc Thuong la:\n");
		
		for(i=0; i<n; i++)
			printf("CS dien GD so[%d] = %d \tSo tien= %dd \n",i+1, a[i], b[i]);
	}	
		
		
