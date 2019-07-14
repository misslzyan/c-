#include <iostream>
int main(){
 int a,b;
 std::cin >> a >> b;
 int max;
 if(a<=b){
  max = b;
 }else {
  max = a;
 }
 std::cout << "The result is :" << max << std::endl;
 return 0 ;
}
