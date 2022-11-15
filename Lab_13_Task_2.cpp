#include<iostream>


int vari = 55;


namespace my_namespace
{
	int vari = 32;
}
namespace my_namespace2
{
	int vari2 = 8;
}

using namespace std;
using namespace my_namespace2;

int main()
{
	cout << vari << endl;
	cout << my_namespace::vari << endl;
	cout << vari2 << endl;
}