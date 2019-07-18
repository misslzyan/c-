#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 int len = 4;
 char*  data = new char[len];
 ifstream infile;
 infile.open("shudu.dat");
 cout << "Reading from the file" << endl;
 while(infile.read(data,len)){
  cout << data  ;
 }
 cout << endl;
 infile.close();
 return 0;
}
