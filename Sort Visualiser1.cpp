/*SORTING VISUALISER*/

/*HEADER FILES USED*/
#include<bits/stdc++.h>/*USED TO <iostream>,<conio.h>,<ctime>,<cstdlib>,<cstdio>*/
#include <graphics.h>/*Used to include graphics*/
#define WELCOME 100
#define BUBBLE 50
#define QUICKSEL 120
typedef unsigned long long int ull;
/*TO DRAW THE BARS FOR VISUALISING THE SORTING*/
void make_bar(int mag, int index )
{   int h=mag;
    bar(10+10*index+2,680-h,20+10*index,680);
}

/*WELCOME PAGE*/
void wel_page()
{char a[WELCOME];

		sprintf(a,"Data Structures Project");
        setcolor(5);
        settextstyle(BOLD_FONT,HORIZ_DIR,5);
        outtextxy(100,30,a);
        delay(3000);

    settextstyle(BOLD_FONT,HORIZ_DIR,0.5);

    setcolor(3);
    sprintf(a,"Topic: SORT VISUALISER ");
    outtextxy(350,90,a);
    delay(1000);

    setcolor(8);
    sprintf(a,"Sorting is an easy concept,THEORETICALLY");

    outtextxy(22,160,a);
    delay(1000);

    sprintf(a,"But To VISUALISE different possible sortings, NOT AN EASY TASK !!");
    outtextxy(22,200,a);
    delay(1000);

    setcolor(3);
    sprintf(a,"Submitted BY:");
    outtextxy(40,350,a);

    sprintf(a,"VAIBHAV JAIN");

    setcolor(4);
    outtextxy(50,380,a);
    delay(1000);

    sprintf(a,"(15103113)");

    setcolor(4);
    outtextxy(50,410,a);
    delay(1000);

    sprintf(a,"ADITYA AGGARWAL");

    setcolor(4);
    outtextxy(50,440,a);
    delay(1000);

    sprintf(a,"(15103085)");
	setcolor(4);
    outtextxy(50,470,a);
delay(1000);
	sprintf(a,"RAJERSHI GAHOI");
	setcolor(4);
    outtextxy(50,500,a);

delay(1000);
    sprintf(a,"(15103099)");
    setcolor(4);
    outtextxy(50,530,a);

delay(1000);
	sprintf(a,"UTKARSH SHRIVASTAV");
	setcolor(4);
    outtextxy(50,560,a);

delay(1000);
    sprintf(a,"(15103112)");
    setcolor(4);
    outtextxy(50,590,a);
delay(1000);

    sprintf(a,"Batch - B15");
    setcolor(3);
    outtextxy(50,650,a);

delay(1000);

    setcolor(5);
    sprintf(a,"Submitted To:");
    setcolor(11);
    outtextxy(800,400,a);

delay(1000);
    sprintf(a,"KISHORE KUMAR YARAMSHETTY");

    setcolor(9);
    outtextxy(800,440,a);

    delay(1000);
   //PlaySound("F:\\ACB.wav",NULL, SND_FILENAME);

}

/*TO SWAP THE BARS*/
void swap(int* q, int* w,int index)
{
	setfillstyle(1, YELLOW);
	make_bar(*q*5, index);
	make_bar(*q*5, index+1);
	Beep(*q*10,50);
    ull t;
    t = *q;
    *q = *w;
    *w = t;
    setfillstyle(1, BLACK);
	make_bar(*q*5, index);
	make_bar(*w*5, index+1);
	make_bar(t*5, index);
	make_bar(t*5, index+1);
}

/*BUBBLE SORT*/
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i=0;i<(n-1);i++)
    {
       for (j=0;j<(n-i-1);j++)
       {   outtextxy(50,50,"BUBBLE SORT");
           setfillstyle(1,BLACK);
            make_bar(arr[j]*5,j);
            make_bar(arr[j+1]*5,j+1);
           delay(0);
           if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1],j);
            setfillstyle(1,YELLOW);
            make_bar(arr[j]*5,j);

            make_bar(arr[j+1]*5,j+1);
            delay(0);
            if(j<n-i-1)
            {   setfillstyle(1,RED);
                if(j==n-i-2)
                {   setfillstyle(1,GREEN);
                    make_bar(arr[j]*5,j);
                    make_bar(arr[j+1]*5,j+1);
                    setfillstyle(1,RED);
                    make_bar(arr[j]*5,j);
                }
                else
                {   make_bar(arr[j]*5,j);
                    make_bar(arr[j+1]*5,j+1);

                }
            }
       }
       setfillstyle(1,GREEN);
        delay(0);
}
}

