#include <iostream>
#include "BST.H"
using namespace std;

btree::btree()
{
	head = NULL;
	counter = 0;
	rangeCount = 0;
}
btree::~btree()
{
	BSTpostorderDel(head);
	head = NULL;
	counter = rangeCount = 0;
}


void btree::BSTpostorderDel(node* ptr)
{
	if (ptr != NULL) {
		BSTpostorderDel(ptr->left);
		BSTpostorderDel(ptr->right);
		delete ptr;
	}
}

//This is a Helper function to add a new node at proper position
void btree::addNode(int addData)
{
	addNodeinPlace(head, addData);
}

//This function collects input from addNode funnction  
void btree::addNodeinPlace(node* ptr, int addData)
{
	///Creates new node with insertedd input values
	node* n = new node;
	n->left = NULL;
	n->right = NULL;
	//	cin >> addData;
	n->data = addData;
	//This chunk of code recursively calls itself till the proper position where data is to be inserrted is found 
	//Once the position is found new node 'n' is inserted in that position
	if (head != NULL)
	{
		if (addData < ptr->data)
		{
			//keep moving down on left branch till we find find a empty branch
			if (ptr->left != NULL)
			{
				addNodeinPlace(ptr->left, addData);
			}
			else
			{
				ptr->left = n;
			}
		}
		if (addData > ptr->data)
		{
			if (ptr->right != NULL)
			{
				//keep moving down on right branch till we find find a empty branch
				addNodeinPlace(ptr->right, addData);
			}
			else
			{
				ptr->right = n;
			}
		}
	}
	else
	{
		//If tree is empty Inset node at head
		head = n;
	}
}


//Helper function to find kth smallest key
void btree::printList(int k)
{
	if (head != NULL)
	{
		printListSmallest(head, k);
		counter = 0;
	}
	else
	{
		cout << "The Tree is Empty.\n";
	}
}


int btree::printListSmallest(node* ptr, int k)
{
	//	curr = head;
	//Inorder traverse through tree 
	if (ptr->left != NULL)
	{
		printListSmallest(ptr->left, k);
	}
	counter++;
	//Print kth smallest element (when counter == K)
	if (counter == k)
	{
		cout << "K'th smallest element is : " << ptr->data << endl;
		return ptr->data;
	}

	if (ptr->right != NULL)
	{
		printListSmallest(ptr->right, k);
	}
}

//Helper Function to print values between and including given two keys
void btree::printCall(int a, int b)
{
	if (head != NULL)
	{
		cout << "\nAll the keys Present in order, between (and including) two given keys are : \n";
		cout << "\nNumber of Nodes Visited : " << printinOrderBetween(head, a, b) << endl;
		rangeCount = 0;
	}
	else
	{
		cout << "The Tree is Empty.\n";
	}
}

//recursively Inorder travers through the tree fo print expected keyz 
int btree::printinOrderBetween(node* ptr, int a, int b)
{
	if (head != NULL)
	{
		//	cout <<":"<< ptr->data << "-";
		//Counter to determine Number of Nodes visited
		rangeCount++;
		//	travers on left branch till left is empty or current node value is less than the range
		if (ptr->left != NULL && ptr->data > a)
		{
			printinOrderBetween(ptr->left, a, b);
		}
		//	If the current node value is in the range then print  	
		if (ptr->data >= a && ptr->data <= b)
		{
			cout << ptr->data << " ";
		}
		//	travers on right branch till right is empty or current node value is greater than the range
		if (ptr->right != NULL && ptr->data < b)
		{
			printinOrderBetween(ptr->right, a, b);
		}
		return rangeCount;
	}
	else
	{
		cout << "Tree is Empty.\n";
		return 0;
	}
}

