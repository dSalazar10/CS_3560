//
//  fileManager.c
//  programs
//
//  Created by DANIEL SALAZAR on 4/12/18.
//

#include <stdio.h>
#include <stdbool.h>    /* bool */
#include <stdlib.h>     /* getenv */
#include <sys/dir.h>    /* dirent */
#include <errno.h>      /* perror */
#include <string.h>     /* strcmp */
/* sysctl*/
#include <sys/types.h>
#include <sys/sysctl.h>
/* getpwuid*/
#include <pwd.h>
#include <uuid/uuid.h>

char* fileType(__uint8_t d_type)
{
    switch(d_type)
    {
        case 1: return "FIFO";
        case 2: return "CHR";
        case 4: return "DIR";
        case 6: return "BLK";
        case 8: return "REG";
        case 10: return "LNK";
        case 12: return "SOCK";
        case 14: return "WHT";
        default: return "UNKNOWN";
    }
}
/* User info*/
char* userName()
{
    //Returns the logon name of the current user.
    return getenv("USER");
}
/* Discovering Directory Contents */
char* tempDir()
{
    //Returns the temporary directory for the current user.
    return "/tmp";
}
char* homeDir()
{
    //Returns the home directory for the current user.
    return NULL;
}

void contentsOfDir(char path[])
{
    //Performs a shallow search of the specified directory and returns the paths of any contained items.
}
char* pathsOfDir(char path[])
{
    //Returns the pathnames of all files and directories contained within that directory.
    return NULL;
}
char* subpathsOfDir(char path[])
{
    //Returns an array of strings identifying the paths for all items in the specified directory.
    return NULL;
}

/* Creating and Deleting Items */
bool createDir(char path[], char attr[])
{
    //Creates a directory with the given attributes at the specified path
    return false;
}
bool createFile(char path[], char data[], char attr[])
{
    //Creates a file with the specified content and attributes at the given location
    return false;
}
bool removeItem(char path[])
{
    //Removes the file or directory at the specified path.
    return false;
}

/* Moving and Copying Items */
bool moveItem(char src[], char dst[])
{
    //Moves the file or directory at the specified path to a new location
    //Delete src item
    return false;
}
bool copyItem(char src[], char dst[])
{
    //Copies the item at the specified path to a new location.
    //Duplicate src item
    return false;
}

/* Creating Symbolic and Hard Links */
bool createSymbolicLink(char src[], char dst[])
{
    //Creates a symbolic link that points to the specified destination.
    return false;
}
bool linkItem(char src[], char dst[])
{
    //Creates a hard link between the items at the specified paths.
    return false;
}
char* destinationOfSymbolicLink(char path[])
{
    //Returns the path of the item pointed to by a symbolic link.
    return NULL;
}


/* Determining Access to Files */
bool fileExists(char path[])
{
    //Returns a Boolean value that indicates whether a file or directory exists at a specified path.
    DIR *dirp;
    return ((dirp = opendir(path)) == NULL) ? (false) : (true);
}
bool isReadableFile(char path[])
{
    //Returns a Boolean value that indicates whether the invoking object appears able to read a specified file.
    return false;
}
bool isWritableFile(char path[])
{
    //Returns a Boolean value that indicates whether the invoking object appears able to write to a specified file.
    return false;
}
bool isExecutableFile(char path[])
{
    //Returns a Boolean value that indicates whether the operating system appears able to execute a specified file.
    return false;

}
bool isDeletableFile(char path[])
{
    //Returns a Boolean value that indicates whether the invoking object appears able to delete a specified file.
    return false;

}

/* Getting and Setting Attributes */
char* componentsToDisplay(char path[])
{
    //Returns an array of strings representing the user-visible components of a given path.
    return NULL;
}
char* displayName(char path[])
{
    //Returns the display name of the file or directory at a specified path.
    return NULL;
}
char* attributesOfItem(char path[])
{
    //Returns the attributes of the item at a given path.
    return NULL;
}
char* attributesOfFileSystem(char path[])
{
    //Returns a dictionary that describes the attributes of the mounted file system on which a given path resides.
    return NULL;
}
bool setAttributes(char path[], char attr[])
{
    //Sets the attributes of the specified file or directory.
    return false;

}

/* Getting and Comparing File Contents */
char* contents(char path[])
{
    //Returns the contents of the file at the specified path.
    return NULL;
}
bool contentsEqual(char src[], char dst[])
{
    //Returns a Boolean value that indicates whether the files or directories in specified paths have the same contents.
    return false;
}

void test()
{
    char *arg = "test";
    DIR *dirp;
    if ((dirp = opendir(".")) == NULL) {
        perror("couldn't open '.'");
        return;
    }
    
    struct dirent *dp;
    do {
        errno = 0;
        if ((dp = readdir(dirp)) != NULL) {
            if (strcmp(dp->d_name, arg) != 0)
                continue;
            
            
            printf("file number of entry: %llu\n", dp->d_fileno);
            printf("seek offset: %lld\n", dp->d_seekoff);
            printf("length of this record: %hu\n", dp->d_reclen);
            printf("length of string in d_name: %hu\n", dp->d_namlen);
            printf("file type: %s\n", fileType(dp->d_type));
            printf("name: %s\n", dp->d_name);
            
            (void) closedir(dirp);
            return;
            
            
        }
    } while (dp != NULL);
    if (errno != 0)
        perror("error reading directory");
    else
        (void) printf("failed to find %s\n", arg);
    (void) closedir(dirp);
    
    
    
    
}

int main(int argc, char *argv[])
{
    //test();
    if(fileExists("../hw2"))
        printf("exists");
    return 0;
}












