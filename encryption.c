#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function to seperate the digits that represent the character
void splitting(char* arr, int val){

    int i;
    int x = val/10;
    int y = val - x * 10;
    int size = sizeof(arr);

    char res1 = x + '0';   //converting int to char
    char res2  = y + '0';

    //insert the characters into the array
    for(i=0; i<size; i++){

        if(i == 0){
            arr[i] = res1;
        }
        if(i == 1){
            arr[i] = res2;
        }
    }
}

//function to insert a character at a particular position
void insertion(char* arr, char val, int pos){

    int z;
    int arrsize = sizeof(arr);

    //shift elements one step to the right
    for(z=arrsize; z>=pos; z--){
        arr[z] = arr[z-1];
    }

    arr[pos-1] = val;  //insert character in specified position
}

//function to encrypt each character
void encryption(char* arr1, char* arr2, char string){
    
    int b,c;

        for(b=1; b<=9; b++){           //for characters represented by single digits

            if(string == arr2[b]){     //determine the character

                arr1[0] = arr2[b+26];  //insert the capital letter of that character

            }else{
                continue;
            }

        }

        for(c=10; c<=52; c++){       //Ffr characters represented by double digits

            if(string == arr2[c]){   //determine the character

                splitting(arr1, c);  //split the digit that represents the character

                int d = c - 1;
                int position1 = 2;

                insertion(arr1, arr2[d], position1); //insert character in specified position

                int e = c - 9;
                int f = e/10;
                int l = e - f * 10;

                char m = f + '0';  //converting int to char
                int position2 = 3;

                insertion(arr1, m, position2);

                char n = l + '0';
                int position3 = 4;

                insertion(arr1, n, position3);

                int g = e - 1;
                int position4 = 4;

                insertion(arr1, arr2[g], position4);

                int h = e - 9;
                int position5 = 4;

                insertion(arr1, arr2[h+26], position5);

            }else{
                continue;
            }

        }


}

void main(int argc, char** argv)
{
    char criteria[53] = "0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";   //variable to help determine the characters

    char* word = argv[2];           //string to be encrypted
    char encrypted[1000] = "";      //variable to store the encrypted string

    int i;

    if(strcmp(argv[1], "encrypt") == 0){


        //encrypt each character at a time
        for(i=0; i<sizeof(word); i++){

        char encrypt[100] = "";
        encryption(encrypt, criteria, word[i]);
        strcat(encrypted, encrypt);

        }

    }

    printf("%s", encrypted);  //print the encrypted string
}
