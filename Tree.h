#ifndef Tree_H
#define Tree_H



class Tree {
	

private:

	 struct Node {
		int data{ 0 };
		Node* right{ nullptr };
		Node* left{ nullptr };
	};

	Node* root{ nullptr };
	void BFS_Add(Node*& x, Node*&y);
	void  BFS_Print(Node*& x);
	void  DFS_Inorder_Print(Node*& x);
	void  DFS_Preorder_Print(Node*& x);
	void DFS_Postorder_Print(Node*& x);
	
public:
	
	Tree();
	~Tree();
	void Add_Data(int newdata);
	void print_tree();
	void print_tree_inorder();
	void print_tree_preorder();
	void print_tree_postorder();
	

	



};

#endif
