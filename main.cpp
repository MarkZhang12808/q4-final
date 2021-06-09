#include "bst.h"

int main()
{
    bst object;
    object.build(); 	//builds a BST
    object.display();	//displays a BST

    /*  PLACE YOUR FUNCTION CALL HERE */
    node* a = NULL;
    node* b;
    object.removeLargest(NULL, b);


    object.display();	//displays again after!
   
    return 0;
}
