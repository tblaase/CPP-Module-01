# CPP-Module-01

My solution for CPP Module 01 of the Common core of 42 school.

![result](https://github.com/tblaase/CPP-Module-01/blob/main/readme_additions/result.png)


The Scope of this Modul was to get to know C++ further and come in contact with:
- Allocation (ex00 + ex01)
- Pointer/Reference (ex03)
- getter and setter functions (ex04)
- different constructors (ex04)
- function pointers (ex05)
- switch cases with defined fallthrough (ex06)


All of those exercises are compilable with the `-std=c++98-flag`, since this was a requirement for this project.
All exercises where compiled and tested on `macOS Catalina 10.15.7` and `Ubuntu 20.04.4 LTS`.
Ex04 and ex06 need small changes to compile and run on Linux:
- ex04
  - Line 54 in /src/main.cpp, follow the comment
- ex06
  - un-comment lines 62, 65 and 68


All exercises can be compiled from the root of the exercise with `make`, `make all` or `make re`.
After that, run the created executable like `./executable_to_run` (ie. ex00 `./Zombie`).
