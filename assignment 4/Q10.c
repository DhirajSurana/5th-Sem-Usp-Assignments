/*
Q10.The system() function passes the command parameter to a command processor for execution. It
    behaves as if a child process were created with fork and the child process invoked sh with execl.
    Design choice based C code to run different shell commands, when the command will be entered
    from the stdin with ’yes’ choice. If ’no’ choice is given the program will terminate.
*/
#include <stdio.h>
#include<stdlib.h>
int main(){
    char chr ='y';
    int choice,status=1;
    while(chr=='y'){
        printf("1.echo 2.pwd 3.ls\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                system("echo hello");
                break;
            case 2:
                system("pwd");
                break;
            case 3:
                system("ls");
                break;

            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to continue?(y/n):\n");
        getchar();
    }
    return 0;
}