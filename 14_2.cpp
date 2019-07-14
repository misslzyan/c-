#include <iostream>
int main(){
 int sum = 0;
 for(int i = 50; i<=100;++i){
  sum += i;
 }
 std::cout << "The for result is : " << sum << std::endl;
 sum = 0;
 int i = 50;
 while(i<=100){
  sum += i;
  ++i;
 }
 std::cout << "The while result is : " << sum << std::endl;
 return 0 ;
}
