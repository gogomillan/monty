<div align="center">
  <img width="700" height="245" src="assets/montylogo_wide.png">
</div>

# Monty
This is an interpreter for Monty bytecodes files. Through the esoteric [Monty](http://montyscoconut.github.io/) is addressed Linked lists, Stacks, Queues - LIFO, FIFO concepts. Developed on Ubuntu Linux using C language. __Bonus track - Brainf\*ck__ 

![OS Linux](https://img.shields.io/badge/OS-Linux-blue.svg)
![distro Ubuntu](https://img.shields.io/badge/distro-Ubuntu-orange.svg)
![tecnology C](https://img.shields.io/badge/technology-C-green.svg)

The concepts covered here are:
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

## Requirements
- Linux Ubuntu 14.04 LTS
- gcc (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4
- C language understanding

## Installation
1. Clone the repo in your local machine:  
**Example:**
```bash
vagrant@~$
vagrant@~$ git clone https://github.com/gogomillan/monty.git
vagrant@~$
```
2. Go to the directory and compile the task you want:  
**Example:**
```bash
vagrant@~$
vagrant@~$ cd monty
vagrant@~$ ls
_add.c  bytecodes        freestack.c  _mod.c   _nop.c    _pint.c  _push.c     README.md  set_number.c  _swap.c
assets  check_command.c  LICENSE      monty.h  _pall.c   _pop.c   _queue.c    _rotl.c    _stack.c
bf      _div.c           main.c       _mul.c   _pchar.c  _pstr.c  readfile.c  _rotr.c    _sub.c
vagrant@~$
```
3. Complile the project: 
**Example**
```bash 
vagrant@~$
vagrant@~$ gcc -Wall -Werror -Wextra -pedantic \*.c -o monty
vagrant@~$
```
## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python).
It relies on a unique stack, with specific instructions to manipulate it. The goal of this project
is to create an interpreter for Monty ByteCodes files.

### Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this
standard but it is not required by the specification of the language. There is not more than one
instruction per line. There can be any number of spaces before or after the opcode and its argument.
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional
text after the opcode or its required argument is not taken into account:
```bash
vagrant@~$ cat -e bytecodes/000.m
push 0$
push 1$
$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
vagrant@~$
```
### Usage
Usage: monty file  
- where file is the path to the file containing Monty byte code

- If the user does not give any file or more than one argument to your program, print
  the error message USAGE: monty file, followed by a new line, and exit with the
  status EXIT_FAILURE
- If, for any reason, it’s not possible to open the file, print the error message
  Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
  - where <file> is the name of the file
- If the file contains an invalid instruction, print the error message L<line_number>: unknown
  instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
  - where is the line number where the instruction appears.
    Line numbers always start at 1
- The monty program runs the bytecodes line by line and stop if either:
  - it executed properly every line of the file
  - it finds an error in the file
  - an error occured

## Cases

### Case: push, pall 
The opcode push pushes an element to the stack.
- Usage: push <int>  
  where <int> is an integer  
The opcode pall prints all the values on the stack, starting from the top of the stack.
- Usage pall  

```bash
vagrant@~$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
vagrant@~$ ./monty bytecodes/00.m
3
2
1
vagrant@~$
```

### Case: pint
The opcode pint prints the value at the top of the stack, followed by a new line.
- Usage: pint
  If the stack is empty, print the error message L<line_number>: can't pint, stack empty,
  followed by a new line, and exit with the status EXIT_FAILURE

```bash
vagrant@~$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
vagrant@~$ ./monty bytecodes/00.m
3
2
1
vagrant@~$
```

### Case: pop
The opcode pop removes the top element of the stack.
- Usage: pop
  If the stack is empty, print the error message L<line_number>: can't pop an empty stack,
  followed by a new line, and exit with the status EXIT_FAILURE

```bash
vagrant@~$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
vagrant@~$ ./monty bytecodes/07.m 
3
2
1
2
1
1
vagrant@~$ 
```
  
## Authors

* **Juan Marcos Cabezas** - *Initial work* - [PurpleBoothJMC](https://github.com/juanmarcoscabezas)
* **Gonzalo Gomez Millan** - *Initial work* - [PurpleBoothGGM](https://github.com/gogomillan)

## License

This project is licensed under the GNU License - see the [LICENSE](LICENSE) file for details
