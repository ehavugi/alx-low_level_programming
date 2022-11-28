gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
./calc 97 + 1
./calc 1024 / 10
./calc 1024 '*' 98
./calc 1024 '\*' 98
./calc 1024 - 98
./calc 1024 '%' 98
rm calc
