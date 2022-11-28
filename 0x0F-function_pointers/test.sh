echo "test task 2 "
echo "============"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
./c
rm ./c

echo "test task 3"
echo " ==========="
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
./calc 97 + 1
./calc 1024 / 10
./calc 1024 '*' 98
./calc 1024 '\*' 98
./calc 1024 - 98
./calc 1024 '%' 98
rm ./calc
