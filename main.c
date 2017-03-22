#include <stdio.h>
int recursive(int total)
{
    int i;
    for(i=0 ; i<=total ; i++)
    {
        if(total*total+total==2*i*i)//I simplified the equation which was (i-1)*i/2 == total(total+1)/2 - i(i+1)/2 originally
           printf("Found! Number of participants: %d, number of the desk: %d\n", total, i);
    }
        if(total==2)
        {
            printf("\n---------------------------Search is complete-----------------------------------\n");
            return 0;
        }
        else
            return recursive(total-1);
}
int main()
{
    int upper_bound, continuity=1;
    while(continuity){
    printf("Enter upper bound (0 to exit):");
    scanf("%d", &upper_bound);
    switch(upper_bound){
    case 0:
        continuity=0;
    break;
    default:
    if(upper_bound<8)
        printf("Not found!\n");
    else
        recursive(upper_bound);
    break;
    }
    }
    return 0;
}
