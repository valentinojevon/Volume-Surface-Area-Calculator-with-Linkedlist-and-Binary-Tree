#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
    int val;
    char str[255];
    struct Node *left, *right;
};

struct Node *createNode(int val, char *str){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->val = val;
    strcpy(temp->str, str);
    temp->left = temp->right = NULL;
    return temp;
}

struct Node *insertNode(struct Node *root, int val, char *str){
    if(!root) return createNode(val, str);
    if(val < root->val){
        root->left = insertNode(root->left, val, str);
    }else if(val > root->val){
        root->right = insertNode(root->right, val, str);
    }
    return root;
}

struct Node *minValue(struct Node *root){
    struct Node *curr = root->right;
    while(curr && curr->left){
        curr = curr->left;
    }
    return curr;
}

struct Node *deleteNode(struct Node *root, int val){
    if(!root) return root;
    if(val < root->val){
        root->left = deleteNode(root->left, val);
    }else if(val > root->val){
        root->right = deleteNode(root->right, val);
    }else{
        if(!root->left || !root->right){
            struct Node *temp;
            if(root->left){
                temp = root->left;
            }else{
                temp = root->right; 
            }

            root->left = root->right = NULL;
            free(root);
            root = NULL;
            return temp;
        }
        struct Node *temp = minValue(root);
        root->val = temp->val;
        strcpy(root->str, temp->str);
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}

struct Node *editNode(struct Node *root, int val, char *str){
    if(!root) return root;
    if(val < root->val){
        root->left = editNode(root->left, val, str);
    }else if(val > root->val){
        root->right = editNode(root->right, val, str);
    }else{
       strcpy(root->str, str);
    }
    return root;
}

void searchNode(struct Node *root, int val){
    if(root){
        if(root->val == val){
            printf("Nama: %s\n", root->str);
            return;
        }
        if(val < root->val){
            return searchNode(root->left, val);
        }
        return searchNode(root->right, val);
    }
    printf("Tidak ditemukan\n");
}

void inOrder(struct Node *root){
    if(root){
        inOrder(root->left);
        printf("Nomor absen[%d]: ", root->val);
        printf("%s\n", root->str);
        inOrder(root->right);
    }
}


void binarytree(){
	
	struct Node *root = NULL;
	
    while(1){
    	printf("\n\nIsi Binary Tree:\n");
    	inOrder(root);
    	
    	printf("\n");
    	if(root == NULL){
    		printf("TREE KOSONG!\n");
		}
		
    	printf("1. Insert\n");
    	printf("2. Edit\n");
    	printf("3. Delete\n");
    	printf("4. Search\n");
    	printf("5. Kembali\n");
    	printf(">> ");
    	int input, val;
		char str[255];
    	scanf("%d", &input);
    	
    	switch(input){
    		case 1:
    			printf("Masukkan nomor absen [int]: ");
    			scanf("%d", &val); getchar();
    			printf("Masukkan nama [string]: ");
    			scanf("%s", str);
    			root = insertNode(root, val, str);
				break;
			case 2:
				printf("Masukkan nomor absen yang ingin diedit[int]: ");	
				scanf("%d", &val); getchar();
				printf("Masukkan nama [string]: ");
    			scanf("%s", str);
    			root = editNode(root, val, str);
    			break;
    		case 3:
    			printf("Masukkan nomor absen yang ingin dihapus[int]: ");
    			scanf("%d", &val); getchar();
    			root = deleteNode(root, val);
    			break;
    		case 4:
    			printf("Masukkan nomor absen nama yang ingin dicari[int]: ");
    			scanf("%d", &val); getchar();
    			searchNode(root, val);
    			break;
    		case 5:
    			return;
			default:
			   continue;
		}
	}

}
