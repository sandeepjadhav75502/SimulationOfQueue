#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<ctype.h>
#include<alloc.h>
#include<stdlib.h>
class qnode
{
	char data[20];
	qnode *next;
	public:
	void getdata()
	{
	cout<<"\n enter any sweet name : ";
	gets(data);
	fflush(stdin);
	}
	void putdata()
	{
	cout<<"\n data : "<<data;
	}
friend class queue;
};
class queue
{       int len,flag;
	qnode *rear,*front;
	public:
	queue(){rear=front=NULL;len=0;}
	void create();
	void display();
	void insert(char *item);
	void inserts();
	void deletes();
	void search();
	void loadgraph();
	void homescreen();
	void simu();
	void menu();
	void reverse();
};
char choice;
void queue::menu()
{
	cleardevice();

	int x1=100,y1=30,x2=300,y2=110,i,j=2;
	setcolor(14);
	settextstyle(7,0,1);

	for(i=1;i<=2;i++)
	{
		setcolor(14);
		setfillstyle(1,j++);
		rectangle(x1,y1,x2,y2);
		floodfill(x1+1,y1+1,14);

		setcolor(15);
		setfillstyle(7,1);
		circle(x1+30,y1+40,15);
		floodfill(x1+31,y1+41,15);


		x1=x1+250;x2=x2+250;
		delay(100);
	}

	outtextxy(125,60,"C");
	outtextxy(375,60,"D");
	setcolor(14);settextstyle(1,0,1);
	outtextxy(150,60,"CREATE QUEUE");
	outtextxy(400,60,"DISPLAY QUEUE");


	y1=140,y2=220;x1=100,x2=300;
	for(i=1;i<=2;i++)
	{
		setcolor(14);
		setfillstyle(1,j++);
		rectangle(x1,y1,x2,y2);
		floodfill(x1+1,y1+1,14);

		setcolor(15);
		setfillstyle(5,1);
		circle(x1+30,y1+40,15);
		floodfill(x1+31,y1+41,15);

		x1=x1+250;x2=x2+250;
		delay(100);
	}

	outtextxy(125,170,"I");
	outtextxy(375,170,"R");
	setcolor(2);settextstyle(1,0,1);
	outtextxy(150,170,"INSERT ITEM");
	outtextxy(400,170,"REMOVE ITEM");



	y1=240,y2=320;x1=100,x2=300;j=8;
	for(i=1;i<=2;i++)
	{
		setcolor(14);
		setfillstyle(1,j++);
		rectangle(x1,y1,x2,y2);
		floodfill(x1+1,y1+1,14);

		setcolor(15);
		setfillstyle(9,1);
		circle(x1+30,y1+40,15);
		floodfill(x1+31,y1+41,15);
		x1=x1+250;x2=x2+250;
		delay(100);
	}

	outtextxy(125,270,"S");
	outtextxy(375,270,"M");
	setcolor(15);settextstyle(1,0,1);
	outtextxy(150,270,"SEARCH FROM Q");
	outtextxy(410,270,"SIMULATION ");



	y1=340,y2=420;x1=100,x2=300;
	for(i=1;i<=2;i++)
	{
		setcolor(14);
		setfillstyle(1,j++);
		rectangle(x1,y1,x2,y2);
		floodfill(x1+1,y1+1,14);

		setcolor(15);
		setfillstyle(9,1);
		circle(x1+30,y1+40,15);
		floodfill(x1+31,y1+41,15);
		x1=x1+250;x2=x2+250;
		delay(100);
	}

	outtextxy(125,370,"E");
	outtextxy(375,370,"X");
	setcolor(4);settextstyle(1,0,1);
	outtextxy(150,370,"REVERSING Q");
	outtextxy(430,370,"EXIT");
       choice=getche();


}

