#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dir.h>
#include<string.h>
int main(int argc,const char*const*argv[])
//main()
{

///Creating Folder In Hard Disk "D" Drive Named DIU CGPA MANAGMENT SYSTEM AND INSIDE THAT FOLDER CREATING
///12 MORE FOLDER NAME SEMESTER 1-SEMESTER 12.

     int f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13;
        #define DIRNAME"d:\\DIU CGPA MANAGMENT SESTEM"
        f1=mkdir(DIRNAME);
        if(!f1)

        #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 1"
         f2=mkdir(DIRNAME);
        if(!f2)


          #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 2"
         f3=mkdir(DIRNAME);
        if(!f3)


        #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 3"
         f4=mkdir(DIRNAME);
        if(!f4)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 4"
         f5=mkdir(DIRNAME);
        if(!f5)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 5"
         f6=mkdir(DIRNAME);
        if(!f6)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 6"
         f7=mkdir(DIRNAME);
        if(!f7)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 7"
         f8=mkdir(DIRNAME);
        if(!f8)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 8"
         f9=mkdir(DIRNAME);
        if(!f9)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 9"
         f10=mkdir(DIRNAME);
        if(!f10)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 10"
         f11=mkdir(DIRNAME);
        if(!f11)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 11"
         f12=mkdir(DIRNAME);
        if(!f12)


     #define DIRNAME "d:DIU CGPA MANAGMENT SESTEM\\Semester 12"
         f13=mkdir(DIRNAME);
         if(!f13)

      printf("\t\t\t\t****Welcome****");
      else
      {
            printf("\t\t\t\t****Welcome****");
      }




    ///Student Information



         char fname[20],id[20];
       printf("\n\t\t\t\t\t\t\t\tID:");
         //   scanf("%[^\n]s",id);
         fgets(id,100,stdin);
        printf("Name Of The Student:");
              scanf("%[^\n]s",fname);

      //  fgets(fname, 100, stdin);





    /// Variable for marks entries & semester choosing & grading system ------------
    /// Integer for marks,float for grade and character for grade letter .......

    int m,g,s,h,i,x;
    float k,q,w,z;
    char *c,*d,*f,*y,code[20],code1[20],subject[20];
    printf("\n\n");

     ///Choosing Semester


       for(i=1;i<=12;i++)
    printf("\t\t                  Semester:%d \n",i);
    printf("Chose Semester:");
 J:    scanf("%d",&x);
     system("CLS");

    ///chosen semester subject and mark inserting ----

    if(x==1)
    {
           printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\t Computer Fundamentals With Lab \n");
        printf("\t\t Subject Code-SWE113:");
   M:     scanf("%d",&m);
            if(m<0 || m>100){
            printf("\t\tPlease Enter Number 0-100:");
                 {
                      if(scanf("%[^\n]c",&m))
                        goto M;
                 }

                    ///If User Choose Below 0 or Above 100--
        //   printf("\t\tPlease Enter Number 0-100:");
            goto M;}
            printf("\n");
        printf("\t\t Introduction To Software Engineering \n");
        printf("\t\t Subject Code-SWE114:");
   G:     scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&g))
                        goto G;
            }
        goto G;}
        printf("\n");

        printf("\t\t Physics-| With lab \n");
        printf("\t\t Subject Code-PHY114:");
   S:     scanf("%d",&s);
        if(s<0 || s>100){
             printf("\t\t Please Enter Number 0-100:");
             {
                 if (scanf("%[^\n]c",&s))
                        goto S;
             }
             goto S;}
    }
    else if(x==2)
    {
          printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tBasic Functional English And English Spoken \n");
        printf("\t\tSubject Code-ENG121:");
    A:    scanf("%d",&m);
            if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                  if (scanf("%[^\n]c",&m))
                        goto A;
            }
            goto A;}
            printf("\n");
        printf("\t\tMath-| \n");
        printf("\t\tSubject Code-MAT111:");
    B:    scanf("%d",&g);
          if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                  if (scanf("%[^\n]c",&g))
                        goto B;
            }
            goto B;}
            printf("\n");
        printf("\t\tSoftware Requirement Analysis And Design \n");
        printf("\t\tSubject Code-SWE121:");
   x:     scanf("%d",&s);
         if(s<0 || s>100){
           printf("\t\t Please Enter Number 0-100:");
           {
                 if (scanf("%[^\n]c",&s))
                        goto x;
           }
           goto x;}
           printf("\n");
        printf("\t\tC programming with lab \n");
        printf("\t\tSubject Code-SWE124:");
   v:     scanf("%d",&h);

         if(h<0 || h>100){
         printf("\t\t Please Enter Number 0-100:");
         {
               if (scanf("%[^\n]c",&h))
                        goto v;
         }
        goto v;}
    }
    else if(x==3)
    {

        ///semester 3----

        printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tMath-|| \n");
        printf("\t\tSubject Code-MAT121:");
    E:    scanf("%d",&m);
         if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                  if (scanf("%[^\n]c",&m))
                        goto E;
            }

            goto E;}
        printf("\n");
        printf("\t\tData Structure With Lab \n");
        printf("\t\tSubject Code-SWE133:");
   F:     scanf("%d",&g);
         if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&g))
                        goto F;
            }
            goto F;}
            printf("\n");
        printf("\t\tStatistics & Probabilities \n");
        printf("\t\tSubject Code-STA131:");
    X:    scanf("%d",&s);
         if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&s))
                        goto X;
            }
            goto G;}
            printf("\n");
        printf("\t\tC-Project With lab \n");
        printf("\t\tSubject Code-SWE134:");
    H:    scanf("%d",&h);
        if(h<0 || h>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&h))
                        goto H;
            }
            goto H;}
    }
    else if(x==4)
    {
         printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tJava Programming with Lab \n");
        printf("\t\tSubject Code-SWE212:");
    I:    scanf("%d",&m);
        if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&m))
                        goto I;
            }
        goto I;}
          printf("\n");
        printf("\t\tComputer Algorithms With lab \n");
        printf("\t\tSubject Code-SWE214:");
     K:   scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&g))
                        goto K;
            }
        goto K;}
          printf("\n");
        printf("\t\tIntroduction To Data-base with lab \n");
        printf("\t\tSubject Code-SWE216:");
    L:  scanf("%d",&s);
        if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&s))
                        goto L;
            }
        goto L;}
    }
    else if(x==5)
    {
         printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tDiscrete Mathematics \n");
        printf("\t\tSubject Code-SWE221:");
    N:    scanf("%d",&m);
        if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&m))
                        goto N;
            }
        goto N;}
        printf("\n");


        printf("\t\tSoftware Engineering Quality Assurance & Testing \n");
        printf("\t\tSubject Code-SWE222:");
   O:     scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&g))
                        goto O;
            }
        goto O;}
        printf("\n");

        printf("\t\tDigital Electronics with lab \n");
        printf("\t\tSubject Code-SWE224:");
    P:    scanf("%d",&s);
        if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&s))
                        goto P;
            }
        goto P;}
        printf("\n");


        printf("\t\tSoftware Project Management \n");
        printf("\t\tSubject Code-SWE225:");
    R:    scanf("%d",&h);
        if(h<0 || h>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&h))
                        goto R;
            }
        goto R;}

    }
    else if(x==6)
    {
          printf("\n\n\t\t\t\tAdd Marks:");
    printf("\n\n\n\n\t\tDocumentation Of Software Engineering \n");
    printf("\t\tSubject Code-SWE231:");
 T:   scanf("%d",&m);
    if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&m))
                        goto T;
            }
        goto T;}
        printf("\n");


    printf("\t\tOperating System With Lab \n");
    printf("\t\tSubject Code-SWE233:");
 U:   scanf("%d",&g);
    if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&g))
                        goto U;
            }
        goto U;}
        printf("\n");


    printf("\t\tObject Oriented Concepts And Design With Lab \n");
    printf("\t\tSubject Code-SWE235:");
 V:   scanf("%d",&s);
    if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&s))
                        goto V;
            }
        goto V;}
    }
    else if(x==7)
    {
         printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tPrincipal Of Accounting \n");
        printf("\t\tSubject Code-ACC301:");
     W:   scanf("%d",&m);
        if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&m))
                        goto W;
            }
        goto W;}
        printf("\n");


        printf("\t\tComputer Architecture &Organization \n");
        printf("\t\tSubject Code-SWE311:");
    Z:    scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&g))
                        goto Z;
            }
        goto Z;}
        printf("\n");


        printf("\t\tTheory Of Computing \n");
        printf("\t\tSubject Code-SWE312:");
     A1:   scanf("%d",&s);
        if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&s))
                        goto A1;
            }
        goto A1;}
        printf("\n");


        printf("\t\t.net programming with lab \n");
        printf("\t\tSubject Code-SWE314:");
    A2:    scanf("%d",&h);
        if(h<0 || h>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                 if (scanf("%[^\n]c",&h))
                        goto A2;
            }
        goto A2;}
    }
    else if(x==8)
    {
          printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tData Communication With Lab \n");
        printf("\t\tSubject Code-SWE322:");
    A3:    scanf("%d",&m);
        if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&m))
                        goto A3;
            }
        goto A3;}
        printf("\n");


        printf("\t\tSoftware Security \n");
        printf("\t\tSubject Code-SWE323:");
    A4:   scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&g))
                        goto A4;
            }
        goto A4;}
        printf("\n");


        printf("\t\tDesktop And Web Programming With Lab \n");
        printf("\t\tSubject Code-SWE325:");
    A5:    scanf("%d",&s);
        if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&s))
                        goto A5;
            }
        goto A5;}
    }
    else if(x==9)
    {
          printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tSystem Analysis & Design \n");
        printf("\t\tSubject Code-SWE323:");
    A6:    scanf("%d",&m);
        if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&m))
                        goto A6;
            }
        goto A6;}
        printf("\n");


        printf("\t\tSoftware Engineering project-||(Web Programming \n");
        printf("\t\tSubject Code-SWE332:");
    A7:    scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&g))
                        goto A7;
            }
        goto A7;}
        printf("\n");



        printf("\t\tComputer Networks With Lab \n");
        printf("\t\tSubject Code-SWE334:");
    A8:    scanf("%d",&s);
        if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&s))
                        goto A8;
            }
        goto A8;}
        printf("\n");


        printf("\t\tBangladesh Studies \n");
        printf("\t\tSubject Code-GED334:");
    A9:   scanf("%d",&h);
        if(h<0 || h>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&h))
                        goto A9;
            }
        goto A9;}
    }
    else if(x==10)
    {
         printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tObject Oriented Software Development (Lab based) \n");
        printf("\t\tSubject Code-SWE411:");
     A10:   scanf("%d",&m);
        if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&m))
                        goto A10;
            }
        goto A10;}
        printf("\n");

        printf("\t\tManagement Information System \n");
        printf("\t\tSubject Code-SWE412:");
     A11:   scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&g))
                        goto A11;
            }
        goto A11;}
        printf("\n");


        printf("\t\tSoftware Engineering and Cyber Laws \n");
        printf("\t\tSubject Code-SWE413:");
     A12:   scanf("%d",&s);
        if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&s))
                        goto A12;
            }
        goto A12;}
        printf("\n");

        printf("\t\tElective Subject:");
        scanf("%s",subject);
        printf("\t\tSubject Code-");
        scanf("%s",code);
        printf("\t\t%s:",code);
     A13:   scanf("%d",&h);
        if(h<0 || h>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&h))
                        goto A13;
            }
        goto A13;}
    }
    else if(x==11)
    {
           printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tMultimedia Programming with lab\n");
        printf("\t\tSubject Code-SWE422:");
    A14:    scanf("%d",&m);
        if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&m))
                        goto A14;
            }
        goto A14;}
        printf("\n");

        printf("\t\tElective Subject With Lab-||:");
        scanf("%s",subject);
        printf("\t\tSubject Code-");
        scanf("%s",code);
        printf("\t\t%s:",code);
    A15:    scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&g))
                        goto A15;
            }
        goto A15;}



        printf("\t\tElective Subject-|||:");
        scanf("%s",subject);
        printf("\t\tSubject Code-");
        scanf("%s",code1);
        printf("\t\t%s:",code1);
    A16:    scanf("%d",&s);
        if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&s))
                        goto A16;
            }
        goto A16;}
        printf("\n");
    }
    else if(x==12)
    {
         printf("\n\n\t\t\t\tAdd Marks:");
        printf("\n\n\n\n\t\tProject/Thesis(Internship Included \n");
        printf("\t\tSubject Code-SWE449:");
     A17:   scanf("%d",&m);
        if(m<0 || m>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&m))
                        goto A17;
            }
        goto A17;}
        printf("\n");

        printf("\t\tElective Subject-|V:");
        scanf("%s",subject);
        printf("\t\tSubject Code-:");
        scanf("%s",code);
        printf("\t\t%s:",code);
    A18:    scanf("%d",&g);
        if(g<0 || g>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&g))
                        goto A18;
            }
        goto A18;}
        printf("\n");


        printf("\t\tElective Subject-V:");
        scanf("%s",subject);
        printf("\t\tSubject Code-:");
        scanf("%s",code1);
        printf("\t\t%s:",code1);
    A19:   scanf("%d",&s);

        if(s<0 || s>100){
            printf("\t\t Please Enter Number 0-100:");
            {
                if (scanf("%[^\n]c",&s))
                        goto A19;
            }
        goto A19;}

    }
    else
    {
        {
             printf("\n\n\n\n\t\tPlease Choose Semester 1 To 12:");
            if (scanf("%[^\n]c",&x))
                        goto J;
        }
        goto J;
    }

