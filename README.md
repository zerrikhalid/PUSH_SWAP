# Push_swap
This project is about sorting data. There are 2 stacks, A and B. Stack A contains a random number of either positive or negative numbers without any duplicates. Stack B is empty. The goal is to sort in ascending order numbers into stack A. There are only a few operations that can be used to manipulate the stacks.

## Introduction
The project consists of two programs:
- `checker` - takes integer arguments and reads instructions on the standard output. Once read, checker executes them and displays OK if integers are sorted. Otherwise, it will display KO.
- `push_swap` - calculates and displays on the standard output the smallest list of instructions possible to sort the integer arguments received.

## Objective
The objective of the project is to write a program that calculates the smallest list of instructions possible to sort the numbers in stack A. The program must produce the smallest number of operations possible. The program must also run in a reasonable time.

## Features
The project has the following features:
- The program must display the smallest list of instructions possible to sort the numbers in stack A.
- The program must run in a reasonable time.
- The program must not have any memory leaks.

## Constraints
The project has the following constraints:
- The only allowed functions are `write`, `read`, `malloc`, `free`, and `exit`.
- The program must be written in C.
- The program must compile with the flags `-Wall`, `-Wextra`, and `-Werror`.

## Instructions
The following instructions can be used to manipulate the stacks:
- `sa` - swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- `sb` - swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- `ss` - sa and sb at the same time.
- `pa` - push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- `pb` - push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- `ra` - rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
- `rb` - rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
- `rr` - ra and rb at the same time.
- `rra` - reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
- `rrb` - reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
- `rrr` - rra and rrb at the same time.

## Usage
To compile the pushwap program, run `make` in the root of the repository. This will create an executables: `push_swap`.
To compile the checker program, run `make bonus` in the checker directory. This will create an executable: `checker`.

### Checker
To use the checker program, run the following command:
```
./checker 3 2 1 0
```
This will create a stack with the numbers 3, 2, 1, and 0. The program will then wait for instructions to be given on the standard input. Once you are done, press `Ctrl + D` to send an EOF signal to the program. The program will then display OK if the numbers are sorted, otherwise, it will display KO.

### Push_swap
To use the push_swap program, run the following command:
```
./push_swap 3 2 1 0
```
This will create a stack with the numbers 3, 2, 1, and 0. The program will then display the smallest list of instructions possible to sort the numbers.

## Example
```
$> ./push_swap 3 2 1 0
ra
ra
```
## Testing
To test the programs, run the following command:
```
ARG="3 2 1 0"; ./push_swap $ARG | ./checker $ARG
```
This will run the push_swap program with the numbers 3, 2, 1, and 0. The output of push_swap will then be piped to the checker program. The checker program will then display OK if the numbers are sorted, otherwise, it will display KO.

## Visualizer
To visualize the instructions, run the following command:
```
ARG="3 2 1 0"; ./push_swap $ARG | ./checker -v $ARG
```
This will run the push_swap program with the numbers 3, 2, 1, and 0. The output of push_swap will then be piped to the checker program with the -v flag. The checker program will then display the instructions and the state of the stacks after each instruction.

