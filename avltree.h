#include <iostream>
#include "LinkedList.h"
#include <string>
#include <fstream>

struct node{
	node* left;
	node* right;
	std::string data;
	int height;
	LinkedList card;
};
class avl{
	friend class Database;
	node* root;
	public:
	avl();
	~avl();
	void makeEmpty(node* t);
	node* insert(std::string x,LinkedList a, node* t);
	node* srr(node* &t);
	node* slr(node* &t);
	node* llr(node* &t);
	node* lrr(node* &t);
	node* findmin(node* t);
	node* findmax(node* t);
	node* remove(std::string x, node* t);
	node* searchh(std::string& item_name, node*t);
	node* search(std::string item_name);
	int height(node* t);
	void insert(std::string x, LinkedList a);
	void remove(std::string x);
	void print(node* t) const;
	void printt(node* t, std::ofstream& off) const;
	void show() const;

};
