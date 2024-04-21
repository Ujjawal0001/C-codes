//WAP to count number of vowels and consonants in a string


#include<stdio.h>
#include<string.h>
int main (){
    char arr[10];
    printf("Enter string : ");
    fgets(arr,sizeof(arr),stdin);
    int vowel=0;
    int consonant=0;
    for(int i=0;i<strlen(arr);i++){
        if((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z')){
        if(arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='u'||arr[i]=='U'){
            vowel++;
        }
        else{
            consonant++;
        }
        }
        
    }
    printf("%d\n",vowel);
    printf("%d",consonant);
    return 0;
}