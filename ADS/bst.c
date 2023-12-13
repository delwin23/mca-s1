#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int key; //key value is the item we can search in this also
    struct node *left,*right;
};
 
struct node* newNode(int item)
{
    struct node* temp
        = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

/* if the item we search is less than root we r searching,so if item=20,and root is 45,  
(item)<root->data,
root=root->left  */


// a new node with given key in BST

struct node* insert(struct node* node, int key)
{
    // If the tree is empty, return a new node
    
    if (node == NULL)
        return newNode(key);
 
   
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    return node;
}

/*void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
 
// A utility function to insert// Print inorder traversal of the BST
    inorder(root);
// a new node with given key in BST
*/



struct node* search(struct node* root, int key)
{
   
    if (root == NULL || root->key == key)
        return root;
 
    
    if (root->key < key)
        return search(root->right, key);
 
   
    return search(root->left, key);
}
 


int main()
{
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    //  this is the Key to be found whwn we search for it
    int key = 10;// here we can see that there is no 10 in the following examples we r giving..so it will be printing like not found...
 
    // Searching in a BST
    if (search(root, key) == NULL)
        printf("%d not found\n", key);
    else
        printf("%d found\n", key);
 
    key = 60;
 
     // Searching in a BST
    if (search(root, key) == NULL)
        printf("%d not found\n", key);
    else
        printf("%d found\n", key);
 
    key = 60;
 
    // Searching in a BST
    if (search(root, key) == NULL)
        printf("%d not found\n", key);
    else
        printf("%d found\n", key);
    return 0;
}








}





