#include<iostream.h>
#include<conio.h>
long int fact(int);
void main()
{clrscr();
int N,R,H,c;
long int r,n,h,p,b,C;
cout<<"Enter n : ";
cin>>N;
cout<<"Enter r : ";
cin >>R;
H=N-R;
n=fact(N);
r=fact(R);
h=fact(H);
do{   clrscr();
cout<<"1. Permutation\n "
    <<"2. Combination\n "
    <<"3. Exit\n"
    <<"What do you want to do ? ";
cin>>c;
switch(c)
{
case 1 : p=n/h;
	 cout<<"The permutation = "<<p;
	 break;
case 2 : C=n/(h*r);
	 cout<<"The combination = "<<b;
	 break;
case 3 : break;
default :cout<<"You entered a wrong choice!!!";
}

getch();
}while(c != 3);
}
long int fact(int n)
{
long int f=1;
int m;
for(m=n;m>=1;m--)
{
f*=m;
}
return f;
}