void queue::create()
{
	clrscr();
	cleardevice();
	setbkcolor(0);
	setcolor(9);
	int chrlen=0;
	qnode *newnode;
	gotoxy(40,5);
	outtextxy(50,100,"enter the length of queue ");
	gotoxy(20,10);
	cin>>len;

	if(len>10){settextstyle(7,0,4);setcolor(4);outtextxy(10,200,"ENTER LENGTH OF Q ONLY UP TO 10");getch();return;}

	for(int i=0;i<len;i++)
	{
		come:
	      newnode=new qnode;
	      newnode->getdata();
	      chrlen=strlen(newnode->data);  //given length of string
	      if(chrlen>7){cout<<"\n enter only upto 7 characters..\n\n";getch();goto come;}
	       if(i==0)
		{
			front=rear=newnode;
			continue;
		}
	   rear->next=newnode;
	   rear=newnode;
	}
	rear->next=NULL;

}

void queue::display()
{

	cleardevice();





				if(front==NULL)
				{
				rear=NULL;
				cleardevice();setcolor(14);setfillstyle(5,4);
				floodfill(10,10,14);
				settextstyle(10,0,1);
				outtextxy(10,200," QUEUE IS EMPTY FIRST CREATE QUEUE.....");getch();return;
				}
	settextstyle(7,0,1);

	qnode *dnode;
	char str[10];
void *image;
char num[2];
int x1=500,y1=50,x2=600,y2=100,trk=50,i=1,k1=100;
//setfillstyle(1,i);
//setcolor(15);
//rectangle(x1,y1,x2,y2);
//floodfill(x1+1,y1+1,15);
int size=imagesize(x1,y1,x2,y2);
image=malloc(size);
getimage(x1,y1,x2,y2,image);
for(i,dnode=front;(dnode!=NULL)&&(i<=len);i++,dnode=dnode->next)
{


	if(trk>=500)
	{
	       x1=500,y1=200,x2=600,y2=250,trk=50;
	       k1=200;
	       line(500,200,500,250);
	       line(100,200,500,200);
	     //  getimage(x1,y1,x2,y2,image);
	}
	setfillstyle(1,i);
	setcolor(15);
	rectangle(x1,y1,x2,y2);
	floodfill(x1+1,y1+1,15);
	getimage(x1,y1,x2,y2,image);

	for(int j=y1;j<=k1;)
	{
	   putimage(x1,j,image,XOR_PUT);
	   j+=50;
	   putimage(x1,j,image,XOR_PUT);
	   delay(50);
	}
	for(int k=x1;k>=trk;)
	{
	   putimage(k,j,image,XOR_PUT);
	   k-=100;
	   putimage(k,j,image,XOR_PUT);
	   delay(50);
	}
	itoa(i,num,10);
	outtextxy(trk,k1+30,num);
	strcpy(str,dnode->data);
	outtextxy(trk-30,k1+65,str);
	trk+=100;
}
	trk=trk-100;
	line(40,150,40,50);
	line(40,50,100,50);
	outtextxy(100,37,">>> : FRONT");
	line(trk,k1+100,trk,k1+200);
	line(trk,k1+200,trk+50,k1+200);
	outtextxy(trk+50,k1+187,">>> : REAR");
getch();
free(image);
}





void queue::reverse()
{

cleardevice();
display();
		settextstyle(7,0,1);setcolor(12);
		outtextxy(110,70,"BEFORE REVERSING YOUR QUEUE");
		getch();
		setfillstyle(1,0);
		bar(90,60,500,90);setcolor(14);
		outtextxy(110,70,"NOW QUEUE IS REVERSING....");
		delay(2000);
	qnode *oldnode,*current,*nextnode;
	current=front;
	oldnode=NULL;
		do
		{
		nextnode=current->next;
		current->next=oldnode;
		oldnode=current;
		current=nextnode;
		}while(current!=NULL);
	front=oldnode;
	setfillstyle(1,0);
	bar(90,60,500,90);setcolor(15);
	settextstyle(7,0,1);
	outtextxy(100,70,"QUEUE IS SUCCESSFULLY REVERSED...");
	getche();
	display();
	settextstyle(7,0,1);setcolor(14);
	outtextxy(100,60,"AFTER REVERSING YOUR QUEUE");
getche();
}










