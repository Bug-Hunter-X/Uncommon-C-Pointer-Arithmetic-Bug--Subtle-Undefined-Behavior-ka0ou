 #include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; //Declare a pointer named ptr that will hold the memory address of x
  int y = *ptr; // Declare integer y and assign it the value pointed to by ptr
  *ptr = 20; // Change the value of the variable pointed to by ptr
  y = *ptr; // Reassign integer y the updated value at the memory address held by ptr
  printf("%d\n", x); //Prints out updated value of x
  printf("%d\n", y); //Prints out updated value of y
  return 0;
} 