/*
    ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี

    Test case:
        Input A
        Name : 
            Yorn
        Age : 
            31
        Input B
        Name : 
            Thane
        Age : 
            20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)

*/
#include <stdio.h>
#include <string>

void swapage( int &age1, int &age2 ) {
    int hold = age1; 
    age1 = age2;     
    age2 = hold ;     
}
int main () {
    int age1, age2 ;
    char name01[20] , name02[20] ;
    
    printf( "Input A\n" ) ;
    printf( "Name :\n" ) ;
    scanf( "%s",name01 ) ;
    printf( "Age :\n" ) ;
    scanf( "%d",&age1 ) ;

    printf( "Input B\n" ) ;
    printf( "Name :\n" ) ;
    scanf( "%s",name02 ) ;
    printf( "Age :\n" ) ;
    scanf( "%d",&age2 ) ;
    
    printf( "** RESULT **\n" ) ;
    printf( "Name: %s (%d)\n",name01,age1 ) ;
    printf( "Name: %s (%d)\n",name02,age2 ) ;

    swapage(age1, age2);

    printf( "\n** SWAP AGE **\n" ) ;
    printf( "Name: %s (%d)\n",name01,age1 ) ;
    printf( "Name: %s (%d)\n",name02,age2 ) ;


    return 0 ;
}
