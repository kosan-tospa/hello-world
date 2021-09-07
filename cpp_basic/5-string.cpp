#include <iostream>
#include <cstring>
int main()
{
    //char s[20];
    //std::cout << "enter name ";

    //get string

    // std::cin>>s; // takes just one word
    // std:cin.get (s,10) //takes max 10 char
    // std:cin.getline(s,10) //takes max 10 char reads one line

    //length
    //int len = strlen(s); // counts to \n

    // concatenation
    //strcat(destination,source);
    //strncat(destination,source,length);

    //copy
    //strcpy(destination,source);
    //strncpy(destination,source,length);

    //substr
    //strstr(main,sub); //

    // char main[20]="helloWorld";
    // char sub[10]="Wo";
    // std::cout <<strstr(main,sub)<<std::endl; // prints "World"

    //strchr
    // char main[20]="programing";
    // std::cout <<strchr(main,'r')<<std::endl; // prints "rograming"
    // std::cout <<strrchr(main,'p')<<std::endl; // prints "raming"  searches from right

    //compare
    //strcmp(str1,str) returns 0 if equal
    // if not equal returns the difference between ascii code eg: -32 or 32

    //convert string to long
    // char str1[10] = "235";
    // long int x = strtol(str1,NULL,10);

    //convert string to float
    //char str1[10] = "235.55";
    //float x = strtof(str1,NULL);

    //tokenizer
    //char str1[] = "x=1;y=2;z=3";
    // char *token = strtok(str1, "=;"); // splits between = ;
    // while (token != NULL)
    // {
    //      std::cout << token << " ";
    //      token = strtok(NULL, "=;");
    //  } // prints "x 1 y 2 z 3"   // strtok(str1, ";") prints "x=1 y=2 z=3"
    
    return 0;
}