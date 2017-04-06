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
	//Plan one
	int get_sno();
	void set_sno(int s);
	void show();

	//Plan two
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