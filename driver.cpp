#include <iostream>
#include <cstdlib>
#include "BST.H"


using namespace std;

int main(int argc, char** argv)
{
	btree bsearch;
//Test 1.
	cout << "\n-------------------------------Test 1-------------------------------------";
	bsearch.addNode(8);
	bsearch.addNode(3);
	bsearch.addNode(10);
	bsearch.addNode(1);
	bsearch.addNode(6);
	bsearch.addNode(14);
	bsearch.addNode(4);
	bsearch.addNode(7);
	bsearch.addNode(13);

//Find Kth smallest key
	int kth;
	cout << "\nEnter K to Find K'th smallest Number : ";
	cin >> kth;
	bsearch.printList(kth);

//Find keys between given range
	int a, b;
	cout << "\nEnter two keys as Rage.\n";
	cout << "Enter First Key : ";
	cin >> a;
	cout << "Enter Second Key : ";
	cin >> b;

//If First key is larger than second one swap to put them in proper order
	if (a>b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	bsearch.printCall(a, b);

	bsearch.~btree();


//Test 2.
	cout << "\n-------------------------------Test 2-------------------------------------";
	bsearch.addNode(8);
	bsearch.addNode(3);
	bsearch.addNode(10);
	bsearch.addNode(1);
	bsearch.addNode(6);
	bsearch.addNode(14);
	bsearch.addNode(4);
	bsearch.addNode(7);
	bsearch.addNode(13);

//Find Kth smallest key
	cout << "\nWhen k = 4 \n";
	bsearch.printList(4);
//Find keys between given range
	cout << "\nEnter two keys as Rage.\n";
	cout << "Enter First Key : 4\n"<< "Enter Second Key : 13";
	bsearch.printCall(4, 13);
	bsearch.~btree();


//Test 3.
//Create a Binary Search Tree
	cout << "\n-------------------------------Test 3-------------------------------------";
	bsearch.addNode(8);
	bsearch.addNode(3);
	bsearch.addNode(10);
	bsearch.addNode(1);
	bsearch.addNode(6);
	bsearch.addNode(14);
	bsearch.addNode(4);
	bsearch.addNode(7);
	bsearch.addNode(13);
//Find Kth smallest key
	cout << "\nWhen k = 9 \n";
	bsearch.printList(9);
	cout << "\nEnter two keys as Rage.\n";
	cout << "Enter First Key : 8\n";
	cout << "Enter Second Key : 10";
	bsearch.printCall(8, 10);
	bsearch.~btree();

//Test 3.
//Create a Binary Search Tree
	cout << "\n-------------------------------Test 4-------------------------------------";
	bsearch.addNode(18);
	bsearch.addNode(30);
	bsearch.addNode(100);
	bsearch.addNode(15);
	bsearch.addNode(62);
	bsearch.addNode(14);
	bsearch.addNode(25);
	bsearch.addNode(21);
	bsearch.addNode(19);

	//Find Kth smallest key
	cout << "\nWhen k = 9 \n";
	bsearch.printList(9);
	cout << "\nEnter two keys as Rage.\n";
	cout << "Enter First Key : 8\n";
	cout << "Enter Second Key : 10";
	bsearch.printCall(8, 10);
	bsearch.~btree();

	cout << "\n-------------------------------Test 4-------------------------------------";
//In this code accepts runtime user input to create BST and run functions 
	int number;
	do{
		cout << "\nPress 1 to insert a key into the tree.\nPress 2 to return the kth smallest key in the tree.\nPress 3 enter Range of key.\nPress 4 to EXIT\n";
		cout << "\nEnter your Choice : ";
		cin >> number;
		int input;
		switch (number)
		{
		case 1:	cout << "Enter Key :";
			cin >> input;
			bsearch.addNode(input); break;
		case 2:	cout << "\nEnter K to Find K'th smallest Number : ";
				cin >> kth;
				bsearch.printList(kth); 
				break;
		case 3: cout << "\nEnter two keys as Rage.\n";
				cout << "Enter First Key : ";
				cin >> a;
				cout << "Enter Second Key : ";
				cin >> b;

				//If First key is larger than second one swap to put them in proper order
				if (a>b)
				{
					int temp = a;
					a = b;
					b = temp;
				}
				//Find keys between given range
				bsearch.printCall(a, b);
		case 4: break;
		}
	} while (number < 4);
}
