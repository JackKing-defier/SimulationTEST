#include <iostream>
#include "user.h"
#include "stdafx.h"
using namespace std;

//����һ
int User::get_sno()
{
	return sno;
}

void User::set_sno(int s) 
{ 
	sno = s; 
}

void User::show()
{
	cout << sno << endl;
}