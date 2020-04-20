#include <iostream>
#include <ctime>
#include <cstring>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <queue>
#include <algorithm>
#include "solution.h"
using std::cin;
using std::cout;
using std::endl;
using std::srand;
using std::rand;
using std::stack;
using std::vector;
using std::pow;
using std::string;
using std::strlen;
using std::map;
using std::set;
using std::queue;
using std::pair;
using std::unordered_map;
using std::sort;
using std::unordered_set;
using std::lower_bound;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}
extern ListNode* put(ListNode* node,int x);
void show();

class A{

public:
	int * a;
	A(){a=new int;*a=5;}
	A(int x){
		a=new int;*a=x;
	}
	A(const A&){}
	void edit(const int& x){
		*a=x;
	}
	virtual ~A(){
		cout<<"delete A";
		delete a;
	}
	virtual void show(){
		cout<<"A";
	}
};

class B:public A{
string* msg;
public:
	B(){
		cout<<"construct"<<endl;
		msg=new string("this default");
	}
	B(char* str){
		msg=new string(str); 
	}
	
	B(const B& b){
		cout<<"copy construct"<<endl;
		msg=new string(*(b.msg));
	}
	B& operator=(const B &b){
		if(this==&b) return *this;
		delete msg;
		if(b.msg==nullptr) {msg=nullptr;return *this;}
		cout<<"operator overload"<<endl;
		msg=new string(*(b.msg));
		return *this;
	}
	void show()const{
		cout<<*msg<<msg<<endl;
	}
	~B(){
		if(msg==nullptr) return;
		cout<<"destructor"<<msg;
		delete msg;
	}
};


int main(){

	B t=B();
	B t1=B();
	t1=t;
	cin.get();
	cin.get();
	return 0;
}