void swap1(int *a , int *b)
{   int t=*a;
    *a=*b;
    *b=t;
}
void selectionSort(int arr[], int n)
{
    int i, j,k, min_idx;

    for (i=0; i<(n-1);i++)
    {   if(i==n-3||i==n-2)
        {   setfillstyle(1,BLUE);
            if(arr[i]>arr[i+1])
            {   make_bar(arr[i]*5,i);
                make_bar(arr[i+1]*5,i+1);
            }
            else
            {   make_bar(arr[i+1]*5,i+1);
                make_bar(arr[i]*5,i);
            }
        }
        for(k=0;k<i;k++)
        {   setfillstyle(1,BLACK);
            make_bar(arr[k]*900,k);
            setfillstyle(1,BLUE);
            make_bar(arr[k]*5,k);
        }
        setfillstyle(1,BLACK);
            make_bar(arr[k+10]*50,k+1);
        delay(0);
        for(int k=i;k<n;k++)
        {   if(i==n-2)
                continue;
            setfillstyle(1,RED);
            make_bar(arr[k]*5,k);
        }
        delay(0);
        Beep(arr[i]*30, 50);

        min_idx = i;
        for (j = i+1; j < n; j++)
        {   outtextxy(50,50,"SELECTION SORT");
            if (arr[j] < arr[min_idx])
            {   min_idx = j;
            }

        }
        if(i!=n-2)
        {   setfillstyle(1,YELLOW);
            make_bar(arr[min_idx]*5,min_idx);
        }
        swap1(&arr[min_idx], &arr[i]);
    }
}

/*QUICK SORT*/
void quick_Sort(int arr[],int s,int k){
    int c=arr[k];
    int d=s;
    for(int i=s;i<k;i++)
        {
        outtextxy(50,50,"QUICK SORT");
        setfillstyle(1,YELLOW);
        make_bar(arr[k]*5, k);
        delay(50);
        if(arr[i]<c){
            Beep(arr[i]*50, 50);
            int p=arr[i];
            arr[i]=arr[d];
            arr[d]=p;
            setfillstyle(1,BLACK);
            make_bar(arr[i]*500, d);

            setfillstyle(1,GREEN);
            make_bar(arr[d]*5, d);
            delay(10);

            d++;
        }
            setfillstyle(1,BLACK);
    make_bar(arr[k]*500, d);
        setfillstyle(1,GREEN);
    make_bar(arr[k]*5, d);
    setfillstyle(1,GREEN);
    make_bar(arr[k]*5, k);

    }
    arr[k]=arr[d];

    arr[d]=c;


    if((d-s)>1)
        quick_Sort(arr,s,d-1);
    if((k-d)>1)
        quick_Sort(arr,d+1,k);



}



int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");
   initwindow(1300,700);

   //setcolor(YELLOW);
   //rectangle(0,30,639,450);
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   //setcolor(WHITE);;
    wel_page();
    cleardevice();
    setcolor(WHITE);
       settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   setlinestyle(SOLID_LINE,0,2);
   setfillstyle(1, RED);
    int a[QUICKSEL];
    int b[BUBBLE];
    srand((unsigned int)time(NULL));
    char ch;
   while(1)
    {  setcolor(WHITE);
    line(-100,80,getmaxx(),80);
    line(10,-100,10,getmaxy());
       outtextxy(100,200,"Choose a sort: \n");
       outtextxy(125,230,"1. Bubble Sort \n");
       outtextxy(125,260,"2. Selection Sort \n");
       outtextxy(125,290,"3. Quick Sort \n");
       outtextxy(125,320,"4. Exit \n");
        ch=getch();
        if(ch=='1')
        {   cleardevice();
            for(int i=0;i<50;i++)
                b[i] = 1+rand()%135;
            for(int i=0;i<50;i++)
                make_bar(5*b[i], i);
            bubbleSort(b,BUBBLE);
            delay(2000);
            settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
            outtextxy(300,50,"Press 0 to exit\n");
            char f=getch();
            if(f=='0')
                cleardevice();
        }
        else if(ch=='2')
        {   cleardevice();
            setfillstyle(1,RED);
            for(int i=0;i<120;i++)
                a[i] = 1+rand()%135;
            for(int i=0;i<120;i++)
                make_bar(5*a[i], i);
            selectionSort(a,QUICKSEL);
            delay(2000);
            settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
            outtextxy(300,50,"Press 0 to exit\n");
            char f=getch();
            if(f=='0')
                cleardevice();
        }
        else if(ch=='3')
        {   cleardevice();
            setfillstyle(1,RED);
            for(int i=0;i<120;i++)
                a[i] = 1+rand()%135;
            for(int i=0;i<120;i++)
                make_bar(5*a[i], i);
            quick_Sort(a,0,QUICKSEL-1);
            delay(2000);
            settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
            outtextxy(300,50,"Press 0 to exit\n");
            char f=getch();
            if(f=='0')
                cleardevice();
        }
        else if(ch=='4')
            exit(0);
    }
   getch();

   return 0;
}
