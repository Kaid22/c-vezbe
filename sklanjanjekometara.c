#include <stdio.h>
#define MAX 100

void ispisi(int pocetak,int kraj,char* s){
	int i;
	for(i=pocetak;i<kraj;i++){
		printf("%c",s[i]);
	}
}
int main()
{
	char s[MAX];
	int i;
	int br=0;
	int pocetak=0,kraj;
	printf("unesite string iz kojeg zelite da sklonite komentar: ");
	scanf("%s",&s);
	while(s[i]!='\0'){		
		if(s[i]=='/' && s[i+1]=='*'){			
				kraj=i;
				ispisi(pocetak,kraj,s);
		}
		if(s[i]=='*' && s[i+1]=='/'){		
				pocetak=i+2;			
		}	
		i++;
	}
	kraj=strlen(s);
	ispisi(pocetak,kraj,s);
 return 0;
}
