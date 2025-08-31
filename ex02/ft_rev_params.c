 #include <unistd.h>

void ft_putstr(char *str){
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	
}

int main(int argc , char **argv){

       if (argc > 1)
    {
        int i = argc - 1;// did not ask to print name of program so skip oy
        while (i >=  1) //
        // started from the last one till the first one which is 1
        {
            ft_putstr(argv[i]);
            write(1, "\n", 1);
            i--;
        }
        
    }else{
         write(1, "\n", 1);
    }


}