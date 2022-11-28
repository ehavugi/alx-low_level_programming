echo "test task 0"
echo " ============"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
./a
rm ./a
echo "test task 1"
echo "=========="
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
./b
rm ./b
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

echo "test for task 4"
echo "=================="
gcc -std=gnu89 100-main_opcodes.c -o main
./main 21
#objdump -d -j.text -M intel main
#./main 21 | udcli -64 -x -o 4005f6
rm ./main
