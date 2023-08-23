# A simple shell

## Description

A recreation of a shell that takes user input (commands with arguments) and outputs accordingly.

Basic loop of a shell:

1. Read command from standard input.
2. Parse commandline string into an executable program and its arguments.
3. Run parsed command.

## Environment
Our custom shell was developed and tested on `Ubuntu 14.04 LTS` via VIM text editor..

## Features

- displays a prompt and waits for user to type a command
- can handle commands with options and arguments
- prompt displays again each time command is executed
- uses PATH variable to find executable command
- if executable is not found, prints an error message and displays prompt again
- includes an exit function that exits the shell
- includes an env built-in that prints the current environment

## File Contents
This repository contains the following files:

|   **File**     |  **Description**   |
| -------------- | -----------------  |
| main.c         | the main function  |
| shell.h        | header file        |
| atoi.c         | atoi function      |
| built_in.c     | built-in function  |
| func1..c       | functions files    |
| parse.c        | parse function     |
| prompt.c       | prompt function    |
| strings.c      | strings function   |

## Function Descriptions
| **Function** | **Description** |
| -------------- | ----------------- |
| int _strlen(char *s) | find string length |
| int _strcmp(char *s1, char *s2) | compare two strings |
| char **parser(char *str, const char *delim) | parsing a string into tokens using delimiters |
| void execute_b(char **command) | executes built-in function |
| void execute_e(char *cmd, char *argv[], char *envp[]) | execute the command line |
| void env(const char *name) | prints the environment |
| char **get_line(void) |  delimited string input|
| void exitF(int code) | exit the shell|
| bool built_in(char *cmd) | check if it is a built-in or not |
| char *checker(char *token) | check the if the command is an executable or built-in |
| int cd(char **cmd) | change director |
| int _atoi(char *s) | convert ascii to int |
| void execute(char *cmd, char *argv[], char *envp[]) | executes command line |

## Usage

1. Enter custom shell by typing "./hsh". You should be prompted with a ($).
2. Type a command of your liking and press "Enter".
3. Appropriate output will appear.
4. Prompt reappears and awaits your next command.
5. Exit shell by typing "exit"

## Installation
Clone the repository. Compile the ".c" files. Run executable.

```
$ git clone https://github.com/lowercaselife/simple_shell.git
```
## Compilation

Enter the following command to compile:
` $ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh `

## Example

Interactive Mode
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

Non-interactive Mode
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Authors

* [**Tony NTAHE**](https://github.com/TonyNTAHE)
* [**Daniel Omoaregba**](https://github.com/Daniel-Omoaregba)

## Acknowledgements

We would like to thank the staff and our wonderful peers at ALX-SE  for providing an effective learning experience throughout this project.

<p align="center">
<a href="https://www.alx-intranet.hbtn.io"><img width="150" src="https://lh3.googleusercontent.com/oVJxT1yn7vwaEM8t9A5MGL6emG0j-_uqHa5H8ikWLvl6Ka-nVmUJZblqWDqPiY-S6itPLnZNgcc8rviK8AVT65l_a3zHiyctwy8=s0"></a>
</p>
