// SimulationTEST.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "user.h"
#include <iostream>
using namespace std;

int main()
{
	User u;
	int n = 1;
	u.set_sno(n);
	
	cout << "This is get" << u.get_sno() << endl;
	cout << "This is show" << endl;
	u.show();
    return 0;
}

