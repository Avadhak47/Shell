OS Assignement 1: Shell Designing


submitted to: A. Prof. Dr. Mukesh kumar 
Giluka
Name: Avadhesh Kumar
Enrollment number: 20/11/EC/007
Branch: CSE


This project is the implementation of SHELL to interact with Linux OS.
This project is run mainly on four major processes these are as follows:

1. Getting input from command line store it as a string with null terminating character.

2. Scanning that string and remove all unwanted characcter and seperate each meaning full command and argument from each other:- this part is done by using a data structure define in source files

3. Parsering the command and their respective arguments and build a AST- abstract syntax tree, and data structure for that tree is define in node files

4. Excuting commands that store in AST is done by executor file that then program retuen to main file/function and wait for next input.

It contains 7 C files and 6 header files for them along with the executable SHELL file.
File as as follow with their work(process they do):

1. main.c	That the driver program for SHELL implementing *REPL
2. prompt.c	This file give us program it’s aesthetic; printing path name with log and username.
3. source.c	Definig functions of src data structure for scanning input
4. node.c	Defining functions of node data structure for parsering
5. scanner.c	Scanning the input and store to src
6. parser.c 	Parsering the src and build a ASTs
7. executor.c	Call different Functions or file to excute commands (functions for internal and file 		for external commands)

1. shell.h	header file for prompts functions and parse_and_excute 
2. source.h	header file of source.c
3. node.h	header file node.c
4. scanner.h	header file scanner.c
5. parser.h	header file parser.c
6. executor.h	header file of executor.c


For running program first downloads these files and open terminal go to the directory where all of these are store, and run that command:

$ ./shell

or if you wanted to compile run this command

$ gcc -o shell main.c prompt.c source.c node.c scanner.c parser.c executor.c
$ ./shell

if terminals says permission denied run  this piece of code

$ chmod +x ./shell
$ ./shell

If you need any other information and want to report a bug please email me at:

avadheshkumarajay@gmail.com
avadhe96_soe@jnu.ac.in

or contact me on 
telegram @Avadh_ak
instragram @avadh_ak_
