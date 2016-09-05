#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	vector<string>::size_type ix = 89;
	vector<string> svec(ix,"hi");
	svec[2] = "wzs";
	cout<<svec[4]<<"......."<<svec.size()<<endl;
	printf("hello world\n");
	getchar();
	return 0;
}
