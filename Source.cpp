#include<iostream>
using namespace std;
#include"Tree.h"

int main() {

	Tree a;
	a.Add_Data(3);
	a.Add_Data(4);
	a.Add_Data(5);
	a.Add_Data(6);

	cout << "Printing tree with level order traversal " << endl;
	a.print_tree();
	cout << endl;
	cout << "Printing tree with  Inorder traversal " << endl;
	a.print_tree_inorder();
	cout << endl;
	cout << "Printing tree with  Postorder traversal " << endl;
	
	a.print_tree_postorder();
	cout << endl;
	cout << "Printing tree with  Preorder traversal " << endl;
	a.print_tree_preorder();


	return 0;

}