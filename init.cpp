#include <iostream>
#include "main.h"
#include "main.cpp"
using namespace std;
int main(){
int* ptr = new int(10);
for(int i = 0;i < 10;i++){
 ptr[i] = rand();
}
for(int i = 0; i < 10;i++)
{
	cout << ptr[i] << " ";
}
delete(ptr);
return 0;
}
