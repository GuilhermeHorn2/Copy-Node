#include <iostream>
#include <string.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

template <class T>class Node{

	T data;
	Node<T>* ptr_1 = NULL;
	Node<T>* ptr_2 = NULL;

public:


	Node(Node<T>* one,Node<T>* two,T data){
		/*ptr_1 = new Node<T>;
		ptr_1 = new Node<T>;*/
		ptr_1 = one;
		ptr_2 = two;
		this->data = data;
	}

	~Node(){
		delete(ptr_1);
		delete(ptr_2);
	}

	T* get_1(){
		return ptr_1;
	}

	T* get_2(){
		return ptr_2;
	}

	void set_data(T data){
		this->data = data;
	}

	void print_data(){
		cout << data << endl;
	}

	Node<T>* complete_copy(Node<T>* node){
		return node;
	}

};


int main()
{
	/*  || \ */

	Node<int> *node_1 = new Node<int>(NULL,NULL,1);
	Node<int> *node_2 = new Node<int>(NULL,NULL,2);
	Node<int> *node = new Node<int>(node_1,node_2,0);

	Node<int> *copy = node->complete_copy(node);
	cout << "node: ";
	node->print_data();
	cout << "copy: ";
	copy->print_data();

	copy->set_data(10);

	cout << "node: ";
	node->print_data();




	return 0;
}


