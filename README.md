![Logo](https://coursereport-s3-production.global.ssl.fastly.net/uploads/school/logo/266/original/instagram-feed180.jpg)

# C - Simple Shell Project

Simple UNIX command interpreter realized by Albina Ismayilova and Rauf Ahmadzada

General:

Who designed and implemented the original Unix operating system:

- Dennis Ritchie and Ken Thompson

Who wrote the first version of the UNIX shell:

- The first Unix shell was the Thompson shell, sh, written by Ken Thompson at Bell Labs

Who invented the B programming language (the direct predecessor to the C programming language):

- B is a programming language developed at Bell Labs circa 1969 by Ken Thompson and Dennis Ritchie

Who is Ken Thompson:

- Kenneth Lane Thompson (born February 4, 1943) is an American pioneer of computer science

How does a shell work:

- The shell manages the interaction between you and the operating system by prompting you for input, interpreting that input for the operating system, and then handling any resulting output from the operating system. Shells provide a way for you to communicate with the operating system

What is a pid and a ppid:

- When a process is started, it is given a unique number called process ID (PID) that identifies that process to the system. PPID is a parent process ID

How to manipulate the environment of the current process:

- The environment of the current process can be manipulated using environment variables. Commands like export in Unix/Linux shells are used to set environment variables

What is the difference between a function and a system call:

- A function is a piece of code that performs a specific task and is part of a program. A system call is a request for a service from the operating system kernel

How to create processes:

- Processes can be generated using system calls such as fork() in the C programming language. The fork() system call initiates the creation of a new process by duplicating the existing or calling process

What are the three prototypes of main:

- The three prototypes of the main function in C are: - int main(void) - int main(int argc, char *argv[]) - int main(int argc, char *argv[], char *envp[])

How does the shell use the PATH to find the programs:

- The shell searches each directory in the path. If a command is not found, long searches can slow down system performance. The search path is read from left to right, so you should put directories for commonly used commands at the beginning of the path

How to execute another program with the execve system call:

- In C, the execve system call is used to execute a new program. It replaces the current process image with a new process image specified by the given file path

How to suspend the execution of a process until one of its children terminates:

- The wait() system call is used to suspend the execution of a process until one of its child processes terminates

What is EOF /end-of-file?

- EOF (End-of-File) is a condition in a file or stream of data that indicates that there is no more data to be read. In Unix-like systems, pressing Ctrl+D at the beginning of a line in the terminal sends an EOF signal

General requirements for the project:

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. Your shell should not have any memory leaks
7. No more than 5 functions per file
8. All your header files should be include guarded
9. Use system calls only when you need to

Compilation

Your shell will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Tasks:

0. README, man, AUTHORS

Write a README
Write a man for your shell.
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker

1. Betty would be proud

Write a beautiful code that passes the Betty checks

2. Simple shell 0.1

Write a UNIX command line interpreter.

Usage: simple_shell
Your Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the end of file condition (Ctrl+D)
You don't have to:

use the PATH
implement built-ins
handle special characters : ", ', `, \, *, &, #
be able to move the cursor
handle commands with arguments
execve will be the core part of your Shell, don't forget to pass the environ to it

3. Simple shell 0.2

Simple shell 0.1 +

Handle command lines with arguments

4. Simple shell 0.3

Simple shell 0.2 +

Handle the PATH
fork must not be called if the command doesn't exist

5. Simple shell 0.4

Simple shell 0.3 +

Implement the exit built-in, that exits the shell
Usage: exit
You don't have to handle any argument to the built-in exit

6. Simple shell 1.0

Simple shell 0.4 +

Implement the env built-in, that prints the current environment


## Authors

- Albina Ismayilova [@Albinnich](https://www.github.com/Albinnich)
- Rauf Ahmadzada [@Raid-dev](https://github.com/Raid-dev)

