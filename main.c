// Custom boilerplate: using configure user's snippet in the manage.
#include<stdio.h>


int main(int argc, char* argv[]){

    printf("You have entered %d Arguments are \n", argc);

    for(int i = 0;i<argc;++i){
        printf("%s \n", argv[i]); //argv[0] holds the name of the program. and argv[1] holds the first command types in the shell.
    }

    if(*argv[1] == '1'){
        printf("This is the 0th command \n");
    } else if(*argv[2] == '2'){
        printf("Openned Laptop");
    }else{
        printf("you can't do any thing else here please go away from here");
    }

    return 0;
}