/// 1st Mark Grade Letter-----

     if(m>=80)
            c="A+";
        else if(m>=75 && m<80)
        c="A";
        else if(m>=70 && m<75)
            c="A-";
        else if(m>=65 && m<70)
            c="B+";
        else if(m>=60 && m<65)
            c="B";
        else if(m>=55 && m<60)
            c="B-";
        else if(m>=50 && m<55)
            c="C+";
        else if(m>=45 && m<50)
            c="C";
        else if(m>=40 && m<45)
            c="D";
        else
            c="Fail";

        ///2nd Mark Grade letter----


            if(g>=80)
            d="A+";
        else if(g>=75 && g<80)
        d="A";
        else if(g>=70 && g<75)
            d="A-";
        else if(g>=65 && g<70)
            d="B+";
        else if(g>=60 && g<65)
            d="B";
        else if(g>=55 && g<60)
            d="B-";
        else if(g>=50 && g<55)
            d="C+";
        else if(g>=45 && g<50)
            d="C";
        else if(g>=40 && g<45)
            d="D";
        else
            d="Fail";


          ///3rd Mark Grade Letter----



             if(s>=80)
            f="A+";
        else if(s>=75 && s<80)
        f="A";
        else if(s>=70 && s<75)
            f="A-";
        else if(s>=65 && s<70)
            f="B+";
        else if(s>=60 && s<65)
            f="B";
        else if(s>=55 && s<60)
            f="B-";
        else if(s>=50 && s<55)
            f="C+";
        else if(s>=45 && s<50)
            f="C";
        else if(s>=40 && s<45)
            f="D";
        else
            f="Fail";

            ///4th Mark Grade Letter---



           if(h>=80)
            y="A+";
        else if(h>=75 && h<80)
        y="A";
        else if(h>=70 && h<75)
            y="A-";
        else if(h>=65 && h<70)
            y="B+";
        else if(h>=60 && h<65)
            y="B";
        else if(h>=55 && h<60)
            y="B-";
        else if(h>=50 && h<55)
            y="C+";
        else if(h>=45 && h<50)
            y="C";
        else if(h>=40 && h<45)
            y="D";
        else
            y="Fail";



        ///Grade Point----------

       ///1st Mark Grade Point---------------

        if(m>=80)
            k=4.00;
        else if(m>=75 && m<80)
        k=3.75;
        else if(m>=70 && m<75)
            k=3.50;
        else if(m>=65 && m<70)
            k=3.25;
        else if(m>=60 && m<65)
            k=3.00;
        else if(m>=55 && m<60)
            k=2.75;
        else if(m>=50 && m<55)
            k=2.50;
        else if(m>=45 && m<50)
            k=2.25;
        else if(m>=40 && m<45)
            k=2.00;
        else
            k=0.00;

           ///2nd Mark Grade Point----

             if(g>=80)
            q=4.00;
        else if(g>=75 && g<80)
            q=3.75;
        else if(g>=70 && g<75)
            q=3.50;
        else if(g>=65 && g<70)
            q=3.25;
        else if(g>=60 && g<65)
            q=3.00;
        else if(g>=55 && g<60)
            q=2.75;
        else if(g>=50 && g<55)
            q=2.50;
        else if(g>=45 && g<50)
            q=2.25;
        else if(g>=40 && g<45)
            q=2.00;
        else
            q=0.00;

          ///3rd Mark Grade Point---

             if(s>=80)
            w=4.00;
        else if(s>=75 && s<80)
            w=3.75;
        else if(s>=70 && s<75)
            w=3.50;
        else if(s>=65 && s<70)
            w=3.25;
        else if(s>=60 && s<65)
            w=3.00;
        else if(s>=55 && s<60)
            w=2.75;
        else if(s>=50 && s<55)
            w=2.50;
        else if(s>=45 && s<50)
            w=2.25;
        else if(s>=40 && s<45)
            w=2.00;
        else
           w=0.00;

           ///4th Mark Grade Point------------


               if(h>=80)
            z=4.00;
        else if(h>=75 && h<80)
            z=3.75;
        else if(h>=70 && h<75)
            z=3.50;
        else if(h>=65 && h<70)
            z=3.25;
        else if(h>=60 && h<65)
            z=3.00;
        else if(h>=55 && h<60)
            z=2.75;
        else if(h>=50 && h<55)
            z=2.50;
        else if(h>=45 && h<50)
            z=2.25;
        else if(h>=40 && h<45)
            z=2.00;
        else
            z=0.00;
       system("CLS");
       system("COLOR 71");
       ///Result


       if(x==1)
       {


        printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:1)");
        printf("\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");





       printf("\n\n\tSWE113 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE114 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tPHY114 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);

        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);

        ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 1\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");

         fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:1)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");





       fprintf(fp,"\n\n\tSWE113 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE114 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tPHY114 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
         fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);
          fclose(fp);
          exit(1);
          getch();
        }
        else
        exit(1);



        ///clearing-----
        getch();

       }
       else if(x==2)
       {

        printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:2)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tENG121 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tMAT111 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSWE121 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\tSWE124 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);


         ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 2\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:2)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");

         fprintf(fp,"\n\n\tENG121 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tMAT111 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSWE121 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\tSWE124 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);




          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


       ///clearing------ ----
        getch();
       }
       else if(x==3)
       {
            printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:3)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tMAT121 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE133 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSTA131 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\tSWE134 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);


         ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 3\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:3)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");
        fprintf(fp,"\n\n\tMAT121 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE133 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSTA131 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\tSWE134 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);




          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


        ///Clearing--------
        getch();
       }
       else if(x==4)
       {
            printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:4)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tSWE212 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE214 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSWE216 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);

         ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress 2 for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 4\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:4)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");
         fprintf(fp,"\n\n\tSWE212 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE214 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSWE216 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);




          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


        ///clearing------
        getch();
       }
       else if(x==5)
       {
            printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:5)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tSWE221 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE222 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSWE224 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\tSWE225 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);

           ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 5\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:5)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");

        fprintf(fp,"\n\n\tSWE221 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE222 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSWE224 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\tSWE225 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);



          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);





        ///cearing-----
        getch();
       }
       else if(x==6)
       {
             printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:6)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tSWE231 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE233 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSWE235 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);

          ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 6\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:6)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");
         fprintf(fp,"\n\n\tSWE231 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE233 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSWE235 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);




          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


       /// clearing--------------
        getch();
       }
       else if(x==7)
       {
            printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:7)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tACC301 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE311 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSWE312 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\tSWE314 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);

          ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 7\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:7)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");

          fprintf(fp,"\n\n\tACC301 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE311 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSWE312 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\tSWE314 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);



          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


        ///clearing-------------
        getch();
       }
       else if(x==8)
       {
            printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:8)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tSWE322 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE323 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSWE325 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);

           ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 8\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:8)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");
           fprintf(fp,"\n\n\tSWE322 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE323 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSWE325 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);


          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


        ///clearing---------------
        getch();
       }
       else if(x==9)
       {
            printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:9)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tSWE323 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE332 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSWE334 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\tGED334 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);

          ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 9\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:9)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");
        fprintf(fp,"\n\n\tSWE323 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE332 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSWE334 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\tGED334 \t\t %d\t\t %s\t\t\t %.2f ",h,y,z);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);






          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


        ///clearing-------
        getch();
       }
       else if(x==10)
       {
            printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:10)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tSWE411 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\tSWE412 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        printf("\n\n\tSWE413 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        printf("\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f ",code,h,y,z);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);

         ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 10\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:10)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");
         fprintf(fp,"\n\n\tSWE411 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\tSWE412 \t\t %d\t\t %s\t\t\t %.2f",g,d,q);
        fprintf(fp,"\n\n\tSWE413 \t\t %d\t\t %s\t\t\t %.2f",s,f,w);
        fprintf(fp,"\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f ",code,h,y,z);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w+z)/4);






          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


        ///clearing-----------
        getch();
       }
       else if(x==11)
       {
             printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:11)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tSWE422 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f",code,g,d,q);
        printf("\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f",code1,s,f,w);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);

          ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any Key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 11\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:11)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");
         fprintf(fp,"\n\n\tSWE422 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f",code,g,d,q);
        fprintf(fp,"\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f",code1,s,f,w);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);






          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


        ///clearing-----------


      ///  clearing-----------------
        getch();
       }
       else if(x==12)
       {
            printf("\t\t\t\tDepartment:SWE\n\n");
        printf("\t\t\t\t(Semester:12)");
        printf("\n\nName:%s \t\t\t\t\t\t ID:%s\n\n",fname,id);
        printf("\n\n\tSubject\t\tMarks\t\tGrade Latter\t\tGrade Point\n");
        printf("\n\n\tSWE449 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        printf("\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f",code,g,d,q);
        printf("\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f",code1,s,f,w);
        printf("\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);

            ///File Saving Method------or Exiting -------

        printf("\n\n\nPress 1 to save The Result\t\t\tPress Any key for exit\n");
        printf("Press Number:");
        int save;
        scanf("%d",&save);
        system("CLS");
        if(save==1)
        {

        ///File Creating Method -------
          // system("CLS");
           char path[]="D:\\DIU CGPA MANAGMENT SESTEM\\Semester 12\\";
           strcat(fname,".doc");
           strcat(path,fname);
           FILE *fp;
          fp=fopen(path,"w");
          fprintf(fp,"\t\t\t\tDepartment:SWE\n\n");
        fprintf(fp,"\t\t\t\t(Semester:12)");
        fprintf(fp,"\n\nName:%s \t\t\t\t\t ID:%s\n\n",fname,id);
        fprintf(fp,"\n\n\tSubject\t\tMarks\t\tGrade Latter\tGrade Point\n");
         fprintf(fp,"\n\n\tSWE449 \t\t %d\t\t %s\t\t\t %.2f",m,c,k);
        fprintf(fp,"\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f",code,g,d,q);
        fprintf(fp,"\n\n\t%s\t\t %d\t\t %s\t\t\t %.2f",code1,s,f,w);
        fprintf(fp,"\n\n\n\t\t\t AVERAGE GRADE:%.2f",(k+q+w)/3);






          fclose(fp);
          exit(1);
          getch();
        }
        else
            exit(1);


        ///clearing------
        getch();
       }

}







