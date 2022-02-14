#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
char name[20];
struct reln
{
char child[20];
char father[20];
}r[10];
int count=0;

void countChildren(char name[])
{

    int j;
   for(j=0;j<n;j++)
        {
        if(strcmp(name,r[j].father)==0)
            {
            count++;
            countChildren(r[j].child);
            }
        }
    }


int main(){
    FILE *fp;
    int i=0;
    char *words=NULL,*word=NULL,c;
    if ((fp=fopen("setb.txt","r"))==NULL){ 
        printf("Error Opening File\n");
       // exit(1);
}
    while ((c = fgetc(fp))!= EOF){
        if (c=='\n'){ c = ' '; }
        words = (char *)realloc(words, ++i*sizeof(char));
        words[i-1]=c;
        }
    word=strtok(words," ");
    while(word!= NULL){
        printf("%s\n",word);
        word = strtok(NULL," ");
	
}
    //exit(0);

printf("hii %s",word);

printf("%shello",r[i].child);


printf("\nEnter name of the one whose no. of grandchildren is needed: ");
scanf("%s",name);
for(i=0;i<n;i++)
    {
    if(strcmp(r[i].father,name)==0)
        countChildren(r[i].child);
    }

printf("\nNo .of grandchildren of %s=%d",name,count);

scanf("%s",name);
for(i=0;i<n;i++)
    {
    if(strcmp(r[i].father,name)==0)
        countChildren(r[i].child);
    }
printf("\nNo .of grandchildren of %s=%d",name,count);
}