void queue::simu()
{

				if(front==NULL)
				{
				rear=NULL;
				cleardevice();setcolor(14);setfillstyle(5,4);
				floodfill(10,10,14);
				settextstyle(10,0,1);
				outtextxy(10,200," QUEUE IS EMPTY FIRST CREATE QUEUE.....");getch();return;
				}


	char ch;
	void *image;

   do
   {
	clrscr();cleardevice();
	qnode *dnode;char str[10];
	int x1=250,x2=350,y1=400,y2=430,r=5,m=130,k=1,h=130;

	setfillstyle(1,3);setcolor(12);
	ellipse(300,50,0,360,100,40);
	ellipse(300,50,0,360,95,35);
	fillellipse(300,50,90,30);
	setcolor(4);
	settextstyle(11,0,1);
	outtextxy(280,30,"SIBAR");
	outtextxy(250,45,"C A N T E E N");
	outtextxy(280,60,"COUNTER");

	int size=imagesize(x1,y1,x2,y2);
	image=malloc(size);
	getimage(x1,y1,x2,y2,image);
	for(dnode=front;(dnode!=NULL)&&(k<=len);dnode=dnode->next,k++)
	{
		strcpy(str,dnode->data);
		setcolor(15);
		setfillstyle(1,++r);
		rectangle(x1,y1,x2,y2);
		floodfill(x1+1,y1+1,15);
		getimage(x1,y1,x2,y2,image);

		for(int n=600;n>x1;)
		{
			putimage(n,400,image,XOR_PUT);
		//	outtextxy(n,400,str);
			n=n-50;
			putimage(n,400,image,XOR_PUT);
		  //	setfillstyle(1,0);
		   //	bar(n,350,n+50,450);
			delay(30);
		}

		for(int s=y1;s>=m;)
		{
		putimage(x1,s,image,XOR_PUT);
	      //	outtextxy(n+20,s+5,str);delay(30);
		s=s-30;
		putimage(x1,s,image,XOR_PUT);
		setfillstyle(1,r);
	      //	bar(n+20,s+5,n+60,s+20);
		delay(30);
		}
		outtextxy(n+20,s+10,str);
		m=m+30;
	}
	setfillstyle(0,15);
	bar(x1,y1,x2,y2);
	setcolor(14);
	outtextxy(x1-100,110,"FRONT ->>>");
	outtextxy(x2+10,m-50,"<<<--REAR");

	setcolor(14);
	setfillstyle(1,2);
	settextstyle(7,0,1);

	circle(80,175,12);
	floodfill(81,176,14);
	outtextxy(72,162,"P");
	outtextxy(100,160,"PUSH");

	circle(80,205,12);
	floodfill(81,206,14);
	outtextxy(75,192,"O");
	outtextxy(100,190,"POP");

	circle(80,235,12);
	floodfill(81,236,14);
	outtextxy(74,222,"S");
	outtextxy(100,220,"SEARCH");

	setfillstyle(1,4);
	circle(80,265,12);
	floodfill(81,266,14);
	outtextxy(72,252,"X");
	outtextxy(100,250,"MAIN MENU");

    go:

	settextstyle(7,0,1);
	do
	{
		setcolor(3);
		outtextxy(10,300,"ENTER YOUR CHOICE");delay(200);
		setcolor(0);
		outtextxy(10,300,"ENTER YOUR CHOICE");delay(200);
	}while(!kbhit());
	ch=getche();
	switch(ch)
	{
		case 'o':
				setcolor(15);
				setfillstyle(1,r++);settextstyle(11,0,1);
			       //	rectangle(x1,130,x1+100,160);
			       //	floodfill(x1+1,131,15);
				getimage(x1,100,x1+100,130,image);
				for(int p=x1;p<=400;)
				{
					putimage(p,100,image,XOR_PUT);
					p=p+100;
					putimage(p,100,image,XOR_PUT);
					delay(500);
				}
			qnode *del,*d;int t=100;
			del=front;
			front=front->next;len--;
			delete(del);
				setfillstyle(0,15);
				bar(x1,100,x1+100,130);
				setfillstyle(1,r++);
				getimage(p,100,p+100,130,image);
				for(t;t<=600;)
				{
					putimage(p,t,image,XOR_PUT);
					t=t+30;
					putimage(p,t,image,XOR_PUT);
					delay(50);
				}
				      x1=250;x2=350;y1=100;y2=130;r=6;
				for(d=front;d!=NULL;d=d->next)
				{
					strcpy(str,d->data);
				setfillstyle(1,0);
				bar(x1,y1,x2,y2);
				delay(1100);

				setcolor(15);
				setfillstyle(1,r++);
				outtextxy(x1+10,y1+10,str);
				rectangle(x1,y1,x2,y2);

				floodfill(x1+1,y1+1,15);

				putimage(x1,y1,image,XOR_PUT);

				putimage(x1,y1,image,XOR_PUT);
				y1=y1+30;y2=y2+30;

			       //	delay(100);

			   }
				delay(1000);
				setfillstyle(1,0);
				bar(x1,y1,x2,y2+50);
				bar(x2+10,m-80,x2+100,m+140);
				if(len<1)
				{
				    bar(150,100,500,150);
				      settextstyle(11,0,10);setcolor(3);
				    outtextxy(340,240,"PRESS ANY KEY TO MAIN MENU");
				    settextstyle(7,1,4);
				    while(!kbhit())
				    { setcolor(12);outtextxy(270,120,"QUEUE UNDERFLOW");delay(200);
				     setcolor(0);outtextxy(270,120,"QUEUE UNDERFLOW");delay(200);
				    }
				    getch();
				    return;
				}
				else
				{
				outtextxy(x2+10,m-80,"<<<--REAR");
				m=m-30;
				delay(1000);
				}
			goto go;

	case 'p':

				if(len>9)
				{        settextstyle(10,0,1);
				       while(!kbhit())
				       {
				       setcolor(12);outtextxy(370,200,"QUEUE OVERFLOW ");delay(200);
				       setcolor(0);outtextxy(370,200,"QUEUE OVERFLOW ");delay(200);
				       }
				       continue;
				}
			       settextstyle(7,0,1);setcolor(15);
			x1=250,x2=350,y1=400,y2=430,r=5;char item[10];
			outtextxy(10,325,"ENTER ITEM NAME");gotoxy(10,23);cin>>item;
			insert(item);
			setfillstyle(1,0);
			bar(10,325,215,425);//remove entered item and text


			setcolor(15);
			setfillstyle(1,r++);
			rectangle(x1,y1,x2,y2);
			floodfill(x1+1,y1+1,15);
			getimage(x1,y1,x2,y2,image);

			for(int n=600;n>x1;)
			{
				putimage(n,400,image,XOR_PUT);
				n=n-50;
				putimage(n,400,image,XOR_PUT);
				delay(30);
			}

			for(int s=y1;s>=m;)
			{
			putimage(x1,s,image,XOR_PUT);
			s=s-30;
			putimage(x1,s,image,XOR_PUT);
			delay(30);
			}
			settextstyle(11,0,1);
			outtextxy(x1+10,m-20,item);
			setfillstyle(0,15);
			bar(x1,y1,x2,y2);//removes bottom rectangle
			bar(x2+10,m-60,x2+100,m);
			outtextxy(x2+10,m-20,"<<<--REAR");
			m=m+30;
			delay(1000);
		      //	getch();
		      goto go;

	 case 's':
			dnode=front;int sr=1,pos,flag=-1;setcolor(14);
			outtextxy(20,320,"enter the item name");gotoxy(7,23);
			cin>>item;settextstyle(11,0,2);
			for(dnode;(dnode!=NULL)&&(sr<=len);dnode=dnode->next,sr++)
			{
				strcpy(str,dnode->data);
				if(strcmp(item,dnode->data)==0)
				{
					pos=sr;flag=1;
					break;
				}
				setfillstyle(1,0);
				bar(x1,h-30,x1+100,h);
				delay(100);
				setcolor(14);
				setfillstyle(3,sr);
				outtextxy(x1+10,h-25,str);
				rectangle(x1,h-30,x1+100,h);
				floodfill(x1+1,h-29,14);
				h=h+30;
				delay(50);
			}
			if(flag==-1)
			{
				settextstyle(7,0,2);
				while(!kbhit())
				{
					setcolor(0);outtextxy(450,200,"item not found...");delay(200);
					setcolor(15);outtextxy(450,200,"item not found...");delay(200);
				}break;
			}
			delay(500);

			getimage(x1,h-30,x1+100,h,image);
			for(int n1=x1;n1<=450;)
			{
				putimage(n1,h-30,image,XOR_PUT);
				n1=n1+50;
				putimage(n1,h-30,image,XOR_PUT);
				delay(50);
			}
			delay(2000);
			putimage(x1,h-30,image,XOR_PUT);
			outtextxy(500,h+10,"ITEM FOUND....");
			outtextxy(495,h+30,"LOCATION  : ");
			outtextxy(495,h+40,"ITEM NAME : ");
			outtextxy(585,h+40,item);
			itoa(pos,item,10);
			outtextxy(585,h+30,item);
			rectangle(480,h-45,630,h+55);

			getch();
			break;

	case 'x':break;

	default:goto go;
    }
   }while(ch!='x');
//getch();
free(image);
}



