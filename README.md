# CS_3560
Intro to systems programming

=======================================
TOPICS: Covers Chapters 1 - 4
=======================================
--------------------------------------------------------
CHAPTER ONE:  C Programming
--------------------------------------------------------

Key differences with C++
Command-line Compiling
Basic I/O:  Input, Output
Dynamic Memory Allocation

--------------------------------------------------------
CHAPTER TWO: USERS, FILES, AND THE MANUAL
--------------------------------------------------------
System Calls and Functions:
- open, read, write, creat, lseek, close
- perror

Commands
- man, who, cp

Ideas and Skills
- The role and use of on-line documentation
- The Unix file interface:  open, read, write, lseek, close
- Reading, creating, and writing files
- File descriptors
- Buffering:  user level and kernel level
- Kernel mode, user mode, and the cost of system calls
- How Unix represents time, how to format Unix time
- Using the utmp file to find list of current users
- Detecting and reporting errors in system calls


----------------------------------------------------------------
CHAPTER THREE:  DIRECTORIES AND FILE PROPERTIES
-----------------------------------------------------------------

System Calls and Functions:
- opendir, readdir, closedir, seekdir
- stat
- chmod, chown, utime
- rename

Commands
- ls

Ideas and Skills
- A directory is a list of files
- How to read a directory
- Types of files and how to determine their type
- Properties of files and how to determine properties of a file
- Bit sets and bit masks
- User and group ID numbers and the passwd database


------------------------------------------------
CHAPTER FOUR:  FOCUS ON FILE SYSTEMS
------------------------------------------------

System Calls and Functions
- mkdir, rmdir, chdir
- link, unlink, rename symlink

Commands
- pwd

Ideas and Skills
- User's view of the Unix file system tree
- Internal structure of Unix file system:  inodes and data blocks
- How directories are connected
- Hard links, symbolic links:  ideas and system calls
