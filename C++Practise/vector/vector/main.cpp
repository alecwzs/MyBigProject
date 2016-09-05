#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	vector<string>::size_type ix = 89;
	vector<string> svec(ix,"hi");
	svec[88] = "wzs";
	vector<string>::iterator iter = svec.begin() + svec.size();
	cout << "*iter= " << *(iter-1)<< endl;
	cout << "*iter= " << *(iter-2)<< endl;
	printf("hello world\n");
	getchar();
	return 0;
}
