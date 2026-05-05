# Case_Inner_Outer_loops_task


In this project, we built a nested loop system in C using macros and `#include`.

* We split the loops into separate files:

  * Outer loop (`y`) in `example1.a.c`
  * Inner loop (`i`) in `example1.b.c`
* We used `#include` to combine them inside `main.c`
* We controlled the behavior using macros like `INC`, `Innerloop`, and `Outerloop`
* This allows enabling/disabling parts of the code at compile time

This approach demonstrates how the C preprocessor can be used to dynamically build program structure.
