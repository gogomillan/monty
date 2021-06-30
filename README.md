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

## Getting Started
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites
What things you need to install the software and how to install them

```
Give examples
```

### Installing

A step by step series of examples that tell you how to get a development env running

Say what the step will be

```
Give the example
```

And repeat

```
until finished
```

End with an example of getting some data out of the system or using it for a little demo
## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Ubuntu](https://ubuntu.com/) - Ubuntu 14.04 LTS
* [gcc](https://gcc.gnu.org/) - GCC, the GNU Compiler Collection
* [Brainfuck](https://en.wikipedia.org/wiki/Brainfuck) - Used to interprete software (sudo apt-get install bf)

## Authors

* **Juan Marcos Cabezas** - *Initial work* - [PurpleBoothJMC](https://github.com/juanmarcoscabezas)
* **Gonzalo Gomez Millan** - *Initial work* - [PurpleBoothGGM](https://github.com/gogomillan)

## License

This project is licensed under the GNU License - see the [LICENSE](LICENSE) file for details
