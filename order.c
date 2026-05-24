// inorder , preorder , postorder 

#include<stdio.h>
#include<stdlib.h>
// programme contains binary tree and display with the help of traversal --version1 
// inorder , preorder , postorder  --version2````
typedef struct tree{    
     struct tree *left;
    int data ; 
    struct tree*right;
}tree;
 



 tree *createbranch(){
  tree *new;
  int x; 
  new =(tree*) malloc(sizeof(tree));
  printf("enter a data (or -1 for skip node):");
  scanf("%d",&x);
  if(x == -1){
    
  return 0;
  }
     new->data = x;
        new->left = createbranch();
        // printf("enter a right node data :");
        new->right= createbranch();
  
  return new;
 
}



// reverse of createbranch function 
void displ(tree *copy){

if(copy == NULL){
  return;
}

printf("data :%d \n",copy->data);

displ(copy->left);

  displ(copy->right);

}   
  


void inorder(tree *copy){   
  // inorder  -> left , root , right 
  if(copy == NULL){
  return;
  }
 
  inorder(copy->left);
   printf("%d ",copy->data);
   inorder(copy->right);
}

void preorder(tree *copy){
if(copy == NULL)
return;

// preorder -> root , left , right
printf("%d ",copy->data);
preorder(copy->left);
preorder(copy->right);


}

void postorder(tree *copy){
if (copy == NULL)
return;

postorder(copy->left);
postorder(copy->right);
printf("%d ",copy->data);


}


int main(){
     tree *root;
  root = createbranch();
 
    
   
  printf("\n===display===\n");
    displ(root);
     printf("\n===inorder===\n");
    inorder(root);
    printf("\n===preorder===\n");
    preorder(root);
    printf("\n===postorder===\n");
    postorder(root);
  

    return 0;
}   // -- cyberangels  
//ready to upload on git hub session end 