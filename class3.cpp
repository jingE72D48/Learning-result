#include <iostream>
using namespace std;
#include <string>

class book{
	string name;
	string author;
	int pages;
	
	public:
	book(string na,string au,int pa):name(na),author(au),pages(pa){}
	void show_details() const{
		cout<<"书籍名称:"<<name<<"\n作者:"<<author<<"\n数:"<<pages<<endl;
	}
	bool is_thick() const{
		if(pages>=500){
			return true;
		}
		else{
			return false;
		}
	}
	
};

string letOut(const book& ref){
	bool resultOfThick=ref.is_thick();
	if(resultOfThick == true){
		return "是";
	}
	else {
		return "不是";
	}
}

int main(){
	book book1("《Python编程基础》","张三",300);
	book book2("《C++编程》","李四",600);
	book1.show_details();
	book2.show_details();
	cout<<"《python编程基础》是厚书吗："<<letOut(book1)<<endl;
	cout<<"《C++编程》是厚书吗："<<letOut(book2)<<endl;
}