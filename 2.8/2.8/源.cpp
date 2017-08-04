#include<iostream>
using namespace std;

#define Debug

int main()
{
#ifdef Debug
	cout << "\x32\x4d\x0a";



#endif // DEBUG
#ifndef Debug

	cout << "\x32\t\x4d\x0a";

#endif // !Debug





}