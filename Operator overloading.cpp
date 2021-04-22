#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
class S{
	friend std::ostream &operator<<(std::ostream &os,S &obj);
	char *str;
	int len;
	public:
 // 	S:: operator+(S &rhs);
	S()
	{
		str=nullptr;
		str=new char[1];
		*str='A';
	}
	S(const char *s)
	{
		str=nullptr;
		str= new char[strlen(s)+1];
		strcpy(str,s);
	}
  S operator+(const S &rhs)
	{
		int buff_size=strlen(str)+strlen(rhs.str)+1;
		char *buff=new char[buff_size];
		strcpy(buff,str);
		strcat(buff,rhs.str);
		S temp=buff;
		delete [] buff;
		return temp;
	}

};
	 std::ostream &operator<<(std::ostream &os,S &obj){
	 	os<<obj.str;
	 	return os;
	 }
 
	int main()
	{
		S obj1("ab"),obj2("cd"),obj3;
		obj3=obj1+obj2;
		cout<<obj3<<endl;
	}