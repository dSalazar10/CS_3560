Date : Thursday, May 3rd.

=================
EXAM COMPOSITION:
=================
--Exam will be given through blackboard.
--Mixture of T/F, Multiple choice, and short essay questions.
--Exams are a random mix of questions from a pool of questions.
--Questions will be in random order.
--Your exam will not be the exact exam as your neighbor, so looking at your neighbor's screen will not help you.
--Will be similar to the reading quizzes, but with an essay question or two.
--For the essay question, a reasonable paragraph or two should be all you need.


===========
EXAM RULES:
===========
--No electronic devices allowed for the exam ( ipods, phones, smart watches, etc )
--No in-and-out privledges.
--Academic integrity policy enforced - I will patrol the room looking for cheating.
--The average score will be >= 75%.  A bonus will be awarded if the class average is < 75%.
--The exam may be recorded.

======
HINTS:
======
--Make yourself a cheat sheet - can't use it, but it'll help you identify where you're weakest.
--Review homework solutions, sample code, and reading quizzes.
--Be familiar with the system calls.



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



SAMPLE ESSAY QUESTION TOPICS:

Explain the system's view of a typical Unix file system (superblock, inode table, 
data area).

Explain the five methods discussed in class for getting help on a Unix system.

Explain the mode and how it is stored at the bit level.  How many bits, what each
bit is for, etc.

Explain what it means to be a directory in a Unix system.
