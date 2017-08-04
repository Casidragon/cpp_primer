#include<iostream>
using namespace std;

#define Debug

int main()
{
#ifdef Debug
	int mouth = 9, day = 7;

#endif // DEBUG

#ifndef Debug

	int mouth = 09, day = 07;  //09不能表示8进制
#endif // !Debug

	cout << mouth << day << endl;

}