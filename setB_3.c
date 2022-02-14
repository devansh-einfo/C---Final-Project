#include<stdio.h>
#include<string.h>
char* rem(char* str, int n){
	if(n==0){
		return str;			
	}
int i, k = 0;
int len = strlen(str);
for(i=1;i<len;i++){
	if(str[i-1] != str[i]){
			str[k++] = str[i - 1];	
		}
	else{
		while(i<len && str[i-1] == str[i]){
			i++;
			break;		
		}	
	}
	}
str[k++] = str[i-1];
str[k] = '\0';
if(k!=n){
	return rem(str, k);	
	}
	return str;
}
int main(void){
 char str[20];
	printf("Enter string: \n");
	scanf("%s", str);
	int n = strlen(str);
	printf("After removal: %s\n", rem(str, n));
	
	return 0;
}

