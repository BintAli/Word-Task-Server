#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void main() {
    char command[12];
    char string[80];
    char stringoptions[30];

printf("\nEnter Job\n\n");
scanf("%s %s %s",command,string,stringoptions);

char dbf[10]="Delete";

char arr2[20];
int com[15];
char b[20];

//new code1CODECHEF=================================================================================================================================================

int l,i=0,d,f,g,h,n,j=0,k;


char z[20];
char ll[20];

char r[8][3];
int x[20],p;

l = strlen(stringoptions);

for(i=0,j=0; i<l; i++,j++){
// since the characters are taking even positions
if(i%2==0){
// half it to skip commas
 z[i/2] = stringoptions[i];
 ll[0] = stringoptions[i];
 strcpy(r[i/2],ll);

 } if(i==(l-1)){

 p = i/2;
 }

}

int len = l-p;
int e = atoi(z);
for(d=0;d<len;d++){
 x[d] = atoi(r[d]);

}

//========================================================================================================================new code
int rn = strlen(string);

int ww = sizeof(x)/sizeof(int);

int fr = rn-len+1;

int shar=0;
int xy=0;

//process to delete
for(i=0; i<fr+2; i++){
shar=0;
    for(j=0; j<(l-p); j++){
      if(i==(x[j]-1)){ shar++;    i++; xy++; }
                        }

          arr2[i-xy]= string[i];


}
 printf("\nDeleted string is:%s\n ",arr2);
}

