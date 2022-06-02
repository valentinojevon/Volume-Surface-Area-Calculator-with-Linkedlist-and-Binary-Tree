#include <stdio.h>
#include <stdlib.h>

void searchGeoLuas(float arr[], int n);
void searchGeoVol(float arr[], int m);
void searchPlane(float arr[], int n);

void searchopt(float luasgeo[], float volumegeo[], float luasplane[], int m, int n, int k){
	int pil, pilih;
	
	printf("\nPilihan:\n");
	printf("1. Geometry\n");
	printf("2. Plane\n");
	printf("Pilihlah salah satu angka : ");
	scanf("%d", &pil);
	system("cls");
	switch(pil){
		case 1:
			printf("\nPilihan:\n");
			printf("1. Luas\n");
			printf("2. Volume\n");
			printf("Pilihlah salah satu angka : ");
			scanf("%d", &pilih);
			system("cls");
			if(pilih==1){
				searchGeoLuas(&luasgeo[0], n);
			}else if(pilih==2){
				searchGeoVol(&volumegeo[0], m);
			}
			break;
		case 2:
			searchPlane(&luasplane[0], k);
			break;
	}
}

void searchGeoLuas(float arr[], int n){
	float key;
	int i;
	printf("\nMasukkan luas geometry: ");
	scanf("%f", &key);
	
    for(i=0; i<n; i++){
        if(arr[i] == key){
            break;
        }
    }
    if(i==n){
        		printf("Luas tidak ditemukan\n");
			}
	else{
	
    printf("\n===================================\n");
    printf("Luas %.2f berada di urutan ke-%d\n", key, i+1);
	}
}

void searchGeoVol(float arr[], int m){
	float key;
	int i;
	printf("Masukkan volume geometry: ");
	scanf("%f", &key);
	
    for(i=0; i<m; i++){
        if(arr[i] == key){
            break;
        }
    }
    if(i==m){
        		printf("Volume tidak ditemukan\n");
			}
			else{
    printf("\n===================================\n");
	printf("Volume %.2f berada di urutan ke-%d\n", key, i+1);
}
}

void searchPlane(float arr[], int n){
	float key;
    int i;
	printf("Masukkan luas plane: ");
	scanf("%f", &key);
	
    for(i=0; i<n; i++){
        if(arr[i] == key){
        	break;
        }
    }
    if(i==n){
        		printf("Luas tidak ditemukan\n");
			}
	else{
    printf("\n===================================\n");
    printf("Volume %.2f berada di urutan ke-%d\n", key, i+1);
}
}
