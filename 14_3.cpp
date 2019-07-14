#include <iostream>
int main(){
 std::cout << "The while:\n";
 int val = 10;
 while(val>=0){
  std::cout << val << "\n";
  --val;
 } 
 std::cout << "The for : \n";
 for(int i=10;i>=0;--i){
  std::cout << i << "\n";
}
 std::cout << std::endl;
 return 0;
}
