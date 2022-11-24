echo "Task 0"
echo "======"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
./a
rm ./a

echo "task 1"
echo "====="
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
./b
rm ./b

echo "Task 2"
echo "======"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
./c
rm ./c

echo "Task 3"
echo "======"

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
./d
rm ./d
echo "task 4"
echo "-=====-"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e

echo "task 5"
echo "-----"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
./first
rm ./first


echo "task 6"
echo "------"
nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
./hello
rm 101-hello_holberton.o
rm /hello
