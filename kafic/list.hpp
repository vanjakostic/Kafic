#ifndef LIST_DEF
#define LIST_DEF

#include <stdlib.h>
#include <iostream>

using namespace std;

template <class T>
class List{
private:
    struct listEl{
        T data;
        struct listEl* next;
    };
    listEl *head;
    listEl *tail;
    int brojclanova;

public:
    List(){head=tail=NULL; brojclanova=0; }
    List(const List<T>&);
    List<T>& operator=(const List<T>&);
    virtual ~List();

	int getVelicina(){return brojclanova; }
	bool prazno(){
        if(head==NULL)
            return true;
        else
            return false;
	}

	bool add(int, const T&);
    bool remove(int);
    bool read(int, T&)const;
    void clear();

};

template <class T>
ostream& operator<<(ostream& out, const List<T>& rl) {
	out<<endl;
	out<<"---------------------"<<endl;
	for(int i=1;i<=rl.getVelicina();i++){
		if(i!=1)
        out<<", ";

		T res;
		rl.read(i, res);
		out<<res;
	}
	out<<endl<<"-----------------------"<<endl;
	return out;
}

template <class T>
List<T>::List(const List<T>& rl) {
	head = NULL;
	tail = NULL;
	brojclanova = 0;

	for(int i=1;i<=rl.brojclanova;i++){
		T res;
		if(rl.read(i,res))
			add(i,res);
	}
}

template <class T>
List<T>& List<T>::operator=(const List<T>& rl) {
	if(this!=&rl) {
		clear();
		head=NULL;
		tail=NULL;
		brojclanova=0;

		for(int i=1;i<=rl.getVelicina();i++){
			T res;
			if(rl.read(i,res))
				add(i,res);
		}
	}
	return *this;
}

template <class T>
List<T>::~List() {
	while(!empty())
		remove(1);
}

template <class T>
bool List<T>::add(int n,const T& newData) {
	if(n<1 || n>brojclanova+1)
		return false;
	else {
		listEl* newEl = new listEl;
		if(newEl == NULL)
			return false;
		else {
			newEl->data = newData;
			if(n==1){
				newEl->next = head;
				head = newEl;

			}else if(n==brojclanova+1){
				newEl->next=NULL;
				tail->next = newEl;

			}else{
				listEl* temp=head;
				for(int i = 2; i < n; i++)
					temp=temp->next;
				newEl->next = temp->next;
				temp->next = newEl;
			}
			brojclanova++;
			if(newEl->next==NULL)
				tail=newEl;
			return true;
		}
	}
}

template <class T>
bool List<T>::remove(int n){
	if(n<1 || n>brojclanova)
		return false;
	else {
		if(n==1){
			listEl* del = head;
			head = head->next;
			if(tail==del)
				tail=NULL;
			delete del;
			brojclanova--;

		}else{
			listEl* temp=head;
			for(int i=2;i<n;i++)
				temp=temp->next;
			listEl* del=temp->next;
			temp->next=del->next;
			if(tail==del)
				tail=temp;
			delete del;
			brojclanova--;
		}
		return true;
	}
}

template <class T>
bool List<T>::read(int n,T& retVal)const{
	if(n<1 || n>brojclanova)
		return false;
	else{
		if(n==1)
			retVal=head->data;

		else if(n==brojclanova)
			retVal=tail->data;
		else {
			listEl* temp=head;
			for(int i=1;i<n;i++)
				temp=temp->next;
			retVal=temp->data;
		}
		return true;
	}
}

template <class T>
void List<T>::clear() {
	while(!empty())
		remove(1);
}




#endif
