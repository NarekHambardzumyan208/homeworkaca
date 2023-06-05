#include <iostream>
#include "main.h"
using namespace std;
void* operator new(size_t size)
{
  void* ptr = malloc(size);
  if(ptr == nullptr)
  {
          throw bad_alloc();
  }
}
void operator delete(void* ptr)noexcept
{
 free(ptr);
}



