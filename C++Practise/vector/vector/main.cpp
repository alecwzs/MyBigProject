#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	vector<string>::size_type ix = 89;
	vector<string> svec(ix,"hi");
	svec[5] = "wzs";
    svec.push_back("woaini");
   // svec.reserve(200);
   while(svec.size() != svec.capacity())
       svec.push_back("9");
	cout<<"svec.capacity = "<<svec.capacity()<<" ,svec.size = "<<svec.size()<<endl;
    svec.push_back("100");
    cout<<"svec.capacity = "<<svec.capacity()<<" ,svec.size = "<<svec.size()<<endl;
	printf("hello world\n");
	getchar();
	return 0;
}
