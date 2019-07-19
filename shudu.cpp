#include <iostream>
#include <fstream>
#include <stack>
using namespace std;
extern const unsigned  NUM = 9;
int to_int(int i, int j, int n);
int get_i(int tmp);
int get_j(int tmp);
int get_n(int tmp);
int check(int i,int j,int n,int (&sd)[9][9]);
int main()
{
 int sd[NUM][NUM];
 // init 
 for(int i=0;i<NUM;++i)
 {
  for(int j=0;j<NUM;++j){
   sd[i][j] = 0;
  }
 }
 int i = 0;
 int j = 0;
 int n = 1;
 stack<int> s;
 while(i<NUM){
  while(j<NUM){
   while(n<=NUM){
    if(check(i,j,n,sd)){
      int tmp = to_int(i,j,n);
      s.push(tmp);
      sd[i][j] = n;
      break;
    }else{
     if(n<NUM){
      n++;
      continue;
     }else{
      int tmp = s.top();
      s.pop();
      while(get_n(tmp)==NUM){
       tmp = s.top();
       s.pop();
       sd[get_i(tmp)][get_j(tmp)]=0;
      }
      i = get_i(tmp);
      j = get_j(tmp);
      n = get_n(tmp);
      sd[i][j]=0;
      n++;
     }
    }
   }
   j++;
   n=1;
  }
  i++;
  j=0;
  n=1;
 }
 for(int i=0;i<NUM;i++){
   for(int j=0;j<NUM;j++){
    cout << sd[i][j];
   }
   cout << endl;
 }
cout << endl;
 return 0;
}
int check(int i, int j , int n,int (&sd)[9][9])
{
  for(int t = 0;t<NUM;++t){
   if(sd[i][t]==n){
     return 0;
    }
   if(sd[t][j]==n){
     return 0;
   }
  }
  int index_i = i/3*i;
  int index_j = j/3*i;
  for(int t=0;t<3;t++){
    if(sd[index_i][index_j+t]==n) return 0;
    if(sd[index_i+t][index_j]==n) return 0;
    if(sd[index_i+t][index_j+t]==n) return 0;
   }
  if(sd[index_i+2][index_j+1]==n) return 0;
  if(sd[index_i+1][index_j+2]==n) return 0;   
  return 1;
}

int to_int(int i,int j,int n){
 int r = 0;
 r = r | n;
 r = r | j<<4;
 r = r | i<<8;
}
int get_i(int tmp){
 return tmp>>8;
}

int get_j(int tmp){
 tmp = tmp>>4;
 return 15|tmp;
}
int get_n(int tmp){
  return 15| tmp;
 }

