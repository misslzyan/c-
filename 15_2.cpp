#include <iostream>
int main(){
 int a,b,c;
 std::cin >> a >> b >> c;
 int sum = 0;
 if(a<0)++sum;
 if(b<0)++sum;
 if(c<0)++sum;
 std::cout << "The result is : " << sum << std::endl;
 return 0 ;
}
