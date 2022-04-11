# include<stdio.h>


int main()

{

    int a=0,b=0;

    printf("TO START GAME PLLZZZ PRESS 1\n");

    scanf ("%d",&a);



    if (a==1)

    {

    
    


        printf("GAME STARED \n");

        printf("PLZZ PRESS ANY NUMBER BETWEEN 11 TO 15 \n AND SEE YOUR FAVOURITE STATEMENT ACCORDING TO NUMBER \n ");
         scanf ("%d",&b);

        switch(b)
        {

        case 12:
    
        printf("YOU LOVE SEJAL,TANVI,AND MANY MORE");
        break;
    
         case 11:

        printf("YASHIKA LOVES YOU");
        break ;
    


        case 13:
    
        printf ("YOU LOVE TEJAYYYYYYYY");
        break ;
    

        case 14:

        printf("YOU  PLACEMENT MORE THAN 15 LPA ");
        break ;


         case 15:
 
        printf (" YOU LOVE MOM AND DAD");
        break;

        default :
        printf("gouri cha bhau alla");
         break ;

        }   

    }

    else
     {
         printf("lawadya manuskit 1 tak...");

     }
   



    return 0;

}
