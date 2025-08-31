#include <unistd.h>

int main(int argc , char **argv){
    if (argc == 1)
    {
        char *fileName = argv[0];
        int i = 0;
        while( fileName[i] != '\0'){
            write (1, &fileName[i], 1);
            i++;
        }
    }
    
   write (1, "\n",1);
    
}