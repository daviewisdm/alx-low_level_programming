# C Programming - File I/O

In C programming, file I/O (Input/Output) operations are used to handle files on your storage devices. This includes reading from, writing to, and managing files. This guide will cover the basics of file I/O in C, including opening, reading, writing, and closing files.

## Opening a File

To open a file in C, you need to use a file pointer and the `fopen` function. The file pointer is a variable that keeps track of the file being accessed. The `fopen` function takes two parameters: the name of the file to be opened and the mode for using the file (read, write, append). Here's an example of how to open a file:

```c
FILE file_ptr;
file_ptr = fopen("fileName.txt", "w");
```

In this example, "fileName.txt" is the name of the file to be opened and "w" is the mode, which stands for write. If the file does not exist, it will be created [Source 2](https://www.geeksforgeeks.org/c-file-io/).

## Reading a File

To read a file in C, you can use functions like `fscanf`, `getc`, and `fgetc`. The `fscanf` function allows you to read and parse data from a file. The `getc` and `fgetc` functions allow you to read a single character from a file [Source 4](https://itsourcecode.com/c-tuts/files-i-o-in-c-open-read-write-and-close-the-file-with-examples/).

## Writing to a File

To write to a file in C, you can use functions like `fprintf`, `fputc`, and `fwrite`. The `fprintf` function allows you to write formatted output to a file. The `fputc` function allows you to write a single character to a file. The `fwrite` function allows you to write a block of data to a file [Source 3](https://www.cprogramming.com/tutorial/cfileio.html).

## Closing a File

After you have finished working with a file, it's important to close it using the `fclose` function. This function takes a file pointer as a parameter and closes the file associated with that file pointer [Source 6](https://www.learnc.net/c-tutorial/c-file-io/).

## Binary File I/O

C also supports binary file I/O operations. This allows you to read and write binary data to a file. Binary file I/O operations are similar to text file I/O operations, but they use different functions [Source 9](https://www.codingunit.com/c-tutorial-binary-file-io).

## Conclusion

File I/O is a fundamental part of C programming. It allows you to handle files on your storage devices, which is essential for many applications. Understanding how to open, read, write, and close files in C is a crucial skill for any C programmer.
