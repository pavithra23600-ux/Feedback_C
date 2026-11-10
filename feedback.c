#include<stdio.h>

int main()

{
    
FILE*fp;
    
char ch;
    

fp = fopen("feedback.txt","w");
    
if(fp == NULL)
    
{
        
 printf("file opening fail\n");
        
 return 0;
    
}
    
 
 fprintf(fp,"feedback about the c program\n");
 
 fprintf(fp,"1:C program is my first programing language\n");
  
 fprintf(fp,"2:I learn basics of coding\n");
   
 fprintf(fp,"3:It improves my logical thinking and program solving skills\n");

 fprintf(fp,"4:somtimes programs are difficult\n");
    
 fprintf(fp,"5:I enjoy learning c language\n");
    
 fclose(fp);



fp = fopen("feedback.txt","a");

    
if(fp == NULL)
    
{
       
   printf("file opening file\n");
   
   return 0;
   
}

    
 fprintf(fp,"feedback about c sir\n");
 
 fprintf(fp,"1:Sir teaches c programing in good way\n");
 
 fprintf(fp,"2:He explains the programs and clear our doubts\n");
  
 fprintf(fp,"3:Some concepts are difficult,but his teaching helps me understand\n");
 
 fprintf(fp,"4:I hope to learn more and improve futher\n");
 
 fprintf(fp,"5:I would like to learn more from his classes\n");
 
 fclose(fp);
 
 

fp = fopen("feedback.txt","r");
 
 
while((ch = fgetc(fp))!= EOF)
 
{
  
   printf("%c",ch);
 
}
   
 fclose(fp);
   
 return 0;

}
    