void queue::insert(char *item)
{
	qnode *newnode;
	newnode=new qnode;
	       if(newnode==NULL){cout<<"\n \n QUEUE OVERFLOW......\n";return;}
		if(len>9){cout<<"\n \n QUEUE OVERFLOW......\n";getch();return;}
	strcpy(newnode->data,item);
	rear->next=newnode;
	rear=newnode;
	rear->next=NULL;
	len++;
}


void queue::inserts()
{
cleardevice();




				if(front==NULL)
				{
				rear=NULL;
				cleardevice();setcolor(14);setfillstyle(1,4);
				floodfill(10,10,14);
				settextstyle(10,0,1);
				outtextxy(10,200," QUEUE IS EMPTY FIRST CREATE QUEUE.....");getch();return;
				}

				if(len>9)
				{
				setcolor(14);
				setfillstyle(1,4);
				floodfill(10,10,14);
				settextstyle(10,0,2);
					while(!kbhit())
					{
					setcolor(14);outtextxy(100,200,"QUEUE OVERFLOW....");delay(200);
					setcolor(4);outtextxy(100,200,"QUEUE OVERFLOW....");delay(200);
					}
				 cleardevice();
				return;
				}


settextstyle(7,0,1);
qnode *dnode;dnode=front;
void *image;
char num[2],item[10],info[10];
int x1=500,y1=50,x2=600,y2=100,trk=50,i=1,k1=100,flag=1;
int size=imagesize(x1,y1,x2,y2);
image=malloc(size);
getimage(x1,y1,x2,y2,image);
go:
for(i;i<=len;i++)
{


	if((trk>=500)&&(flag==1))
	{
	       x1=500,y1=200,x2=600,y2=250,trk=50;
	       k1=200;
	       line(500,200,500,250);
	       line(100,200,500,200);
	}
	setfillstyle(1,i);
	setcolor(14);
	rectangle(x1,y1,x2,y2);
	floodfill(x1+1,y1+1,14);
	getimage(x1,y1,x2,y2,image);

	for(int j=y1;j<=k1;)
	{
	   putimage(x1,j,image,XOR_PUT);
	   j+=50;
	   putimage(x1,j,image,XOR_PUT);
	   delay(50);
	}
	for(int k=x1;k>=trk;)
	{
	   putimage(k,j,image,XOR_PUT);
	   k-=100;
	   putimage(k,j,image,XOR_PUT);
	   delay(50);
	}
	itoa(i,num,10);
	outtextxy(trk,k1+30,num);
	strcpy(info,dnode->data);
	outtextxy(trk-30,k1+60,info);
	trk+=100;dnode=dnode->next;
}
	trk=trk-100;
	line(40,150,40,50);
	line(40,50,100,50);
	outtextxy(100,37,">>> : FRONT");
	line(trk,k1+100,trk,k1+150);
	line(trk,k1+150,trk+50,k1+150);
	outtextxy(trk+50,k1+137,">>> : REAR");

	if(flag==1)
	{
		getch();


		setfillstyle(1,0);bar(trk,k1+100,trk,k1+150);
		bar(trk-60,k1+135,trk+200,k1+220);
		flag=0;trk=trk+100;
		outtextxy(200,350,"ENTER ITEM NAME");gotoxy(25,25);cin>>item;
		bar(190,340,400,370);
		 if(len==5){x1=500,y1=200,x2=600,y2=250,trk=50;k1=200;}
		insert(item);
		goto go;

	}
	outtextxy(trk-30,k1+60,item);



free(image);
getch();
}






