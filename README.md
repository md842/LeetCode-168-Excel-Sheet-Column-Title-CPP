# LeetCode #168: Excel Sheet Column Title (Daily Challenge 08/22/2023)
This repository contains a C++ solution to the LeetCode daily challenge #168 for 08/22/2023. https://leetcode.com/problems/excel-sheet-column-title/

This solution beats 100% of users in runtime (0 ms) and 79.75% of users in memory usage (5.9 MB). 

## Running
Navigate to the directory containing the extracted implementation, then simply run `make` with the included Makefile.
```
cd LeetCode-168-Excel-Sheet-Column-Title-CPP
make
```

The exact commands run by `make` are as follows:

```
g++ -Wall -O0 -pipe -fno-plt -fPIC excel_column.c -o excel_column
```

There are no arguments; the test cases are hard-coded into the C++ file.

## Cleaning up
Navigate to the directory containing the extracted implementation, then simply run `make clean` with the included Makefile.

```
cd LeetCode-168-Excel-Sheet-Column-Title-CPP
make clean
```

The exact commands run by make clean are as follows:

```
rm -f excel_column
```