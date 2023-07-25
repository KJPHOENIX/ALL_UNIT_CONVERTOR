#include<stdio.h>
#include<math.h>


int main()
{
    char option;
    int l,o;
    float a,b,c;

    lable:

    //while(1)
    //{

        printf("\n\t\t\tUNIT CONVERSION");
        printf("\n\t\t\t              -by nix");

        printf("\n\n                a.AREA                  b.DATA TRANSFER RATE");
        printf("\n\n                c.DIGITAL STROAGE       d.ENERGY");
        printf("\n\n                e.FREQUENCY             f.FUEL ECONOMY");
        printf("\n\n                g.LENGTH                h.MASS");
        printf("\n\n                i.PRESSURE              j.SPEED");
        printf("\n\n                k.TEMPURATURE           l.TIME");

        printf("\n\nEnter your option : ");
        scanf(" %c", &option);

        switch(option)
        {
        case 'a':
            printf("\nyou choose area conversion");

            printf("\n1. square kilometer to square meter");
            printf("\n2. square kilometer to square mile");
            printf("\n3. square kilometer to square inch");
            printf("\n4. square kilometer to acre");
            printf("\n5. square mile      to square kilometer");
            printf("\n6. square mile      to square meter");
            printf("\n7. square mile      to square inch");
            printf("\n8. square mile      to acre");
            printf("\n9. square inch      to square kilometer");
            printf("\n10.square inch      to square meter");
            printf("\n11.square inch      to square mile");
            printf("\n12.square inch      to acre");
            printf("\n13.square meter     to square kilometer");
            printf("\n14.square meter     to square mile");
            printf("\n15.square meter     to square inch");
            printf("\n16.square meter     to arce");
            printf("\n17.acre             to square kilometer");
            printf("\n18.acre             to square meter");
            printf("\n19.acre             to square mile");
            printf("\n20.acre             to square inch");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);


            if(l == 1)
            {

                printf("square kilometer to square meter\n\nsquare kilometer value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f square kilometer = %f square meter",a,b);
            }

            else if(l == 2)
            {

                printf("square kilometer to square mile\n\nsquare kilometer value :");
                scanf("%f",&a);
                b = a/2.58;
                printf("%f square kilometer = %f square mile",a,b);
            }

            else if(l == 3)
            {

                printf("square kilometer to square inch\n\nsquare kilometer value :");
                scanf("%f",&a);
                b = a*1.550000000;
                printf("%f square kilometer = %f square inch",a,b);
            }

            else if(l == 4)
            {

                printf("square kilometer to acre\n\nsquare kilometer value :");
                scanf("%f",&a);
                b = a*247.1;
                printf("%f square kilometer = %f acre",a,b);
            }

            if(l == 5)
            {

                printf("square mile to square kilometer\n\nsquare mile value :");
                scanf("%f",&a);
                b = a*2.59;
                printf("%f square mile = %f square kilometer",a,b);
            }

            else if(l == 6)
            {

                printf("square mile to square meter\n\nsquare mile value :");
                scanf("%f",&a);
                b = a*2.590000;
                printf("%f square mile = %f square mile",a,b);
            }

            else if(l == 7)
            {

                printf("square mile to square inch\n\nsquare mile value :");
                scanf("%f",&a);
                b = a*4.014000000;
                printf("%f square mile = %f square inch",a,b);
            }

            else if(l == 8)
            {

                printf("square mile to acre\n\nsquare mile value :");
                scanf("%f",&a);
                b = a*640;
                printf("%f square mile = %f acre",a,b);
            }

            else if(l == 9)
            {

                printf("square inch to square kilometer\n\nsquare inch value :");
                scanf("%f",&a);
                b = a/1500000000;
                printf("%f square inch = %f square kilometer",a,b);
            }

            else if(l == 10)
            {

                printf("square inch to square meter\n\nsquare inch value :");
                scanf("%f",&a);
                b = a/1550;
                printf("%f square inch = %f square meter",a,b);
            }

            else if(l == 11)
            {

                printf("square inch to square mile\n\nsquare inch value :");
                scanf("%f",&a);
                b = a/4014000000;
                printf("%f square inch = %f square mile",a,b);
            }

            else if(l == 12)
            {

                printf("square inch to acre\n\nsquare inch value :");
                scanf("%f",&a);
                b = a/6273000;
                printf("%f square inch = %f acre",a,b);
            }

            else if(l == 13)
            {

                printf("square meter to square kilometer\n\nsquare meter value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f square meter = %f square kilometer",a,b);
            }

            else if(l == 14)
            {

                printf("square meter to square mile\n\nsquare meter value :");
                scanf("%f",&a);
                b = a/2590000;
                printf("%f square meter = %f square mile",a,b);
            }

            else if(l == 15)
            {

                printf("square meter to square inch\n\nsquare meter value :");
                scanf("%f",&a);
                b = a*1550;
                printf("%f square meter = %f square inch",a,b);
            }

            else if(l == 16)
            {

                printf("square meter to acre\n\nsquare meter value :");
                scanf("%f",&a);
                b = a/4047;
                printf("%f square meter = %f acre",a,b);
            }

            else if(l == 17)
            {

                printf("acre to square kilometer\n\nacre value :");
                scanf("%f",&a);
                b = a/247.1;
                printf("%f acre = %f square kilometer",a,b);
            }

            else if(l == 18)
            {

                printf("acre to square meter\n\nacre value :");
                scanf("%f",&a);
                b = a*4047;
                printf("%f acre = %f square meter",a,b);
            }

            else if(l == 19)
            {

                printf("acre to square mile\n\nacre value :");
                scanf("%f",&a);
                b = a/640;
                printf("%f acre = %f square mile",a,b);
            }

            else if(l == 20)
            {

                printf("acre to square inch\n\nacre value :");
                scanf("%f",&a);
                b = a*6273000;
                printf("%f acre = %f square inch",a,b);
            }

            //else
            //{
            //    printf("Enter wrong option");
            //}


            break;

        case 'b':
            printf("\nyou choose data transfer rate conversion");

            printf("\n1. kilobyte to megabyte");
            printf("\n2. kilobyte to gigabyte");
            printf("\n3. kilobyte to terabyte");
            printf("\n4. megabyte to kilobyte");
            printf("\n5. megabyte to gigabyte");
            printf("\n6. megabyte to terabyte");
            printf("\n7. gigabyte to kilobyte");
            printf("\n8. gigabyte to megabyte");
            printf("\n9. gigabyte to terabyte");
            printf("\n10.terabyte to kilobyte");
            printf("\n11.terabyte to megabyte");
            printf("\n12.terabyte to gigabyte");


            printf("\n\nEnter your option : ");
            scanf("%d",&l);

            if(l == 1)
            {

                printf("kilobyte to megabyte\n\nkilobyte value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f kilobyte = %f megabyte",a,b);
            }

            else if(l == 2)
            {

                printf("kilobyte to gigabyte\n\nkilobyte value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f kilobyte = %f gigabyte",a,b);
            }

            else if(l == 3)
            {

                printf("kilobyte to terabyte\n\nkilobyte value :");
                scanf("%f",&a);
                b = a/1000000000;
                printf("%f kilobyte = %f terabyte",a,b);
            }

            else if(l == 4)
            {

                printf("megaobyte to kilobyte\n\nmegabyte value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f megabyte = %f kilobyte",a,b);
            }

            else if(l == 5)
            {

                printf("megaobyte to gigabyte\n\nmegabyte value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f megabyte = %f gigabyte",a,b);
            }

            else if(l == 6)
            {

                printf("megaobyte to terabyte\n\nmegabyte value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f megabyte = %f terabyte",a,b);
            }

            else if(l == 7)
            {

                printf("gigaobyte to kilobyte\n\ngigabyte value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f gigabyte = %f kilobyte",a,b);
            }

            else if(l == 8)
            {

                printf("gigaobyte to megabyte\n\ngigabyte value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f gigabyte = %f megabyte",a,b);
            }

            else if(l == 9)
            {

                printf("gigaobyte to terabyte\n\ngigabyte value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f gigabyte = %f terabyte",a,b);
            }

            else if(l == 10)
            {

                printf("teraobyte to kilobyte\n\nterabyte value :");
                scanf("%f",&a);
                b = a*1000000000;
                printf("%f terabyte = %f kilobyte",a,b);
            }

            else if(l == 11)
            {

                printf("teraobyte to megabyte\n\nterabyte value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f terabyte = %f megabyte",a,b);
            }

            else if(l == 12)
            {

                printf("teraobyte to gigabyte\n\nterabyte value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f terabyte = %f gigabyte",a,b);
            }

            else
            {
                printf("Enter wrong option");

            }



            break;

        case 'c':
            printf("\nyou choose digital storage conversion");

            printf("\n1. kilobyte to megabyte");
            printf("\n2. kilobyte to gigabyte");
            printf("\n3. kilobyte to terabyte");
            printf("\n4. megabyte to kilobyte");
            printf("\n5. megabyte to gigabyte");
            printf("\n6. megabyte to terabyte");
            printf("\n7. gigabyte to kilobyte");
            printf("\n8. gigabyte to megabyte");
            printf("\n9. gigabyte to terabyte");
            printf("\n10.terabyte to kilobyte");
            printf("\n11.terabyte to megabyte");
            printf("\n12.terabyte to gigabyte");


            printf("\n\nEnter your option : ");
            scanf("%d",&l);

            if(l == 1)
            {

                printf("kilobyte to megabyte\n\nkilobyte value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f kilobyte = %f megabyte",a,b);
            }

            else if(l == 2)
            {

                printf("kilobyte to gigabyte\n\nkilobyte value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f kilobyte = %f gigabyte",a,b);
            }

            else if(l == 3)
            {

                printf("kilobyte to terabyte\n\nkilobyte value :");
                scanf("%f",&a);
                b = a/1000000000;
                printf("%f kilobyte = %f terabyte",a,b);
            }

            else if(l == 4)
            {

                printf("megaobyte to kilobyte\n\nmegabyte value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f megabyte = %f kilobyte",a,b);
            }

            else if(l == 5)
            {

                printf("megaobyte to gigabyte\n\nmegabyte value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f megabyte = %f gigabyte",a,b);
            }

            else if(l == 6)
            {

                printf("megaobyte to terabyte\n\nmegabyte value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f megabyte = %f terabyte",a,b);
            }

            else if(l == 7)
            {

                printf("gigaobyte to kilobyte\n\ngigabyte value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f gigabyte = %f kilobyte",a,b);
            }

            else if(l == 8)
            {

                printf("gigaobyte to megabyte\n\ngigabyte value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f gigabyte = %f megabyte",a,b);
            }

            else if(l == 9)
            {

                printf("gigaobyte to terabyte\n\ngigabyte value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f gigabyte = %f terabyte",a,b);
            }

            else if(l == 10)
            {

                printf("teraobyte to kilobyte\n\nterabyte value :");
                scanf("%f",&a);
                b = a*1000000000;
                printf("%f terabyte = %f kilobyte",a,b);
            }

            else if(l == 11)
            {

                printf("teraobyte to megabyte\n\nterabyte value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f terabyte = %f megabyte",a,b);
            }

            else if(l == 12)
            {

                printf("teraobyte to gigabyte\n\nterabyte value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f terabyte = %f gigabyte",a,b);
            }

            else
            {
                printf("Enter wrong option");

            }



            break;

        case 'd':
            printf("\nyou choose energy conversion");

            printf("\n1.joule          to kilojoule");
            printf("\n2.kilojoule      to joule");
            printf("\n3.watt hour      to kilowatt hour");
            printf("\n4.kilowatt hour  to watt hour");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);


            if(l == 1)
            {

                printf("joule to kilojoule\n\njoule value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f joule = %f kilojoule",a,b);
            }

            else if(l == 2)
            {


                printf("kilojoule to joule \n\njoule value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f kilojoule = %f joule",a,b);
            }

            else if(l == 3)
            {


                printf("watt hour to kilowatt hour\n\nwatt hour value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f watt hour = %f kilowatt hour",a,b);
            }

            else if(l == 4)
            {


                printf("kilowatt hour to watt hour\n\nkilowatt value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f kilowatt hour = %f watt",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }


            break;

        case 'e':
            printf("\nyou choose frequency conversion");

            printf("\n1. hertz     to kilohertz");
            printf("\n2. hertz     to megahertz");
            printf("\n3. hertz     to gigahertz");
            printf("\n4. kilohertz to hertz");
            printf("\n5. kilohertz to megahertz");
            printf("\n6. kilohertz to gigahertz");
            printf("\n7. megahertz to hertz");
            printf("\n8. megahertz to kilohertz");
            printf("\n9. megahertz to gigahertz");
            printf("\n10.gigahertz to hertz");
            printf("\n11.gigahertz to kilohertz");
            printf("\n12.gigahertz to megahertz");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);


            if(l == 1)
            {

                printf("hertz to kilohertz\n\nhertz value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f hertz = %f kilohertz",a,b);
            }

            else if(l == 2)
            {

                printf("hertz to megahertz\n\nhertz value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f hertz = %f kilohertz",a,b);
            }

            else if(l == 3)
            {

                printf("hertz to gigahertz\n\nhertz value :");
                scanf("%f",&a);
                b = a/1000000000;
                printf("%f hertz = %f gigahertz",a,b);
            }

            else if(l == 4)
            {

                printf("kilohertz to hertz\n\nkilohertz value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f kilohertz = %f hertz",a,b);
            }

            else if(l == 5)
            {

                printf("kilohertz to megahertz\n\nkilohertz value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f kilohertz = %f megahertz",a,b);
            }

            else if(l == 6)
            {

                printf("kilohertz to gigahertz\n\nkilohertz value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f kilohertz = %f gigahertz",a,b);
            }

            else if(l == 7)
            {

                printf("megahertz to hertz\n\nmegahertz value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f megahertz = %f hertz",a,b);
            }

            else if(l == 8)
            {

                printf("megahertz to kilohertz\n\nmegahertz value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f megahertz = %f kilohertz",a,b);
            }

            else if(l == 9)
            {

                printf("megahertz to gigahertz\n\nmegahertz value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f megahertz = %f gigahertz",a,b);
            }

            else if(l == 10)
            {

                printf("gigahertz to hertz\n\ngigahertz value :");
                scanf("%f",&a);
                b = a*1000000000;
                printf("%f gigahertz = %f hertz",a,b);
            }

            else if(l == 11)
            {

                printf("gigahertz to kilohertz\n\ngigahertz value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f gigahertz = %f kilohertz",a,b);
            }

            else if(l == 12)
            {

                printf("gigahertz to megahertz\n\ngigahertz value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f gigahertz = %f megahertz",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }



            break;

        case 'f':
            printf("\nyou choose fuel economy conversion");

            printf("\n1.kilometer per liter to liter per 100 kilometer");
            printf("\n2.liter per 100 kilometer to kilometer per liter");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);


            if(l == 1)
            {

                printf("kilometer per liter to liter per 100 kilomete\n\nkilometer value :");
                scanf("%f",&a);
                b = 100/(a/1);
                printf("%f kilometer per hour = %f liter per 100 kilometer",a,b);
            }

            else if(l == 2)
            {


                printf("liter per 100 kilometer to kilometer per liter\n\nliter value :");
                scanf("%f",&a);
                b = 100/(a/1);
                printf("%f liter per 100 kilometer = %f kilometer per liter",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }





            break;

        case 'g':
            printf("\nyou choose length conversion");

            printf("\n1 . kilometer to meter");
            printf("\n2 . kilometer to centimeter");
            printf("\n3 . kilometer to millimeter");
            printf("\n4 . kilometer to miles");
            printf("\n5 .meter      to kilometer");
            printf("\n6 .meter      to centimeter");
            printf("\n7 .meter      to millimeter");
            printf("\n8 .meter      to mile");
            printf("\n9 .centimeter to kilometer");
            printf("\n10.centimeter to meter");
            printf("\n11.centimeter to millimeter");
            printf("\n12.centimeter to mile");
            printf("\n13.millimeter to kilometer");
            printf("\n14.millimeter to meter");
            printf("\n15.millimeter to centimeter");
            printf("\n16.millimeter to mile");
            printf("\n17.mile       to kilometer");
            printf("\n18.mile       to meter");
            printf("\n19.mile       to centimeter");
            printf("\n20.mile       to millimeter");



            printf("\n\nEnter your option : ");
            scanf("%d",&l);

            if(l == 1)
            {

                printf("kilometer to meter\n\nkilometer value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f kilometer = %f meter",a,b);
            }

            else if(l == 2)
            {

                printf("kilometer to centimeter\n\nkilometer value :");
                scanf("%f",&a);
                b = a*100000;
                printf("%f kilometer = %f centimeter",a,b);
            }

            else if(l == 3)
            {

                printf("kilometer to millimeter\n\nkilometer value :");
                scanf("%f",&a);
                a = a*1000000;
                printf("%f kilometer = %f millimeter",a,b);
            }

            else if(l == 4)
            {

                printf("kilometer to mile \n\nkilometer value :");
                scanf("%f",&a);
                b = a/1.609;
                printf("%f kilometer = %f miles",a,b);
            }

            else if(l == 5)
            {

                printf("meter to kilometer \n\nmeter value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f meter = %f kilometer",a,b);
            }

            else if(l == 6)
            {

                printf("meter to centimeter \n\nmeter value :");
                scanf("%f",&a);
                b = a*200;
                printf("%f meter = %f centimeter",a,b);
            }

            else if(l == 7)
            {

                printf("meter to millimeter \n\nmeter value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f meter = %f millimeter",a,b);
            }

            else if(l == 8)
            {

                printf("meter to mile \n\nmeter value :");
                scanf("%f",&a);
                b = a/1609;
                printf("%f meter = %f mile",a,b);
            }

            else if(l == 9)
            {

                printf("centimeter to kilometer \n\ncentimeter value :");
                scanf("%f",&a);
                b = a/100000;
                printf("%f centimeter = %f kilometer",a,b);
            }

            else if(l == 10)
            {

                printf("centimeter to meter \n\ncentimeter value :");
                scanf("%f",&a);
                b = a/100;
                printf("%f centimeter = %f meter",a,b);
            }

            else if(l == 11)
            {

                printf("centimeter to millimeter \n\ncentimeter value :");
                scanf("%f",&a);
                b = a*10;
                printf("%f centimeter = %f millimeter",a,b);
            }

            else if(l == 12)
            {

                printf("centimeter to mile\n\ncentimeter value :");
                scanf("%f",&a);
                b = a/160900;
                printf("%f centimeter = %f mile",a,b);
            }

            else if(l == 13)
            {

                printf("millimeter to kilometer \n\nmillimeter value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f millimeter = %f kilometer",a,b);
            }

            else if(l == 14)
            {

                printf("millimeter to meter \n\nmillimeter value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f millimeter = %f meter",a,b);
            }

            else if(l == 15)
            {

                printf("millimeter to centimeter \n\nmillimeter value :");
                scanf("%f",&a);
                b = a/10;
                printf("%f millimeter = %f centimeter",a,b);
            }

            else if(l == 16)
            {

                printf("millimeter to mile \n\nmillimeter value :");
                scanf("%f",&a);
                b = a/1609000;
                printf("%f millimeter = %f mile",a,b);
            }

            else if(l == 17)
            {

                printf("mile to kilometer \n\nmile value :");
                scanf("%f",&a);
                b = a*1.609;
                printf("%f mile = %f kilometer",a,b);
            }

            else if(l == 18)
            {

                printf("mile to meter \n\nmile value :");
                scanf("%f",&a);
                b = a*1609;
                printf("%f mile = %f meter",a,b);
            }

            else if(l == 19)
            {

                printf("mile to centimeter \n\nmile value :");
                scanf("%f",&a);
                b = a*160900;
                printf("%f mile = %f centimeter",a,b);
            }

            else if(l == 20)
            {

                printf("mile to millimeter \n\nmile value :");
                scanf("%f",&a);
                b = a*1609000;
                printf("%f mile = %f millimeter",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }


            break;

        case 'h':
            printf("\nyou choose mass conversion");

            printf("\n1 .tonne    to kilogram");
            printf("\n2 .tonne    to gram");
            printf("\n3 .tonne    to pound");
            printf("\n4 .kilogram to tonne");
            printf("\n5 .kilogram to gram");
            printf("\n6 .kilogram to pound");
            printf("\n7 .gram     to tonne");
            printf("\n8 .gram     to kilogram");
            printf("\n9 .gram     to pound");
            printf("\n10.pound    to tonne");
            printf("\n11.pound    to kilogram");
            printf("\n12.pound    to gram");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);

            if(l == 1)
            {

                printf("tonne to kilogram\n\ntonne value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f tonne = %f kilogram",a,b);
            }

            else if(l == 2)
            {

                printf("tonne to gram\n\ntonne value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f tonne = %f gram",a,b);
            }

            else if(l == 3)
            {

                printf("tonne to pound\n\ntonne value :");
                scanf("%f",&a);
                b = a*2205;
                printf("%f tonne = %f pound",a,b);
            }

            else if(l == 4)
            {

                printf("kilogram to tonne\n\nkilogram value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f kilogram = %f tonne",a,b);
            }

            else if(l == 5)
            {

                printf("kilogram to gram\n\nkilogram value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f kilogram = %f gram",a,b);
            }

            else if(l == 6)
            {

                printf("kilogram to pound\n\nkilogram value :");
                scanf("%f",&a);
                b = a*2.205;
                printf("%f kilogram = %f pound",a,b);
            }

            else if(l == 7)
            {

                printf("gram to tonne\n\ngram value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f gram = %f tonne",a,b);
            }

            else if(l == 8)
            {

                printf("gram to kilogram\n\ngram value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f gram = %f kilogram",a,b);
            }

            else if(l == 9)
            {

                printf("gram to pound\n\ngram value :");
                scanf("%f",&a);
                b = a/453.6;
                printf("%f gram = %f pound",a,b);
            }

            else if(l == 10)
            {

                printf("pound to tonne\n\npound value :");
                scanf("%f",&a);
                b = a/2205;
                printf("%f pound = %f tonne",a,b);
            }

            else if(l == 11)
            {

                printf("pound to kilogram\n\npound value :");
                scanf("%f",&a);
                b = a/2.205;
                printf("%f pound = %f kilogram",a,b);
            }

            else if(l == 12)
            {

                printf("pound to gram\n\npound value :");
                scanf("%f",&a);
                b = a*453.6;
                printf("%f pound = %f gram",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }



            break;

        case 'i':
            printf("\nyou choose pressure conversion");

            printf("\n1.bar    to pascal");
            printf("\n2.pascal to bar");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);

            if(l == 1)
            {

                printf("bar to pascal\n\nbar value :");
                scanf("%f",&a);
                b = a*100000;
                printf("%f bar = %f pascal",a,b);
            }

            else if(l == 2)
            {


                printf("pascal to bar\n\npascal value :");
                scanf("%f",&a);
                b = a*0.00001;
                printf("%f pascal = %f bar",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }

            break;

            break;

        case 'j':
            printf("\nyou choose speed conversion");

            printf("\n1.mile per hour to meter per second");
            printf("\n2.mile per hour to kilometer per hour");
            printf("\n3.meter per second to mile per hour");
            printf("\n4.meter per second to kilometer per hour");
            printf("\n5.kilometer per hour to mile per hour");
            printf("\n6.kilometer per hour to meter per second");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);


            if(l == 1)
            {

                printf("mile per hour to meter per second\n\nmile value :");
                scanf("%f",&a);
                b = a/2.237;
                printf("%f mile per hour = %f meter per second",a,b);
            }

            else if(l == 2)
            {


                printf("mile per hour to kilometer per hour \n\nmile value :");
                scanf("%f",&a);
                b = a*1.609;
                printf("%f mile per hour = %f kilometer per hour",a,b);
            }

            else if(l == 3)
            {


                printf("meter per second to mile per hour\n\nmeter value :");
                scanf("%f",&a);
                b = a*2.237;
                printf("%f meter per second = %f mile per hour",a,b);
            }

            else if(l == 4)
            {


                printf("meter per second to kilometer per hour\n\nmeter value :");
                scanf("%f",&a);
                b = a*3.6;
                printf("%f meter per second = %f kilometer per hour",a,b);
            }


            else if(l == 5)
            {


                printf("kilometer per hour to mile per hour\n\nkilometer value :");
                scanf("%f",&a);
                b = a/1.609;
                printf("%f kilometer per hour = %f mile per hour",a,b);
            }

            else if(l == 6)
            {


                printf("kilometer per hour to meter per second\n\nkilometer value :");
                scanf("%f",&a);
                b = a/3.6;
                printf("%f kilometer per hour = %f meter per second",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }


            break;

        case 'k':
            printf("\nyou choose tempurature conversion");

            printf("\n1.degree celsius to fahrenheit");
            printf("\n2.degree celsius to kelvin");
            printf("\n3.farhrenheit    to degree celsius");
            printf("\n4.farhrenheit    to kelvin");
            printf("\n5.kelvin         to degree celsius");
            printf("\n6.kelvin         to fehrenheit");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);


            if(l == 1)
            {

                printf("degree celsius to fahrenheit\n\ndegree celsius value :");
                scanf("%f",&a);
                b = (a*9/5)+32;
                printf("%f degree celsius = %f farhrenhiet",a,b);
            }

            else if(l == 2)
            {


                printf("degree celsius to kelvin \n\ndegree celsius value :");
                scanf("%f",&a);
                b = a+273.15;
                printf("%f degree celsius = %f kelvin",a,b);
            }

            else if(l == 3)
            {


                printf("farhrenheit to degree celsius\n\nfarhrenheit value :");
                scanf("%f",&a);
                b = (a-32)*5/9;
                printf("%f farhrenhiet = %f degree celsius",a,b);
            }

            else if(l == 4)
            {


                printf("farhrenheit to kelvin\n\nfarhrenheit value :");
                scanf("%f",&a);
                b = (a-32)*5/9+273.15;
                printf("%f ferhrenheit = %f kelvin",a,b);
            }


            else if(l == 5)
            {


                printf("kelvin to degree celsius\n\nkelvin value :");
                scanf("%f",&a);
                b = a-273.15;
                printf("%f kelvin = %f degree celsius",a,b);
            }

            else if(l == 6)
            {


                printf("kelvin to ferhrenheit\n\nkelvin value :");
                scanf("%f",&a);
                b = (a-273)*9/5+32;
                printf("%f kelvin = %f ferhrenheit",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }

            break;

        case 'l':
            printf("\nyou choose time conversion");

            printf("\n1 .microsecond to millisecond");
            printf("\n2 .microsecond to second");
            printf("\n3 .microsecond to minute");
            printf("\n4 .microsecond to hour");
            printf("\n5 .millisecond to microsecond");
            printf("\n6 .millisecond to second");
            printf("\n7 .millisecond to minute");
            printf("\n8 .millisecond to hour");
            printf("\n9 .second      to microsecond");
            printf("\n10.second      to millisecond");
            printf("\n11.second      to minute");
            printf("\n12.second      to hour");
            printf("\n13.minute      to microsecond");
            printf("\n14.minute      to millisecond");
            printf("\n15.minute      to second");
            printf("\n16.minute      to hour");
            printf("\n17.hour        to microsecond");
            printf("\n18.hour        to millisecond");
            printf("\n19.hour        to second");
            printf("\n20.hour        to minute");

            printf("\n\nEnter your option : ");
            scanf("%d",&l);


            if(l == 1)
            {
                printf("microsecond to millisecond\n\nmicrosecond value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f microsecond = %f millisecond",a,b);
            }

            else if(l == 2)
            {
                printf("microsecond to second\n\nmicrosecond value :");
                scanf("%f",&a);
                b = a/1000000;
                printf("%f microsecond = %f second",a,b);
            }

            else if(l == 3)
            {
                printf("microsecond to minute\n\nmicrosecond value :");
                scanf("%f",&a);
                b = a/60000000;
                printf("%f microsecond = %f minute",a,b);
            }

            else if(l == 4)
            {
                printf("microsecond to hour\n\nmicrosecond value :");
                scanf("%f",&a);
                b = a/3600000000;
                printf("%f microsecond = %f hour",a,b);
            }

            else if(l == 5)
            {
                printf("millisecond to microsecond\n\nmillisecond value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f millisecond = %f microsecond",a,b);
            }

            else if(l == 6)
            {
                printf("millisecond to second\n\nmillisecond value :");
                scanf("%f",&a);
                b = a/1000;
                printf("%f millisecond = %f second",a,b);
            }

            else if(l == 7)
            {
                printf("millisecond to minute\n\nmillisecond value :");
                scanf("%f",&a);
                b = a/60000;
                printf("%f millisecond = %f minute",a,b);
            }

            else if(l == 8)
            {
                printf("millisecond to hour\n\nmillisecond value :");
                scanf("%f",&a);
                b = a/3600000;
                printf("%f millisecond = %f hour",a,b);
            }

            else if(l == 9)
            {
                printf("second to microsecond\n\nsecond value :");
                scanf("%f",&a);
                b = a*1000000;
                printf("%f second = %f microsecond",a,b);
            }

            else if(l == 10)
            {
                printf("second to millisecond\n\nsecond value :");
                scanf("%f",&a);
                b = a*1000;
                printf("%f second = %f millisecond",a,b);
            }

            else if(l == 11)
            {
                printf("second to minute\n\nsecond value :");
                scanf("%f",&a);
                b = a/60;
                printf("%f second = %f minute",a,b);
            }

            else if(l == 12)
            {
                printf("second to hour\n\nsecond value :");
                scanf("%f",&a);
                b = a/3600;
                printf("%f second = %f hour",a,b);
            }

            else if(l == 13)
            {
                printf("minute to microsecond\n\nminute value :");
                scanf("%f",&a);
                b = a*60000000;
                printf("%f minute = %f microsecond",a,b);
            }

            else if(l == 14)
            {
                printf("minute to millisecond\n\nminute value :");
                scanf("%f",&a);
                b = a*60000;
                printf("%f minute = %f millisecond",a,b);
            }

            else if(l == 15)
            {
                printf("minute to second\n\nminute value :");
                scanf("%f",&a);
                b = a*60;
                printf("%f minute = %f second",a,b);
            }

            else if(l == 16)
            {
                printf("minute to hour\n\nminute value :");
                scanf("%f",&a);
                b = a/60;
                printf("%f minute = %f hour",a,b);
            }

            else if(l == 17)
            {
                printf("hour to microsecond\n\nhour value :");
                scanf("%f",&a);
                b = a*3600000000;
                printf("%f hour = %f microsecond",a,b);
            }

            else if(l == 18)
            {
                printf("hour to millisecond\n\nhour value :");
                scanf("%f",&a);
                b = a*3600000;
                printf("%f hour = %f millisecond",a,b);
            }

            else if(l == 19)
            {
                printf("hour to second\n\nhour value :");
                scanf("%f",&a);
                b = a*3600;
                printf("%f hour = %f second",a,b);
            }

            else if(l == 20)
            {
                printf("hour to minute\n\nhour value :");
                scanf("%f",&a);
                b = a*60;
                printf("%f hour = %f minute",a,b);
            }

            else
            {

                printf("Enter wrong option");
            }

            break;


        default:
            printf("Invalid choise");
            break;





        }


        printf("\n\n\n\t\t [1].CONTINUE          [0].EXIT");
            printf("\n\nEnter 1 to continue: ");
            scanf("%d",&o);

            if(o == 1)
            {

                goto lable;
            }

           /*else
           {
                printf("thank you");
           }*/
    //printf("____________________________________");
    //}
    printf("\n\nTHANKS FOR USING..........");




}
