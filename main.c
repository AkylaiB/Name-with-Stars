#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,boyut;
    printf("Bir boyut giriniz:");
    scanf("%d", &boyut);
if(boyut>=7 && boyut<=11)/*boyle bir kisitlamanin sebebi "V" harfinin seklinin saglanmasi*/
{
    /*isim*/
    /*a harfi basladi*/
    for (i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if(i==boyut/2)
            {
                printf("*");
            }
            else if (i==1)
            {
                if (j==1 || j==boyut)
                {
                    printf(" ");
                }
                else{printf("*");}
            }
            else
            {
                if(j==1 || j==boyut)
                {
                    printf("*");

                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    /*a harfi bitti*/
    printf("\n");
    printf("\n");
    /*k harfi basladi*/
    for (i=1;i<=boyut;i++)
        {
              for(j=1;j<=boyut;j++)
              {
                  if (i==boyut/2)
                  {
                      for (j=1;j<boyut;j++)
                      {
                          printf("*");
                      }
                  }
                  else
                  {
                      if(j==1 || j==boyut)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                  }
              }



            printf("\n");
        }
   /*k harfi bitti*/
   printf("\n");
   printf("\n");
   /*y harfi basladi*/
    for (i=1;i<=boyut;i++)
    {
    if (i==boyut || i==boyut/2)
        {
            for(j=1;j<=boyut;j++)
            { printf("*"); }
            printf("\n");
        }
    else if(i<boyut/2)
        {
            for(j=1;j<=boyut;j++)
            {
                if(j==1 || j==boyut)
                { printf("*"); }
                else
                { printf(" "); }
            }
            printf("\n");
        }
        else
        {
            for(j=1;j<=boyut;j++)
            {
                if(j==boyut)
                { printf("*"); }
                else
                    { printf(" "); }
            }
            printf("\n");
        }
    }
    /*y harfi bitti*/
    printf("\n");
    printf("\n");
    /*l harfi basladi*/
    for (i=1;i<=boyut;i++)
    {

        if (i==boyut)
        {
            for(j=1;j<=boyut;j++)
            {
                printf("*");
            }

        }
        else
        {
            for(j=1;j<=boyut;j++)
            {
                if(j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }printf("\n");
        }


    }
    /*l harfi bitti*/
    printf("\n");
    printf("\n");
    /*a harfi basladi*/
    for (i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if(i==boyut/2)
            {
                printf("*");
            }
            else if (i==1)
            {
                if (j==1 || j==boyut)
                {
                    printf(" ");
                }
                else{printf("*");}
            }
            else
            {
                if(j==1 || j==boyut)
                {
                    printf("*");

                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    /*a harfi bitti*/
    printf("\n");
    printf("\n");
    /*i harfi basladi*/
    for (i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
            {
                if(j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
        }
        /*i harfi bitti*/
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        /*soyad basliyor*/
         /*b harfi basladi*/
         for (i=1;i<=boyut;i++)
        {
              for(j=1;j<=boyut;j++)
              {
                  if(i==1 || i==boyut || i==boyut/2)
                  {
                      if(j==boyut)
                      {
                          printf(" ");
                      }
                      else{printf("*");}
                  }
                  else
                  {
                      if(j==1 || j==boyut)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                  }
              }



            printf("\n");
        }
         /*b harfi bitti*/
        printf("\n");
        printf("\n");
        /*o harfi basladi*/
          for (i=1;i<=boyut;i++)
        {
            for (j=1;j<=boyut; j++)
        {
            if (i==1 || i==boyut || j==1 || j==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        }

         /*o harfi bitti*/
        printf("\n");
        printf("\n");
         /*l harfi basladi*/
         for (i=1;i<=boyut;i++)
    {

        if (i==boyut)
        {
            for(j=1;j<=boyut;j++)
            {
                printf("*");
            }

        }
        else
        {
            for(j=1;j<=boyut;j++)
            {
                if(j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }printf("\n");
        }


    }
         /*l harfi bitti*/
        printf("\n");
        printf("\n");
        /*o harfi basladi*/
         for (i=1;i<=boyut;i++)
        {
            for (j=1;j<=boyut; j++)
        {
            if (i==1 || i==boyut || j==1 || j==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        }
         /*o harfi bitti*/
        printf("\n");
        printf("\n");
        /*t harfi basladi*/
          for (i=1;i<=boyut;i++)
    {

        if (i==1)
        {
            for(j=1;j<=boyut;j++)
            {
                printf("*");
            }

        }
        else
        {
            if(boyut%2==0)
                {
                   for(j=1;j<=boyut;j++)
                     {
                      if(j==boyut/2 || j==boyut/2+1)
                      {
                          printf("*");
                      }
                      else
                      {
                          printf(" ");
                      }
                     }
                }
                else
                {

                    for(j=1;j<=boyut;j++)
                    {
                    if(j==boyut/2+1)
                    {
                        printf("*");
                    }
                    else{printf(" ");}
                    }
                }
        }


            printf("\n");
        }

         /*t harfi bitti*/
        printf("\n");
        printf("\n");
        /*b harfi basladi*/
         for (i=1;i<=boyut;i++)
        {

              for(j=1;j<=boyut;j++)
              {
                  if(i==1 || i==boyut || i==boyut/2)
                  {
                     if(j==boyut)
                      {
                          printf(" ");
                      }
                      else{printf("*");}
                  }
                  else
                  {
                      if(j==1 || j==boyut)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                  }
              }



            printf("\n");
        }
         /*b harfi bitti*/
        printf("\n");
        printf("\n");
        /*e harfi basladi*/
         for (i=1;i<=boyut;i++)
        {
              for(j=1;j<=boyut;j++)
              {
                  if(i==1 || i==boyut || i==boyut/2)
                  {
                      printf("*");
                  }
                  else
                  {
                      if(j==1)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                  }
              }



            printf("\n");
        }
         /*e harfi bitti*/
        printf("\n");
        printf("\n");
        /*k harfi basladi*/
         for (i=1;i<=boyut;i++)
        {
              for(j=1;j<=boyut;j++)
              {
                   if (i==boyut/2)
                  {
                      for (j=1;j<boyut;j++)
                      {
                          printf("*");
                      }
                  }
                  else
                  {
                      if(j==1 || j==boyut)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                  }
              }



            printf("\n");
        }
         /*k harfi bitti*/
        printf("\n");
        printf("\n");
         /*o harfi basladi*/
          for (i=1;i<=boyut;i++)
        {
            for (j=1;j<=boyut; j++)
        {
            if (i==1 || i==boyut || j==1 || j==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        }
         /*o harfi bitti*/
        printf("\n");
        printf("\n");
        /*v harfi basladi*/
         if(boyut%2==0)/*cift ise*/
         {for (i=1;i<=boyut;i++)
         {
             for (j=1;j<=boyut;j++)
             {
            if (i<=boyut-3)
            {
                if (j==1 || j==boyut)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
          if ((j==boyut/2 || j==boyut/2+1)&& i==boyut )
          {
              printf("*");
          }
          else if( i==boyut-1 && (j==boyut-2 || j==3))
          {
              printf("*");
          }
          else if (i==boyut-2 && (j==2 || j==boyut-1))
            {printf("*");}

            else
            {
                printf(" ");
            }
             }
             }
             printf("\n");
         }
         }
         else/*tek ise*/
         {
             for (i=1;i<=boyut;i++)
         {
             for (j=1;j<=boyut;j++)
             {
            if (i<=boyut-3)
            {
                if (j==1 || j==boyut)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
          if (j==boyut/2+1 && i==boyut )
          {
              printf("*");
          }
          else if( i==boyut-1 && (j==boyut-2 || j==3))
          {
              printf("*");
          }
          else if (i==boyut-2 && (j==2 || j==boyut-1))
            {printf("*");}

            else
            {
                printf(" ");
            }
             }
             }
             printf("\n");
         }
         }
         /*v harfi bitti*/
        printf("\n");
        printf("\n");
        /*a harfi basladi*/
    for (i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if(i==boyut/2)
            {
                printf("*");
            }
            else if (i==1)
            {
                if (j==1 || j==boyut)
                {
                    printf(" ");
                }
                else{printf("*");}
            }
            else
            {
                if(j==1 || j==boyut)
                {
                    printf("*");

                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    /*a harfi bitti*/
}
else
{
    printf("Lutfen 6'dan buyuk, 12'den kucuk bir boyut giriniz.");
}

    return 0;
}
