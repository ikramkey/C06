 #include <unistd.h>

void ft_putstr(char *str){
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	
}


int ft_strcmp(char *str1 , char *str2){

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
    {
         i++;
    }

    return str1[i] - str2[i];
    
}

void sort_argc(int argc , char **argv){

    int i = 1;
   while(i < argc){
    int j = 1;
    while (j < argc - i - 1)
    {
        if (ft_strcmp(argv[j] , argv[j+1]) > 0)
        {
            char *temp = argv[j];
            argv[j] = argv[j+1];
            argv[j + 1] = temp;
        } 
        j++;
    }
    i++;

}

}

int main(int argc , char **argv){

    if (argc > 1)
    {
        sort_argc(argc , argv);
        int i = 1;
        while (i < argc)
        {
            ft_putstr(argv[i]);
            write(1, "\n", 1);
            i++;
        }
        
    }else{
        write(1, "\n", 1);
    }
    


}