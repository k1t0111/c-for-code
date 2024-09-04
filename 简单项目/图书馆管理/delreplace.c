#include <stdio.h>
void delreplace()
{
   if(remove("D:\\idpasswd.txt")==0)
   printf("1"); 
   else
   perror("remove");
   rename("idpasswd1.txt","idpasswd.txt"); 
}