void queue::deletes()
{
	cleardevice();settextstyle(11,0,4);





				if(front==NULL)
				{
				rear=NULL;
				cleardevice();setcolor(14);setfillstyle(1,0);
				floodfill(10,10,14);
				settextstyle(10,0,2);
					while(!kbhit())
					{
					setcolor(0);outtextxy(100,200," QUEUE IN UNDERFLOW");delay(200);
					setcolor(14);outtextxy(100,200," QUEUE IN UNDERFLOW");delay(200);
					}
				return;
				}

	int x1=250,x2=350,y1=400,y2=440,r=5,m=20;
	void *image;
	qnode *delnode,*t;
	int size=imagesize(x1,y1,x2,y2);
	image=malloc(size);
	getimage(x1,y1,x2,y2,image);
	t=front;char str[10];
	for(int k=1;(t!=NULL)&&(k<=len);k++,t=t->next)
	{
		setcolor(15);
		setfillstyle(1,r++);
		rectangle(x1,y1,x2,y2);
		floodfill(x1+1,y1+1,15);
		getimage(x1,y1,x2,y2,image);

		for(int n=600;n>x1;)
		{
			putimage(n,400,image,XOR_PUT);
			n=n-50;
			putimage(n,400,image,XOR_PUT);
			delay(30);
		}

		for(int s=y1;s>=m;)
		{
		putimage(x1,s,image,XOR_PUT);
		s=s-40;
		putimage(x1,s,image,XOR_PUT);
		delay(30);
		}
		strcpy(str,t->data);
		outtextxy(x1+10,m,str);
	m=m+40;
	}
	setfillstyle(0,15);
	bar(x1,y1,x2,y2);

		outtextxy(165,15,"FRONT -->>");
		outtextxy(x2+5,m-40,"<<--REAR");

		while(!kbhit())
		{
		setcolor(14);outtextxy(10,100,"before item deleting ur list");delay(200);
		setcolor(0);outtextxy(10,100,"before item deleting ur list");delay(200);
		}

	setfillstyle(1,0);bar(20,90,200,120);
	getche();

		while(!kbhit())
		{
		setcolor(0); outtextxy(5,100,"now item in deleting process");delay(200);
		setcolor(3);outtextxy(5,100,"now item in deleting process");delay(200);

		}



delnode=front;
front=front->next;
len--;
delete(delnode);

	 setcolor(15);
	line(445,200,445,345);
	line(442,200,442,345);
	line(442,200,445,200);
	line(555,200,555,345);
	line(558,200,558,345);
	line(555,200,558,200);
	line(445,345,555,345);

	 setcolor(7);
	setfillstyle(9,14);
	ellipse(495,390,0,360,100,20);
	fillellipse(495,390,100,20);
	floodfill(441,391,7);

	setcolor(4);
	setfillstyle(2,1);
	rectangle(440,340,560,380);
	floodfill(441,341,4);
	setcolor(15);settextstyle(7,0,1);
	outtextxy(480,350,"BIN");



       //	getche();

	 getimage(x1,0,x1+100,40,image);
	for(int xs=x1;xs<=400;)
	{
		putimage(xs,0,image,XOR_PUT);
		 xs=xs+100;
		putimage(xs,0,image,XOR_PUT);
		delay(1000);
	}
	for(int ys=0;ys<=250;)
	{
		putimage(xs,ys,image,XOR_PUT);
		ys=ys+50;
		putimage(xs,ys,image,XOR_PUT);
		delay(100);
	}

	setfillstyle(1,0);bar(5,90,230,120);
	getche();
		while(!kbhit())
		{
		setcolor(15);outtextxy(5,100,"item deleted succussfully");delay(200);
		setcolor(0); outtextxy(5,100,"item deleted succussfully");delay(200);
		}
		bar(5,90,230,120);

		getche();
		setcolor(14);
		outtextxy(20,100,"arranging the list");


	settextstyle(11,0,4);
	x1=400;x2=500;y1=0;y2=40;r=5;
	t=front;
	for(k=1;(t!=NULL)&&(k<=len);k++,t=t->next)
	{
		setfillstyle(1,0);
		bar(x1-150,y1,x2-150,y2);
		delay(1100);

		setcolor(15);
		setfillstyle(1,r++);
		rectangle(x1-150,y1,x2-150,y2);
		floodfill(x1-149,y1+1,15);
		putimage(x1+150,y1,image,XOR_PUT);
		strcpy(str,t->data);
		outtextxy(x1-140,y1+15,str);
		y1=y1+40;y2=y2+40;
		putimage(x1+150,y1,image,XOR_PUT);
	       //	delay(100);

	   }

		setfillstyle(1,0);
		bar(x1-50,m-50,x1+20,m+50);
		delay(1000);
		setfillstyle(1,0);
		bar(x1-150,y1,x2-150,y2+50);
		outtextxy(x1-50,m-80,"<<--REAR");
		getche();
		if(len<=0)
		{
		cleardevice();settextstyle(7,0,4);
		while(!kbhit())
		{
		setcolor(14);outtextxy(100,200,"NOW QUEUE IS EMPTY");delay(200);
		setcolor(0); outtextxy(100,200,"NOW QUEUE IS EMPTY");delay(200);
		}
		}
	 //	getch();
		getche();
free(image);
}






