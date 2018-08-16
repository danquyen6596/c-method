#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h> // Thu vien lam viec voi xau
#include <malloc.h> // Thu vien cap phat bo nho
#include <ctype.h> // Xu ly xau

#define N 100

int main()

{	
	float a[N],S=0 ; 
	int i, j=0, n, temp;
	printf("Nhap vao so phan tu cua day: ");
	scanf("%d", &n);
	printf("Nhap vao cac phan tu cua day: \n");
	for(i=0; i<n; i++)
		{	
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
		}
	for(i=0; i<n; i++)
		if(fmod(a[i],2)==0||fmod(a[i],5)==0)
			{
				S+=a[i];
			j++;
			}
	
	
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


