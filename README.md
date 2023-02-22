# CertiCoq Test#2

We're testing CertiCoq again, but this time with a little more complex extraction.
We want to extract a function that adds 10 to any certain natural number. Thus, we define ```addn10``` as  ```Definition addn10 n := n + 10```, and extract it using the CertiCoq plugin with ```CertiCoq Compile addn10```.

This generates the corresponding C code, glue and headers. We added a ```main()``` function inside the ```main.c```file.

Compiled everything with:

```bash
clang -o test -fomit-frame-pointer gc_stack.c ctoy.addn10.c main.c
```

When executing ```test``` we get a value from the body function but, since we could'nt specify to which number be wanted to add 10 we started doing some changes and tests on the ```main()```.

In short, we don't know if the body is adding 10 to some random data and we also dont know how to specify which number we want to add 10 to. In the other hand, we also tried to use the glue libraries and failed, so it would be great if you could explain us a little on how to use them or how they work.

Since none of our approaches worked correctly we have decided to let the ```main.c``` file more or less clean so you could work with it.

## A little explanation of some of the tests that we have done:

We tried using the ctoy.addn10.c functions in some different ways with the body function to see if we could add 10 to the number 1. This resulted sometimes in Segmentation fault errors, specifically when using this functions at any time:

- add_uncurried_known_101
- y_wrapper_102
- ctoydaddn10_known_105
- ctoydaddn10_wrapper_106

In the other hand, the _CoqdInitdNatdadd_wrapper_103_ and the _f_case_known_104_ functions seems to work correctly when used independently.

Later we came to the conclusion that all this functions get called anyway when using the body function.

Also, when using the glue libraries we also get Segmentation Fault errors when trying to use the print functions.