void queue::search()
{

			if(front==NULL)
			{
			rear=NULL;
			cleardevice();setcolor(14);setfillstyle(6,3);
			floodfill(10,10,14);
			settextstyle(10,0,1);
			outtextxy(10,200," QUEUE IS EMPTY FIRST CREATE QUEUE.....");getch();return;
			}



	cleardevice();
	settextstyle(11,0,4);
	int x1=350,x2=450,y1=400,y2=440,r=5,m=20,k=1,pos=0;
	char item[10],str[10];
	void *image;
	qnode *d;
	int size=imagesize(x1,y1,x2,y2);
	image=malloc(size);
	getimage(x1,y1,x2,y2,image);
	for(k,d=front;(d!=NULL)&&(k<=len);k++,d=d->next)
	{
		setcolor(15);
		setfillstyle(1,r++);
		rectangle(x1,y1,x2,y2);
		floodfill(x1+1,y1+1,15);
		getimage(x1,y1,x2,y2,image);

		for(int n=600;n>x1;)
		{
			putimage(n,400,image,XOR_PUT);
			n=n-50;
			putimage(n,400,image,XOR_PUT);
			delay(30);
		}

		for(int s=y1;s>=m;)
		{
		putimage(x1,s,image,XOR_PUT);
		s=s-40;
		putimage(x1,s,image,XOR_PUT);
		delay(30);
		}
		strcpy(str,d->data);
		outtextxy(x1+10,m,str);
		m=m+40;
	}

	setfillstyle(0,15);
	bar(x1,y1,x2,y2);
	settextstyle(11,0,4);setcolor(14);
	outtextxy(100,150,"ENTER ITEM TO BE SEARCH");
	gotoxy(20,12);cin>>item;
	setfillstyle(1,0);
	bar(90,140,300,200);

	outtextxy(50,100,"ITEM SEARCHING....");
	y1=0;y2=40;
	for(k=1,d=front;(k<=len)&&(d!=NULL);k++,d=d->next)
	{

		setfillstyle(1,0);
		bar(x1,y1,x2,y2);
		delay(500);
		setcolor(15);
		setfillstyle(9,k);
		rectangle(x1,y1,x2,y2);
		floodfill(x1+1,y1+1,15);
		strcpy(str,d->data);
		outtextxy(x1+10,y1+10,str);
		y1=y2;y2=y2+40;
		delay(500);
		if(strcmp(d->data,item)==0)
		{
			pos=k;break;
		}

	}
		setfillstyle(1,0);
		bar(40,90,200,110);
	     if(pos==0)
	     {
		settextstyle(7,0,2);setcolor(12);
		outtextxy(20,100,"ITEM NOT FOUND. . .");
		getch();return;
	     }

	y1=(40*pos)-40;
	getimage(x1,y1,x2,y1+40,image);
	for(int j=x1;j>=100;)
	{
		putimage(j,y1,image,XOR_PUT);
		j=j-100;
		putimage(j,y1,image,XOR_PUT);
		delay(500);

	}
	putimage(x1,y1,image,XOR_PUT);
	outtextxy(55,y1+50,"ITEM FOUND...");
	outtextxy(50,y1+70,"LOATION   : ");
	itoa(pos,str,10);
	outtextxy(150,y1+70,str);
	outtextxy(50,y1+80,"ITEM NAME : ");
	outtextxy(150,y1+80,item);

	getch();
	free(image);
}




