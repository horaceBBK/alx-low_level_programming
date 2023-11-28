## C Programming - File I/O

In this project, I will be exploring various file input/output (I/O) operations using C programming language.

## Tasks

1. **Read Text File:**

I will write a function that reads a specified number of characters from a text file and prints them to the POSIX standard output. The function will return the actual number of characters read and printed. If an error occurs, such as the file cannot be opened or read, or if the write fails, the function will return 0.

2. **Create File:**

I will create a function that creates a file with the specified name and writes the provided text content to the file. The function will truncate the file if it already exists. If an error occurs, such as the file cannot be created or written to, or if the write fails, the function will return -1. If the file already exists, the function will not change its permissions.

3. **Append Text to File:**

I will write a function that appends the provided text content to the end of an existing file. The function will return 1 on success and -1 on failure. If the file does not exist, the function will not create it. If the text content is NULL, the function will not add anything to the file.

4. **Copy File Content:**

I will create a program that copies the content of one file to another file. The program will take two arguments: the name of the source file and the name of the destination file. If the number of arguments is incorrect, the program will exit with code 97 and print an error message. If the destination file already exists, the program will truncate it. If the source file does not exist or cannot be read, the program will exit with code 98 and print an error message. If the destination file cannot be created or written to, the program will exit with code 99 and print an error message. If closing a file descriptor fails, the program will exit with code 100 and print an error message. The program will read 1,024 bytes at a time from the source file to minimize system calls.

5. **Display ELF Header Information:**

I will create a program that displays the information contained in the ELF header at the start of an ELF file. The program will take one argument: the name of the ELF file. If the file is not an ELF file, or on error, the program will exit with status code 98 and display a comprehensive error message to stderr. The program is allowed to use lseek once and read a maximum of 2 times at runtime. The program can have as many functions as needed and is allowed to use printf. Refer to the man pages for elf and readelf for more information.
