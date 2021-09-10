#pragma once
#include <iostream>
using namespace std;

template <class T> 
class Node
{
	public:
	T data;
	Node<T>* next;
};

template <class T>
class List {
	private:
	Node<T> *head;
	public:
	List() : head(NULL)  {}
	~List(){}
	List(T* arr, int n_nodes){
		head=new Node<T>;
		head->data=arr[0];
		Node<T>* n=head;
		for(int i=1; i<n_nodes; i++)
		{
			Node<T>* k=new Node<T>;
			k->data=arr[i];
			k->next=NULL;
			n->next=k;
			n=n->next;
		}
		
	}
	void insert_at(int idx,const T& data){
		Node<T>* n=head;
		Node<T>* nn=new Node<T>;
		nn->data=data;
		nn->next=NULL;
		if(idx==0)
		{
			nn->next=head;
		}
		else{
		for (int i=0; i<idx-1; i++){ n=n->next; }
		nn->next=n->next;
		n->next=nn;} 
	}
	void remove_at(int idx){
		Node<T>* temp=head;
		Node<T>* temp2=temp;
		for (int i=0; i<idx-1; i++)
		{
			temp=temp->next;
			temp2=temp2->next;
		}
		temp2=temp2->next;
		temp->next=temp2->next;
		temp2->next=NULL;
		delete temp2;
	}
	void pop_back(){ 
		Node<T>* n=head;
		Node<T>* pre;
		int a=0;
		while(1){
			if(a==1){ pre=head; }
			if(n->next==NULL)
			{      
			        pre->next=NULL;	
				delete n; 
				break;
			}
			n=n->next;
			pre=pre->next;
			a++;
		}
	}
	void push_back(const T& val){
		Node<T>* n=head;
		while(1){
			if(n->next==NULL)
			{
				n->next=new Node<T>;
				n=n->next;
				n->data=val;
				n->next=NULL;
				break;
			}
			n=n->next;
		}}
	void pop_front(){
		Node<T>* k=head;
		head=head->next;
		delete k;
	}
	void push_front(const T& val){
		Node<T>* n=new Node<T>;
	        n->data=val;
	        n->next=head;
		head=n;
	}
	friend ostream& operator<<(ostream& out, List& rhs){
		Node<T>* n=rhs.head;
		while(n!=NULL){
			out<<n->data<<" ";
			n=n->next;
		}
		return out;
	}




};







