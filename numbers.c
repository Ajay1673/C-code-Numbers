//write a program to convert binary number to decimal number
#include<stdio.h>   
#include<stdlib.h>
int main()
{
    int a[10],n,i;
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)    
    {    
        a[i]=n%2;    
        n=n/2;    
    }    
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",a[i]);    
    }    
    return 0;  
}

// write a program to convert binary number to hexadecimal number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int bin,hex=0,i=0,rem;
    printf("Enter the binary number: ");
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        hex=hex+rem*pow(2,i);
        i++;
        bin=bin/10;
    }
    printf("Hexadecimal number is: %x",hex);
    return 0;
}

// write a program to convert decimal number to hexadecimal number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dec,rem,i=0;
    char hex[50];
    printf("Enter the decimal number: ");
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem=dec%16;
        if(rem<10)
        {
            hex[i]=rem+48;
            i++;
        }
        else
        {
            hex[i]=rem+55;
            i++;
        }
        dec=dec/16;
    }
    printf("Hexadecimal number is: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",hex[j]);
    }
    return 0;
}