////////////////////////////////////////////////////////////////////////////////
//This function loads , graph driver and mode

void queue::loadgraph()
{
  clrscr();
  int driver = DETECT, mode, errorcode;
  initgraph(&driver, &mode, "c:\\tc\\bgi");
  errorcode = graphresult();
  if (errorcode != grOk)
     {
    cout<<"Graphics error: \n"<<(grapherrormsg(errorcode));
    cout<<"Press any key to halt:";
    getch();
    exit(1);
    }
}
////////////////////////////END OF LOAD GRAPH FUNCTION ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////




void queue::homescreen()
{

	int j=0;
	clrscr();
	setbkcolor(0);
	  // setcolor(15);
	setfillstyle(1,0);
	floodfill(10,10,15);
	do
	{
       //	cleardevice();
	setfillstyle(7,13);
	setbkcolor(0);
	setcolor(j+1);
	settextstyle(10,0,2);
	outtextxy(110,110,"SIMULATION OF QUEUE");
	rectangle(105,100,500,160);
	floodfill(109,105,j+1);
	j=j+1;
	delay(100);
	if(j==12)j=0;
	if(j%2==1)
	{
	setfillstyle(2,10);
	setcolor(j+2);
	settextstyle(8,0,3);
	outtextxy(350,250,"DEVELOPED BY");
	rectangle(345,255,537,280);
	}
	else
	{
	setfillstyle(2,0);
	setcolor(0);
	settextstyle(8,0,3);
	outtextxy(350,250,"DEVELOPED BY");
	rectangle(345,255,537,280);
	}
	setfillstyle(2,10);
	settextstyle(7,0,2);
	setcolor(14);
//	outtextxy(380,290,"Rushi kulkarni   276");
	outtextxy(380,310,"Sandeep jadhav   281");

	settextstyle(7,0,2);
	setcolor(4);
	outtextxy(300,400," press any key to continue. . . . . .");

	}while(!kbhit());
getch();
}



int main()
{
	char *item;
	queue q;
	clrscr();
	q.loadgraph();
//	q.create();
  //	q.search();


	q.homescreen();
	do
	{
	cleardevice();
	clrscr();
	setbkcolor(0);
	q.menu();
	choice=tolower(choice);
	switch(choice)
	{
		case 'c':q.create();break;
		case 'd':q.display();break;
		case 'i':q.inserts();break;
		case 'r':q.deletes();break;
		case 's':q.search();break;
		case 'm':q.simu();break;
		case 'e':q.reverse();break;

		case 'x':
		cleardevice();setcolor(14);settextstyle(7,0,7);
		outtextxy(170,150,"Thank you....");getch();break;
		default :break;
	}
	}while(choice!='x');

	closegraph();
return(0);
}