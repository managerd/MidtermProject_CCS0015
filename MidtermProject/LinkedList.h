#ifndef LINKEDLIST_H
#define LINKEDLIST_H



class LinkedList {
	private:
		struct Node {
			int data;
			Node* next;
		};
		Node* head;
				
	public:
	    LinkedList();
	    void insertPos(int value, int position);
	    void insertBeg(int value);
	    void insertEnd(int value);
	    void deleteVal(int position);
	    bool findVal(int value);
	    int getSize();
	    bool isEmpty();
	    void listDisplay();
};

#endif
