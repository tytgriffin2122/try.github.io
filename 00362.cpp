#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
main(){
       int a=0,b=0,c=0,d=0,e=0;
       int z;
       int s;
       int p;
       int max;
       cout<<"Delay?";
       cin>>s;
       do{
       srand(time(NULL));
       a=a+rand()%5;
       b=b+rand()%5;
       c=c+rand()%5;
       d=d+rand()%5;
       e=e+rand()%5;
       system("CLS");
       for (p=1;p<=10000*s;p++);  
       cout<<endl;
       cout<<"4A 18 Chung Ching Nam race course"<<endl; 
       cout<<"|-----*----*----*----*----*----*----*----*|"<<endl;
       cout<<"|";
       for(z=1;z<=a;z++){cout<<" ";}
       cout<<"V";
       for(z=1;z<=40-a;z++){cout<<" ";}
       cout<<"|"<<endl;
       cout<<"|";
       for(z=1;z<=b;z++){cout<<" ";}
       cout<<"W";
       for(z=1;z<=40-b;z++){cout<<" ";}
       cout<<"|"<<endl;
       cout<<"|";
       for(z=1;z<=c;z++){cout<<" ";}
       cout<<"X";
       for(z=1;z<=40-c;z++){cout<<" ";}
       cout<<"|"<<endl;
       cout<<"|";
       for(z=1;z<=d;z++){cout<<" ";}
       cout<<"Y";
       for(z=1;z<=40-d;z++){cout<<" ";}
       cout<<"|"<<endl;
       cout<<"|";
       for(z=1;z<=e;z++){cout<<" ";}
       cout<<"Z";
       for(z=1;z<=40-e;z++){cout<<" ";}
       cout<<"|"<<endl;
       cout<<"|-----------------------------------------|"<<endl;
       
       }while(a<35 and b<35 and c<35 and d<35 and e<35);
       if (a>b and a>c and a>d and a>e) cout<<"V wins"; else 
       if (b>a and b>c and b>d and b>e) cout<<"W wins"; else
       if (c>a and c>b and c>d and c>e) cout<<"X wins"; else
       if (d>a and d>b and d>c and d>e) cout<<"Y wins"; else
       if (e>a and e>b and e>c and e>d) cout<<"Z wins";
       system("pause");
       }
                         
