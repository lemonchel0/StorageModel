#ifndef database_included
#define database_included

#include<vector>
#include<iostream>
#include<string>
#include<map>
#include"avltree.h"
#include<sstream>
#include"LinkedList.h"

class Database{
	avl recipe;
	std::map<std::string,int> avalableitems;
public:
	Database();// default constructor
	Database(const std::string &file_items, const std::string &file_recipe);//get data from files
	void print() const;
	void Database_to_file(const std::string &file_items, const std::string &file_recipe);
	void Add_detail(const std::string &item_name, int kolv, LinkedList recip);
	void delete_detail(const std::string &item_name, int kolv=0);
	std::map<std::string, int> can_make(const std::string &item_name, int kolv);
	std::map<std::string, int> hm_make(const std::string &item_name);
	bool MakeDetail(const std::string &item_name, int kolv=1);
	//ещё какято функция
};

#endif
