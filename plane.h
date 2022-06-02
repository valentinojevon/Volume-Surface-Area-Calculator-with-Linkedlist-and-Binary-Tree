#include <stdio.h>
#include <stdlib.h>
#define phi 3.14159265359

struct node{
	float data;
	struct node *link;
};

void per(int k, float luasplane[]);
void seg(int k, float luasplane[]);
void tra(int k, float luasplane[]);
void ja(int k, float luasplane[]);
void lay(int k, float luasplane[]);
void li(int k, float luasplane[]);

void plane(int k, float luasplane[]){
	int i;
	char menus[6][40]={"1. Persegi & persegi panjang\n","2. Segitiga\n","3. Trapesium\n","4. Jajargenjang\n","5. Layang - layang & belah ketupat\n","6. Lingkaran\n"};
	printf("\n");
	printf("\n");
	
	int pilih;
	
	printf("Plane Figure\n");
	for(i=0; i<6; i++){
		printf("%s", menus[i]);
	}
	printf("Pilihlah jenis bangun datar : ");
	scanf("%d", &pilih);
	system("cls");
	printf("\n");
	
	switch(pilih){
		case 1:
			per(k, &luasplane[0]);
			break;
		case 2:
			seg(k, &luasplane[0]);
			break;
		case 3:
			tra(k, &luasplane[0]);
			break;
		case 4:
			ja(k, &luasplane[0]);
			break;
		case 5:
			lay(k, &luasplane[0]);
			break;
		case 6:
			li(k, &luasplane[0]);
			break;
		default:
			printf("\nMasukkan pilihan yang benar!\n");
			plane(k, &luasplane[0]);
			
	}
}

void per(int k, float luasplane[]){
	
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas Persegi ###\n");
	printf("Masukkan panjang : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));	
	printf("Masukkan lebar : ");
	scanf("%f", &current->data);
	current->link=NULL;
	head->link=current;
	
	luasplane[k] = head->data*current->data;
	printf("\n=============================\n");
	printf("Luasnya adalah : %.2f", luasplane[k]);
	printf("\n=============================\n\n");
}

void seg(int k, float luasplane[]){
	
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas Segitiga ###\n");
	printf("Masukkan alas : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));	
	
	printf("Masukkan tinggi : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	luasplane[k] = (head->data*current->data)/2;
	printf("\n=============================\n");
	printf("Luasnya adalah : %.2f", luasplane[k]);
	printf("\n=============================\n\n");
}

void tra(int k, float luasplane[]){
	
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas Trapesium ###\n");	
	printf("Masukkan alas : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));
	
	printf("Masukkan sisi sejajar : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	struct node *current2 = malloc(sizeof(struct node));
	
	printf("Masukkan tinggi : ");
	scanf("%f", current2->data);
	current2->link=NULL;
	current->link=current2;
	
	luasplane[k]=((head->data+current->data)/2)*current2->data;
	printf("\n=============================\n");
	printf("Luasnya adalah : %.2f", luasplane[k]);
	printf("\n=============================\n\n");

}

void ja(int k, float luasplane[]){
	float cal[2];
	
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas Jajargenjang ###\n");
	printf("Masukkan alas : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));	
	
	printf("Masukkan tinggi : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	luasplane[k] = head->data*current->data;
	printf("\n=============================\n");
	printf("Luasnya adalah : %.2f", luasplane[k]);
	printf("\n=============================\n\n");
}

void lay(int k, float luasplane[]){
	float cal[2];
	
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas Layang - Layang ###\n");
	printf("Masukkan diagonal 1 : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));	
	
	printf("Masukkan diagonal 2 : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	luasplane[k] = head->data*current->data;
	printf("\n=============================\n");
	printf("Luasnya adalah : %.2f", luasplane[k]);
	printf("\n=============================\n\n");
}

void li(int k, float luasplane[]){
	float cal;
	
	printf("### Menghitung Luas Lingkaran ###\n");	
	printf("Masukkan jari - jari : ");
	scanf("%f", &cal);
	luasplane[k]=cal*cal*phi;
	printf("\n=============================\n");
	printf("Luasnya adalah : %.2f", luasplane[k]);
	printf("\n=============================\n\n");
}












