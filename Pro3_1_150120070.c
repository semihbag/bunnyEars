// Name = Semih
// Surname = Bağ
// Purpose = Calculate the sum of bunny ears

#include <stdio.h>

int sum; 
int count=1;
int bunnyEars2(int);

int main()
{
    int number=0;
    printf("Please enterthe number of lines(n=): ");
    scanf("%d",&number);
    printf("bunnyEars2(0) -> 0\n");
    bunnyEars2(number);
    return 0;
}

// Calculate the number of ears
bunnyEars2(int number)
{  
    if(number == 0) return 0;
    else if(number%2==1)
    {
        sum+=3;
        printf("bunnyEars2(%d) -> %d\n",count,sum);
        count++;
        number--;
        return  bunnyEars2(number);
    }
    else 
    {   
        sum+=2;
        printf("bunnyEars2(%d) -> %d\n",count,sum);
        count++;
        number--;
        return bunnyEars2(number);
    }
}
