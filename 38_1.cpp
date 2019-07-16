#include <iostream>
int main()
{
 int base , exp;
 std::cin >> base >> exp;
 int res = 1;
 for(int i=1;i<=exp;++i){
  res *= base;
 }
 std::cout << "The res is : " << res << std::endl;
 return 0;
}
