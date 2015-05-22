class btree
{
private:
	struct node{
		int data;
		node* left;
		node* right;
//		node* parent;
	};
	node* head;
//	node* curr;
//	node* temp;
	int printListSmallest(node* ptr, int k);
	int printinOrderBetween(node* ptr,int a, int b);
	void addNodeinPlace(node* ptr,int addData);

	void BSTpostorderDel(node* ptr);
public:
	btree();
	~btree();
//	bool boo = 0;
	void BSTPostorder();

	void addNode(int addData);
	void printList(int k);
	void printCall(int a, int b);
	int counter,rangeCount;
};
