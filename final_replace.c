#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main() {
    char commandd[12];
    char string[80];
    char stringoptions[30];

 printf("Enter job\n\n");
 scanf("%s %s %s",commandd,string,stringoptions);


char arr2[50];//testing

 char taskrows[50][70];
char one[50];
int tw[50];
//process of splitting
int i,t,r=0,cc=0,xx,j,q,w=0;

for(i=0; i<sizeof(stringoptions);i++){
   if(stringoptions[i]==',' || stringoptions[i]==';'){
   taskrows[r][cc];
   for(j=cc+1;j<69;j++){
   taskrows[r][j] = '-';
   }
    cc=0; i++; r++;}

   taskrows[r][cc] = stringoptions[i];

   cc++;}

int l =(strlen(stringoptions))/4;


for(q=0; q<l; q++){
tw[q]=atoi(&taskrows[q][0]);//atoi function converts characters to index

arr2[q]=taskrows[q][2];

 }

 for(t=0; t<string[t]!='\0'; t++){


      	for(w=0; w<string[w]!='\0'; w++){
 //printf("%d",tw[w]);
  				if(t==(tw[w]-1)){

  			     string[t]=arr2[w];

  						break;



   				}

   				//printf("-%d-",t);
  		}

 }

printf("\nReplaced string is:\n\t...%s...\n\n ",string );
// printf("%s",taskob.resultStr);


  //if
    }




