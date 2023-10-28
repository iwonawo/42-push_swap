# Push_swap
Because Swap_push isn’t as natural.
This project is about sorting data on a stack, with a limited set of instructions, using the lowest possible number of actions.

At the beginning the stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
The stack b is empty.
The goal is to sort in ascending order numbers into stack a.
Only the following operations are allowed to be used.

## Operations to use

| Operation | Description |
|---|---|
| sa (swap a) | Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements. |
| sb (swap b) | Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements. |
| ss | sa and sb at the same time. |
| pa (push a) | Take the first element at the top of b and put it at the top of a. Do nothing if b is empty. |
| pb (push b) | Take the first element at the top of a and put it at the top of b. Do nothing if b is empty. |
| ra (rotate a) | Shift up all elements of stack a by 1. The first element becomes the last one. |
| rb (rotate b) | Shift up all elements of stack b by 1. The first element becomes the last one. |
| rr | ra and rb at the same time. |
| rra (reverse rotate a) | Shift down all elements of stack a by 1. The last element becomes the first one. |
| rrb (reverse rotate b) | Shift down all elements of stack b by 1. The last element becomes the first one. |
| rrr | rra and rrb at the same time. |

## Table of Contents
- [Installation](#installation)

## Installation
To use push_swap, follow these steps.

1. Clone the repository:
https://github.com/iwonawo/42-push_swap.git

2. To compile the project, run the following command:

```bash
make
```

4. To sort numbers, run program with the following command:

```bash
./push_swap 4 67 3 87 23
```

5. To test program run the following command, for example:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

for Mac:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_Mac $ARG
```

for Linux:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```