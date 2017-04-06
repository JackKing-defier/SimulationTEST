#ifndef USER_H_
#define USER_H_

#include <string>
#include <iostream>
using namespace std;

class User
{
private:
	int sno;
public:
	//方案一
	int get_sno();
	void set_sno(int s);
	void show();

	//方案二
	/*int get_sno()
	{
		return sno;
	}

	void set_sno(int s)
	{
		sno = s;
	}

	void show()
	{
		cout << sno << endl;
	}*/
	
};
#endif // !USER_H_