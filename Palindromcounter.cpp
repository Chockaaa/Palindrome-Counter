#include<iostream>
#include<cstring>
//display the number of palindrome among character input
using namespace std;
int main()
{
char input[30],original[30],last[30];
int counter=0;
int flag=0;
int i,j,k,a,b,p;
int jack;
char *fptr;
char *sptr;
int race=0;
int max;
int checker=0;
for(i=0;i<30;i++)
{original[i]='\0';;
}
i=0;
cout<<"What is your character input?";
cin>>input;
while(input[counter]!='\0')
counter++;
cout<<counter<<endl;

for(i=0;i<counter;i++)
{ jack=counter-i;
flag=counter+1;
for(j=0,fptr=input;j<jack;j++,fptr++)
{
for(a=0;a<(flag-jack);a++)
{
for(b=0;b<(flag-jack);b++)
{
original[b]=*fptr;
fptr++;

}
for(b=0;b<(flag-jack);b++,fptr--);

}
cout<<original;
max=strlen(original);
for(p=0;p<max;p++)
{
last[p]=original[max-p-1];
}
checker=0;
for(p=0;p<max;p++)
{
if(last[p]!=original[p])
{
checker=1;
break;
}
}
if(checker==0)
{
race=race+1;
}
cout<<endl;
}
cout<<endl;
}
cout<<"The palindrome count:"<<race;

r
e
t
u
r
n
0; }