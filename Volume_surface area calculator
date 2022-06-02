#include <stdio.h>
#include <stdlib.h>
#include "plane.h"
#include "geometry.h"
#include "searching.h"
#include "sorting.h"
#include "binarytree.h"



int main(){
	
	int menu,n=0,m=0,k=0,i,j;
	int flag =1;
	float luasgeo[50]={0}, volumegeo[50]={0}, luasplane[50]={0};
	
	//judul
	printf("==============MELUAS==============\n\n");
	
	//menu
	do{		
		//volume untuk menggunakan fungsi kalkulator volume
		//surface untuk menggunakan fungsi kalkulator luas permukaan
		//plane untuk menggunakan fungsi kalkulator bangun datar
		//Searching untuk mencari riwayat perhitungan sebelumnya
		//keluar buat fungsi sentinel
		
		printf("\nSelamat Datang !\n");
		printf("1. Volume & Surface Area Calculator\n");
		printf("2. Plane Area Calculator\n");
		printf("3. Searching...\n");
		printf("4. Binary Tree\n");
		printf("5. Exit\n");
	
		printf("Pilihlah salah satu angka : ");
		scanf("%d", &menu);
		
		system("cls");

		//pilihan fungsi dengan switch case
		switch(menu){
			case 1:
				geometry(n, &luasgeo[0], m, &volumegeo[0]);
				n++; m++;
				break;
			case 2:
				plane(k, &luasplane[0]);
				k++;
				break;
			case 3:
				sorting(m, n, k, &volumegeo[0], &luasgeo[0], &luasplane[0]);
				searchopt(&luasgeo[0], &volumegeo[0], &luasplane[0], m, n, k);
				break;
			case 4:
				binarytree();
				break;
			case 5:
				exit(0);
		}
		printf ( "\nLanjut ? (y/n) \n1=ya\n2=tidak\nJawab: ");
	    scanf ("%d",&flag);
	    system("cls");
		
	}while(flag == 1);
	sorting(m, n, k, &volumegeo[0], &luasgeo[0], &luasplane[0]);
	printf("\nTerima Kasih Telah Menggunakan Program Kami!\n");
	return 0;
}


