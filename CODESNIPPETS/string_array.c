#include<stdio.h>
#include<string.h>


void main()
{
char str1[10] = "hello";
printf("The length of the string 1 \"%s\" is: %ld\n",str1,strlen(str1));
char str2[10] = "world";
puts(str1);
puts(str2);
strcpy(str1,str2);
printf("After copy String 1 is %s\nString 2 is %s\n",str1,str2);
char str3[10]="hifvg";
puts(str1);
puts(str2);
puts(str3);
printf("comparing string 1 and 2 = %d\ncomparing string 1 and 3 = %d\n",strcmp(str1,str2),strcmp(str1,str3));
puts(str1);
puts(str2);
strcat(str1,str2);
printf("After cat of str1 and str2 string is %s\n",strcat(str1,str2));
}

