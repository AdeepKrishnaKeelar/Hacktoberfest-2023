/* Simple program for Directory Contents viewer in C using the dirent.h library */
/* Test Program in Linux based applications or WSL. In windows, dirent.h library needs to added to the library folder or path. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dirent.h>
int main(void) {  
    DIR *directory; //pointer for directory
    struct dirent *dir; //pointer to point to files of the directory
    char *path; //pointer to take the path name
    path=(char *)malloc(100*sizeof(char));
    scanf("%s",path);
    directory=opendir(path);
    //directory is opened and checked.
    if(directory) {
        while((dir=readdir(directory))!=NULL) {
            printf("%s\n",dir->d_name); //name of the files of the directory are printed.
        } 
        closedir(directory); //closing the directory
    } else {
        printf("Path not found!"); //if directory fails to open (-1)/(1)
    }
    return EXIT_SUCCESS;
}