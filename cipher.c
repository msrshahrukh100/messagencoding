#include <stdio.h>
#include <string.h>
char pw[10] ;
void sort()
{
	int i,j;
	char temp;
	int l=strlen(pw);
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-1-i;j++)
		{
			if(pw[j]>pw[j+1])
			{
				temp = pw[j];
				pw[j] = pw[j+1];
				pw[j+1]=temp;
			}
		}
	}
}



int main()
{
	
	int i,j,n;
	char store[10][100],text[100],k=0,x=1,y=0;

	printf("\nEnter the password in small letters without spaces: ");
	scanf("%s",pw);

	printf("\nEnter the text in small letters without spaces: ");
	scanf("%s",text);

	int l=strlen(pw), m=strlen(text);

	for (i=0;i<l;i++)
		store[0][i] = pw[i];

	sort(pw);

	for (i=0;i<m;i++)
	{
		store[x][y++]=text[i];

		if (y == l)
		{
			y=0;
			x++;
		}

	}

	if(y < l)
	{
		while(y!=l)
			store[x][y++] = '$';
	}
	
	printf("\nCreating code ......\n");

	for(i=0;i<x+1;i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%c\t",store[i][j]);
			/* code */
		}
		printf("\n");
	}
	
	printf("\nThe coded statement is : ");

	int t = 0;

	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(pw[i] == store[0][j])
				for(k=0;k<x+1;k++)
					printf("%c", store[k][j]); 
		}
	}
	printf("\n");
}
