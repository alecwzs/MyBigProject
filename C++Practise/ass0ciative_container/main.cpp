#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
    pair<string,string> anon;
    anon = make_pair("wzs1","teacher");
    pair<string,string> author("James","Joyce");
    cout <<"anon.first = " << anon.first << ",anon.second = "<<anon.second<<  endl;
    
    
    map<string,int> word_count;
    word_count["Anna"] = 1;
    cout << "word_count[Anna] = " << word_count["Anna"] << endl;
    ++word_count["Anna"];
    cout << "word_count[Anna] = " << word_count["Anna"] << endl;
   // cout << map<string,int>::key_type << endl;
    typedef pair<string,int> valType;
    word_count.insert(valType("window",1));
    cout << "word_count[window] = " << word_count["window"] << endl;
    word_count.insert(map<string,int>::value_type("what",1));
    cout << "word_count[what] = " << word_count["what"] << endl;
	printf("hello world\n");
    getchar();
	return 0;
}
