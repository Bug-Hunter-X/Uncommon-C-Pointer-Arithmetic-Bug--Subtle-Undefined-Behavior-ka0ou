# Uncommon C Pointer Arithmetic Bug: Subtle Undefined Behavior

This repository showcases a common yet subtle bug related to pointer arithmetic in C. The bug involves the potential for undefined behavior when pointer arithmetic is not handled carefully. The code provided demonstrates a simple example, but this type of error can be much more difficult to detect in larger programs.  The solution demonstrates a safer way to handle pointer arithmetic. 

**Bug:** The bug lies in the way the pointer is used and how the value it points to is modified, and the implications of not considering potential boundary conditions or memory leaks.

**Solution:** The solution offers a more robust approach to pointer manipulation and memory management, highlighting safer practices.

**Learning Outcomes:**
* Understand potential pitfalls of direct pointer manipulation.
* Learn best practices for avoiding common pointer-related errors.
* Improve understanding of memory management in C.