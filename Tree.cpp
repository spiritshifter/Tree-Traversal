#include"Tree.h"
#include<iostream>
using namespace std;


Tree::Tree()
{

}

Tree::~Tree()
{

}

void Tree::  Add_Data(int newdata)
{
	
		Node* y = new Node;
		y->data = newdata;
		Node* temp = root;
		
		BFS_Add(temp,y);
		


}


  void   Tree::BFS_Add(Node*& current,Node*& newnode)  //Adding node using level order traversal 
{
	if (root == nullptr)
	{
		root = newnode;
		return;
	}
		
	if (current->left != nullptr)
	{
		if (current->right != nullptr) {
			BFS_Add(current = current->left,newnode);
		}
		else
		{
			
			current->right = newnode;
			return;
		}


	}
	else
	{
		current->left = newnode;
		return;

	}

}

	void Tree:: BFS_Print(Node*& current)        //Printing using level order 
	{
		
		if (root == nullptr)
		{
			cout << "The Tree is empty " << endl;
			return ;

		}
		else if (current == root)
		{
			cout << root->data << " ";
		}
		

		if (current->left != nullptr)
		{
			cout << current->left->data << " ";

			if (current->right != nullptr) {
				cout << current->right->data << " ";

				BFS_Print(current = current->left);
			}
			else
			{

				return ;
			}


		}
		else
		{

			return ;

		}
		
	}

void Tree::print_tree()
{

	Node* temp = root;

      BFS_Print(temp);


	

}

void Tree::  DFS_Inorder_Print(Node*& current)       //Printing with inorder raversal 
{
	if (current == nullptr)
	{
		return;
	}
	DFS_Inorder_Print(current->left);

	cout << current->data << " ";

	DFS_Inorder_Print(current->right);

}

void Tree::print_tree_inorder()               
{
	Node* temp = root;

	DFS_Inorder_Print(temp);
}

void Tree::print_tree_preorder()
{
	Node* temp = root;

	DFS_Preorder_Print(temp);

}

void Tree::DFS_Preorder_Print(Node*& current)
{
	if (current == nullptr)
	{
		return;
	}

	cout << current->data << " ";
	DFS_Preorder_Print(current->left);

	

	DFS_Preorder_Print(current->right);

}

void Tree::print_tree_postorder()
{
	Node* temp = root;

	DFS_Postorder_Print(temp);
}


void Tree::DFS_Postorder_Print(Node*& current)
{
	if (current == nullptr)
	{
		return;
	}

	
	DFS_Postorder_Print(current->left);



	DFS_Postorder_Print(current->right);

	cout << current->data << " ";

}
