CFLAGS = -std=gnu17 -Wall -O0 -pipe -fno-plt -fPIC
CPPFLAGS = -Wall -O0 -pipe -fno-plt -fPIC

default: excel_column_cpp

excel_column: excel_column.c
	$(CC) $(CFLAGS) excel_column.c -o excel_column

excel_column_cpp: excel_column.cpp
	g++ $(CPPFLAGS) excel_column.cpp -o excel_column

.PHONY: clean
clean:
	rm -f excel_column
