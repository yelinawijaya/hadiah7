#include <iostream.h>
#include <conio.h>
main()
{
int a;
int b;
for(a=1;a<=4;a++)
{
for(b=1;b<=4;b++)
{

if(a==b){
cout<<a<<" ";
}
else{
	cout<<'x'<<" ";
   }

   }

   cout<<"\n";
   cout<<"\n";
   }
getch();
}