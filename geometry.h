#include <stdio.h>
#include <stdlib.h>
#define phi 3.14159265359


void kubus(int n, float luasgeo[], int m, float volumegeo[]);
void balok(int n, float luasgeo[], int m, float volumegeo[]);
void prisma_segitiga(int n, float luasgeo[], int m, float volumegeo[]);
void tabung(int n, float luasgeo[], int m, float volumegeo[]);
void kerucut(int n, float luasgeo[], int m, float volumegeo[]);
void bola(int n, float luasgeo[], int m, float volumegeo[]);
void limas(int m, float volumegeo[]);

void geometry(int n, float luasgeo[], int m, float volumegeo[]){
	int i;
	char menus[7][20]={"1. kubus\n","2. balok\n","3. prisma segitiga\n","4. tabung\n","5. kerucut\n","6. bola\n","7. limas\n"};
	printf("\n");
	printf("\n");
	
	int pilih;
	
	printf("Geometry Figure\n");
	for(i=0; i<7; i++){
		printf("%s", menus[i]);
	}
	printf("Pilihlah jenis bangun ruang : ");
	scanf("%d", &pilih);
	system("cls");
	printf("\n");	

	switch(pilih){
		case 1:
			kubus(n, &luasgeo[0], m, &volumegeo[0]);
			break;
		case 2:
			balok(n, &luasgeo[0], m, &volumegeo[0]);
			break;
		case 3:
			prisma_segitiga(n, &luasgeo[0], m, &volumegeo[0]);
			break;
		case 4:
			tabung(n, &luasgeo[0], m, &volumegeo[0]);
			break;
		case 5:
			kerucut(n, &luasgeo[0], m, &volumegeo[0]);
			break;
		case 6:
			bola(n, &luasgeo[0], m, &volumegeo[0]);
			break;
		case 7:
			limas(m, &volumegeo[0]);
			break;
		default:
			printf("\nMasukkan pilihan yang benar!\n");
			geometry(n, &luasgeo[0], m, &volumegeo[0]);
	}
}


void kubus(int n, float luasgeo[], int m, float volumegeo[]){
	float r;
	
	printf("### Menghitung Luas dan Volume Kubus ###\n");
	printf("masukan rusuk: ");
	scanf("%f",&r);
	luasgeo[n] = 6*r*r;
	volumegeo[m] = r*r*r;

	printf("\n=============================\n");
	printf("Luasnya adalah : %.2f m^2", luasgeo[n]);
	printf("\nvolume adalah : %.2f m^3", volumegeo[m]);
	printf("\n=============================\n\n");
}

void balok(int n, float luasgeo[], int m, float volumegeo[]){
	float p, l,t;
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas dan Volume Balok ###\n");	
	printf("Masukkan panjang : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));
	
	printf("Masukkan lebar : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	struct node *current2 = malloc(sizeof(struct node));
	
	printf("Masukkan tinggi : ");
	scanf("%f", current2->data);
	current2->link=NULL;
	current->link=current2;
	
	p=head->data;
	l=current->data;
	t=current2->data;
	
	luasgeo[n] = 2*((p*l)+(p*t)+(l*t));
	volumegeo[m] = p*l*t;
	printf("\n\n=============================\n");
	printf("Luasnya adalah : %.2f m^2", luasgeo[n]);
	printf("\nvolume adalah : %.2f m^3", volumegeo[m]);
	printf("\n=============================\n\n");
}

void prisma_segitiga(int n, float luasgeo[], int m, float volumegeo[]){
	float la,ka,t;  //la=luas alas ;ka=keliling alas

	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas dan Volume Prisma Segitiga ###\n");	
	printf("Masukkan alas : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));
	
	printf("Masukkan keliling alas (segitiga) : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	struct node *current2 = malloc(sizeof(struct node));
	
	printf("Masukkan tinggi : ");
	scanf("%f", current2->data);
	current2->link=NULL;
	current->link=current2;
	
	la=head->data;
	ka=current->data;
	t=current2->data;

	luasgeo[n] = (2*la)+(ka*t);
	volumegeo[m] = la*t;
	printf("\n\n=============================\n");
	printf("Luasnya adalah : %.2f m^2", luasgeo[n]);
	printf("\nvolume adalah : %.2f m^3", volumegeo[m]);
	printf("\n==============================\n\n");
	

}

void tabung(int n, float luasgeo[], int m, float volumegeo[]){
	float r,t;
	
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas dan Volume Tabung ###\n");
	printf("Masukkan jari - jari : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));	
	
	printf("Masukkan tinggi : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	r=head->data;
	t=current->data;
	
	luasgeo[n] = 2*phi*r*(t+r);
	volumegeo[m] = phi*r*r*t;
	printf("\n\n=============================\n");
	printf("Luasnya adalah : %.2f m^2", luasgeo[n]);
	printf("\nvolume adalah : %.2f m^3", volumegeo[m]);
	printf("\n=============================\n\n");
}

void kerucut(int n, float luasgeo[], int m, float volumegeo[]){
	float r,t,s;
	
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Luas dan Volume Kerucut ###\n");	
	printf("Masukkan jari - jari : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));
	
	printf("Masukkan tinggi : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	struct node *current2 = malloc(sizeof(struct node));
	
	printf("Masukkan garis pelukis : ");
	scanf("%f", current2->data);
	current2->link=NULL;
	current->link=current2;
	
	r=head->data;
	t=current->data;
	s=current2->data;
	
	luasgeo[n] = phi*r*(s+r);
	volumegeo[m] = (phi*r*r*t)/3;
	
	printf("\n\n=============================\n");
	printf("Luasnya adalah : %.2f m^2", luasgeo[n]);
	printf("\nvolume adalah : %.2f m^3", volumegeo[m]);
	printf("\n=============================\n\n");
}

void bola(int n, float luasgeo[], int m, float volumegeo[]){
	float r;
	float cal;
	printf("### Menghitung Luas dan Volume Bola ###\n");
	printf("Masukkan jari - jari : ");
	scanf("%f", &cal);
	r=cal;
	
	luasgeo[n] = 4*phi*r*r;
	volumegeo[m] = (4*phi*r*r*r)/3;
	
	printf("\n\n=============================\n");
	printf("Luasnya adalah : %.2f m^2", luasgeo[n]);
	printf("\nvolume adalah : %.2f m^3", volumegeo[m]);
	printf("\n=============================\n\n");
}

void limas(int m, float volumegeo[]){
	float la,t;
	
	struct node *head = malloc(sizeof(struct node));
	
	printf("### Menghitung Volume Limas ###\n");
	printf("Masukkan luas alas : ");
	scanf("%f", head->data);
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));
		
	printf("Masukkan tinggi : ");
	scanf("%f", current->data);
	current->link=NULL;
	head->link=current;
	
	la=head->data;
	t=current->data;

	volumegeo[m] = (la*t)/3;
		
	printf("\n\n=============================\n");
	printf("volume adalah : %.2f m^3", volumegeo[m]);
	printf("\n=============================\n\n");
		
}





