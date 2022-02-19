    /*
    Q8. Let us consider a text file input.txt given below;

    Write a program to read the file and process the inputed file to swap the columns as shown below.
    Write swapped value into the file output.txt.
    */
    #include<stdio.h>
    #include<fcntl.h>
    #include<error.h>
    int main(){
        int fd1=open("input.txt",O_RDONLY);
        if(fd1==-1){
            perror("Open error");
            return 1;
        }
        int fd2=open("output.txt",O_WRONLY|O_CREAT);
        if(fd2==-1){
            perror("Open error");
            return 1;
        }
        char ch;
        int flag=0;
        char str1[2],str2[2];
        while((ch=fgetc(fd1))!=EOF){
            if(ch==" "){
                flag=1;
            }
            if(flag==0){
                str1+=ch;
            }
            else{
                str2+=ch;
            }
            if(ch=="\n"){
                write(fd2,str1,2);
                write(fd2," ",1);
                write(fd2,str2,2);
            }
        }
        close(fd1);
        close(fd2);
        return 0;
    }