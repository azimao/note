#include"stdio.h"
#include"malloc.h"
#define maxlen 80typedef struct
{ 
	char data[maxlen+1]; int len ;
} 
SeqString;int Index(SeqString *s,SeqString *t, int pos)
{
	int i,j;if(t->len==0)
	{ 
		printf("匹配为空\n");
	    return 0;
     }
	if(pos<1 || pos>s->len)
	{
		printf("位置错!") ; 
		return 0; }i=pos;
		j=1;
		while(i<=s->len && j<=t->len)
		{ 
			if(s->data[i]==t->data[j] )
			{ 
				i++; j++;
            }
			else 
			{ 
				i=i-j+2; 
				j=1; 
            }
     }
	if( j>t->len) return (i-t->len );
	else return (0);
	}
	int StrDelet(SeqString *s ,int pos, int len)
	{
		int i;
		if(pos<1 || pos>s->len){ printf("位置错! "); return 0; 
	} 
		for(i=pos+len; i<=s->len; i++) s->data[i-len]=s->data[i];
		s->len=s->len - len;
		return 1;
	}
	void Input (SeqString *s)
	{
		char ch;
		int i, n;
		i=1; 
		n=0;
		while ((ch=getchar())!='\n')
		{ 
			s->data[i]=ch; i++; n++;
		}
		s->len=n;
	}
	main()
	{
		int n, pos=1;
		SeqString *s1, *s2;
		s1=(SeqString *)malloc(sizeof(SeqString));
		s2=(SeqString *)malloc(sizeof(SeqString));
		printf("输入第一个串: ");
		Input(s1);printf("输入第二个串: ");
		Input(s2); 
		while(pos<=s1->len){ n=Index(s1,s2,pos);
		if( n!=0)
		{ pos=n; StrDelet(s1,pos,s2->len);
		}
		else break;
	}
		printf("处理后第一个串为: ");
		for(n=1;n<=s1->len; n++)
			printf("%c",s1->data[n]);
}
