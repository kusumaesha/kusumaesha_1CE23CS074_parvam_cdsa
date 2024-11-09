#include<stdio.h>
struct student
{
    int rollno;
    float marks;
}s1;
int main(){
    struct student s;
    s.rollno=45;
    s.marks=6.7;
    printf("%d",s.rollno);
    printf("%f",s.marks);
}