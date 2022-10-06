#include<stdio.h>
int main()
{
    char a;
    scanf("%c ",&a);
    if(a=='A' || a=='E' || a=='I' || a=='O'||a=='U'|| a=='u'||a=='a'||a=='e'||a=='o'||a=='i')
    printf("Vowel");
    else 
    printf("Consonant");
}