#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>//使用find方法的头文件
using namespace std;
int main(int argc, char **argv)
{
	vector<string>::size_type ix = 89;
	vector<string> svec(ix,"hi");
	svec[88] = "wzs";
	
	//push_back()会影响迭代器的指向
	vector<string>::iterator iter = svec.begin() + svec.size();
	cout << "*iter= " << *(iter-1)<< endl;
	cout << "*iter= " << *(iter-2)<< endl;
	svec.push_back("woaini");
	iter = svec.begin() + svec.size();
	cout<<"*iter= "<<*(iter-1)<<endl;
	
	if(!svec.empty())
	{
		vector<string>::reference val = *svec.begin();//svec.begin()返回的是一个迭代器
		vector<string>::reference val2 = svec.front();//svec.back()返回的是元素的引用
		cout << "val = "<< val << ",val2 = " << val2 << endl;
		vector<string>::reference last = *--svec.end();//svec.end()返回的是svec最末一个元素的下一个位置
		vector<string>::reference last2 = svec.back();
		cout << "last = "<< last << ",last2 = " << last2 << endl;
	}
	//测试find函数
	string searchString("woainii");
	iter = find(svec.begin(),svec.end(),searchString);
	if(iter != svec.end())
	{
		cout << "*iter = " << *iter << endl;
		svec.erase(iter);
	}
	else
		cout << "can not find " << searchString << endl;
	printf("hello world\n");
	getchar();
	return 0;
}
