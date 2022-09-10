#include<stdio.h>
int main()
{
    char Name[30], id[15];
    char subName[30];
    float totalSubPoint =0.0;
    float ct1, ct2, ct3,ctresult, high,mid;
    float assi, presen, attent, midResult,finalResult, subResut;
    float subCredit, totalCredit=0.0;
    float subPoint, cgpa=0.0;

    printf("Please Enter Student Name:");
    scanf("%[^\n]",Name);
    printf("please Enter Student Id:");
    scanf("%s",&id);

    if(strlen(id) == 9)
    {
          int x = 1;
        printf("\n\n\t\t\t\t ****Student Result****\n\n\n ");
        printf("Student Name %s\n",Name);
        printf("Student ID %s\n",id);

        while(x = 1)
        {

            printf("\nEnter an any subject name: ");
            scanf("%s",&subName);
            printf("\nEnter '%s' credit: ",subName);
            scanf("%f",&subCredit);
            totalCredit = totalCredit + subCredit;
            printf("Subject Name %s :",subName);
            printf("\n%s ct-1 :", subName );
            scanf("%f",&ct1);
            printf("\n%s ct-2 :", subName );
            scanf("%f",&ct2);
            printf("\n%s ct-3 :", subName );
            scanf("%f",&ct3);
            printf("\n%s mid result :", subName );
            scanf("%f",&midResult);
            printf("\n%s assignment :", subName );
            scanf("%f",&assi);
            printf("\n%s presentation :", subName );
            scanf("%f",&presen);
            printf("\n%s attendance :", subName );
            scanf("%f",&attent);

            printf("\n%s Final result :", subName );
            scanf("%f",&finalResult);
            // ct result calculation
            {
                if (ct1==ct2 && ct1==ct3 && ct2==ct3)
                {
                    ctresult =(ct1+ct2)/2.0;
                }
                else if (ct1==ct2 && ct1>ct3)
                {
                    ctresult=(ct1+ct2)/2.0;
                }
                else if (ct1==ct3 && ct1>ct2)
                {
                    ctresult=(ct1+ct3)/2.0;
                }
                else if (ct2==ct3 && ct2>ct1)
                {
                    ctresult=(ct2+ct3)/2.0;
                }
                else
                {
                    if (ct1>ct2 && ct1>ct3) high =ct1;
                    else if (ct2>ct1 && ct2>ct3)high =ct2;
                    else high=ct3;
                    if (ct1>=ct2 && ct1<ct3)mid =ct1;
                    else if (ct2>=ct1 && ct2<ct3)mid =ct2;
                    else if (ct2>=ct3 && ct2>ct1)
                    {
                        mid =ct2;
                    }
                    else mid =ct3;
                    ctresult =(high+mid)/2.00;
                }
            }
            // sub result
            subResut = ctresult + assi + presen + attent + midResult+finalResult;
            //sub grade and sub point
            if(subResut>0&& subResut<40)
            {

                printf("\n%s Grade = F", subName);
                subPoint=0.0;
            }
            else if (subResut>=40 && subResut<45)
            {

                printf("\n%s Grade = D", subName);
                subPoint=2.00;
            }
            else if (subResut>=45 && subResut<50)
            {

                printf("\n%s Grade = C", subName);
                subPoint=2.25;
            }
            else if (subResut>=50 && subResut<55)
            {

                printf("\n %s Grade = C+", subName);
                subPoint=2.50;
            }
            else if ( subResut>=55 &&  subResut<60)
            {

                printf("\n %s Grade = B-", subName);
                subPoint=2.75;
            }
            else if (subResut>=60 && subResut<65)
            {

                printf("\n%s Grade = B", subName);
                subPoint=3.00;
            }
            else if  (subResut>=65 &&subResut<70)
            {

                printf("\n %s Grade = B+", subName);
                subPoint=3.25;
            }
            else if  (subResut>=70 &&subResut<75)
            {

                printf("\n%s Grade = A-", subName);
                subPoint=3.50;
            }
            else if  (subResut>=75 &&subResut<80)
            {

                printf("\n%s Grade = A", subName);
                subPoint=3.75;
            }
            else if  (subResut>=80 &&subResut<=100)
            {

                printf("\n%s Grade = A+", subName);
                subPoint=4.00;
            }

            // total sub point
            totalSubPoint = totalSubPoint+(subPoint * subCredit);

            // user want cla any other sub (1/0)
            int again;
            printf("\nDo you want cal any other sub (1/0) :");
            scanf("%d",&again);
            if(again == 1)
            {
                x++;
            }
            else
            {
                // cgpa final result
                cgpa = totalSubPoint / totalCredit;
                printf("\nTotal CGPA :%.2f\n",cgpa);
                return 0;
            }
        }


    }
    else
    {

        printf("\n\nInvalid ID. please try again.\n\n");
    }


}
