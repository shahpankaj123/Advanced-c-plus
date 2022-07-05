#include<iostream>
#include<conio.h>
using namespace std;
class soccerplayer
{
	int jn,gn,an,x;
	public:
		soccerplayer(int a,int b,int c)
		{
			jn=a;
			gn=b;
			an=c;
			x=gn+an;
		}
		soccerplayer()
		{
			jn=0;gn=0;
			an=0;
		}
	void display()
	{
			cout<<"player who have more assists and goals:"<<endl;
			cout<<"jersey number:"<<jn<<endl;
			cout<<"Goal:"<<gn<<endl;
			cout<<"assists:"<<an<<endl;
	}
	   void operator >(soccerplayer m2)
	   {	
	   	if(m2.x>x)
	   	{
	   		jn=m2.jn;
	   		x=m2.x;
	   		gn=m2.gn;
	   		an=m2.an;
	   		
		}
	   }
	
};
 
int main()
{
	soccerplayer s[11];
	s[0]=soccerplayer(1,2,3);
	s[1]=soccerplayer(2,3,4);
	s[2]=soccerplayer(3,3,4);
	s[3]=soccerplayer(4,3,4);
	s[4]=soccerplayer(5,3,4);
	s[5]=soccerplayer(6,3,4);
	s[6]=soccerplayer(7,15,4);
	s[7]=soccerplayer(8,3,4);
	s[8]=soccerplayer(9,3,4);
	s[9]=soccerplayer(10,30,4);
	s[10]=soccerplayer(11,3,4);
	for(int i=1;i<=10;i++)
	{
	
		s[0]>s[i];
	}
	s[0].display();
	getch();
	return 0;
	
}

