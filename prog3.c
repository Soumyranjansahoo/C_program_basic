#include<stdio.h>
#include<math.h>
void main()
{
   int choice;
   printf("Enter 1 to find area of Triangle\n2 for finding area of Square\n3 for finding area of Circle\n4 for finding area of Rectangle");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1: {
         int b,h;
         float s,area;
         printf("Enter sides of triangl");
         scanf("%d%d",&b,&h);
         area=b*h/2;
         printf("Area of Triangle is %f",area);
         break;
      }
      case 2: {
         float side,area;
         printf("Enter Sides of Square");
         scanf("%f",&side);
         area=(float)side*side;
         printf("Area of Square is %f",area);
         break;
      }
      case 3: {
         float radius,area;
         printf("Enter Radius of Circle");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
	 printf("Area of Circle %f",area);
         break;
      }
      case 4: {
         float len,breadth,area;
         printf("Enter Length and Breadth of Rectangle");
         scanf("%f %f",&len,&breadth);
         area=(float)len*breadth;
         printf("Area of Rectangle is %f",area);
         break;
      }
      default: {
         printf("Invalid Choice");
         break;
      } 
   }
}
