#include <stdio.h>
#include <conio.h>
int a;
// 2. Introduction Function
void intro()
{
    printf("\nWelcome to program:-Learning C with solving problems\n");
}

// 5. sQuestions of easy level TOPIC:Basic decleration and expression.
void easy1()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to print Namaste world.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to accepts two integer from user and print it's sum\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to print your name , DOB , moble number.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to find multiplication of two number.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print the substraction of two numbers.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to find multiplication of two non zero number,(answer in decimals).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Bsic decleration and expression( DONE)
void moderate1()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to find Simple intrest.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to area and circumference of a circle.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to find area of rectangle.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to find weather a given year is leap year or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print F using '#' (without loop).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to print table of any number(intput:6\toutput:6*1=6).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of easy level Topic:Basic algorithum(DONE)
void easy2()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to check whether a given number is positve 'or' negative.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to check whether a givem posive integer is a multiple of 3 or a multiple of 7\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to print even numbers upto n terms.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to check wheher an input integer is even or odd.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to swap to number using 3rd variable.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to convert input distance in km to cm,feet,inch and meter.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Bsic decleration and expression(DONE)
void moderate2()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to find the gretest number among three integers.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to swap two number without using third variabl.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to print ASCII value of any input provided by user.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to find sum of digits of any integer(input:542,output:11).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print bitwis- AND,OR,XOR uusing the number.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to left shift and right hift operators using 0,1 and 2 bits.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of easy level Topic:Bsic variable type(DONE)

void easy3()
{
    int a;
resume:
    printf("\n\nThis level contains 3 question.Select question number to which you want to solve from 1 to 3 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to find size of keywords of int,float,long and double.\t\tSelect next question number to which you want to solve from 1 to 3(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to covert float number to integer.\t\tSelect next question number to which you want to solve from 1 to 3(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to print and character.\t\tSelect next question number to which you want to solve from 1 to 3(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:variable type( DONE)
void moderate3()
{
    int a;
resume:
    printf("\n\nThis level contains 3 question.Select question number to which you want to solve from 1 to 3 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to convert a string to an unsinged long integer.\t\tSelect next question number to which you want to solve from 1 to 3(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to generate random number.\t\tSelect next question number to which you want to solve from 1 to 3(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to find quotientn and remainder of a divison process.\t\tSelect next question number to which you want to solve from 1 to 3(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of easy level Topic:INPUT_OUTPUT(DONE)
void easy4()
{
    int a;
resume:
    printf("\n\nThis level contains 4 question.Select question number to which you want to solve from 1 to 4 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to covert Centigrade to Farhenheit.\t\tSelect next question number to which you want to solve from 1 to 4(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to find third angle of a triangle if two angles are given.\t\tSelect next question number to which you want to solve from 1 to 4(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to perform and print Addition substraction and multiplication of two number.\t\tSelect next question number to which you want to solve from 1 to 4(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to find volume of a cube (ask lenght of cube).\t\tSelect next question number to which you want to solve from 1 to 4(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Bsic input and output(DONE)
void moderate4()
{
    int a;
resume:
    printf("\n\nThis level contains 4 question.Select question number to which you want to solve from 1 to 4 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to calulate volume of sphere.\t\tSelect next question number to which you want to solve from 1 to 4(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to print perimeter of rectangle to take its height and width from user.\t\tSelect next question number to which you want to solve from 1 to 4(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to convert kilometer per hour to miles per hour.\t\tSelect next question number to which you want to solve from 1 to 4(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program that takes hours and minute as input and calculates total number of minutes.\t\tSelect next question number to which you want to solve from 1 to 4(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question level; easy,TOPIC:conditional statement.(done)
void easy5()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to accept two integer and check whether they are equal or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe,Take age of user as input and print whether user is eligible for votig or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to calculate the root of a quadratic equation.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to check whether a triangle is Equilateral,isoscles or scalen((take three angles from user)).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to check whether a character is an alphabet,digit or special character.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to to read any month number in integer and display the days in that month.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Conditional statement(DONE)
void moderate5()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to check whether a student has qualified JEE advancec(Take marks of P/C/M from user).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to give grade to student(90%<outstandiong , 80%<v.good , 70%< good etc).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to accept height in centimeter and catogorize the person according to thier height.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to check whether an alphabet is a vowel or consonent.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to caluclate profilt and loss percent in a transaction.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to calculate and print the electricity bill of a given customber,(answer in decimals).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Questions of level:Easy,Topic:LOOP
void easy6()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to find sum of first 10 natural number.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to read 10 number from user and find its sum and average.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to check whether a given number is prime or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to display the cube of the number upto given an integer.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print multiplication table of any integer.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to display the n terms of square natural number and their sum,(answer in decimals).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Loop(DONE)
void moderate6()
{
    int a;
resume:
    printf("\n\nThis level contains 9 question.Select question number to which you want to solve from 1 to 9 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to find sum of an integer(e.g input:12345  output:15).\t\tSelect next question number to which you want to solve from 1 to 9\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to print any input integer in reverse.\t\tSelect next question number to which you want to solve from 1 to 9(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to print sum of 1/2 + 2/3 + 3/4  ... + n/n+1 .\t\tSelect next question number to which you want to solve from 1 to 9(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to print pattern\n*\n**\n***\n****.\t\tSelect next question number to which you want to solve from 1 to 9(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print \nA\nAB\nABC\nABCD.\t\tSelect next question number to which you want to solve from 1 to 9(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to find factorial of a number.\t\tSelect next question number to which you want to solve from 1 to 9(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 7:
        printf("\nQ.7>Write a programe to check whether a number is pelidrome or not.\t\tSelect next question number to which you want to solve from 1 to 9(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 8:
        printf("\nQ.8>Write a programe to print fibbanacci series upto n terms.\t\tSelect next question number to which you want to solve from 1 to 9(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 9:
        printf("\nQ.9>Write a programe to find frequency of each digit in a given number.\t\tSelect next question number to which you want to solve from 1 to 9(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// question of TOPIC LEVEL:EASY.TOPIC:ARRAY
void easy7()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to store elements in an array and print.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to find the sum of all elements of the array.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to copy the elements of one array into another array.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to print all unique elements in an array.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to merge two arrays of same size shorted in decending order.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to find the maximum and minimum in an array.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:arrays(DONE)
void moderate7()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to insert new value in the array(shorted list).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to delete an element at desired position from an array.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program for a 2D array of size 3*3 and print matrix.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program for addition of two matrix of same size.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe for multiplication of two matrix.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("\nQ.6>Write a programe to search an element in a row wise and column wise sorted matrix.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

////question of TOPIC LEVEL :EASY.TOPIC :pointer
void easy8()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to add two number pointers.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to add two number using call by reference\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to find the maximum number between two numbers.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to swap elements using call by reference.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to find factorial of a number using pointers.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to calculate yhe length of the string using a pointer.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:pointer(DONE)
void moderate8()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to store n elements in an array and print the elements using pointer.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to sort an array using pointer\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to show how a function returning pointer.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to print the elements of an array in reverse order.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to show the uses of pointer to structure.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to print all yhe alphabets using a pointer.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

////question of TOPIC LEVEL :EASY.TOPIC :linked lists

void easy9()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to create and display singly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to insert a new node at the begning of singly linked lists\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to insert a new node at the end of a singly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to delete first node of singly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to delete last node of singly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to search an existing elements in a singly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Bsic decleration and expression(DONE)
void moderate9()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to create and display doubly linked lists.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to insert a new node at the begining in a doubly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to insert a new node at any position in a doubly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to delete a node from any position from a doubly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to find maximum value from a doubly linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to create and display a circular linked list.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

//question of TOPIC LEVEL :EASY.TOPIC : numbers

void easy10()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to check whether a given number is an ugly number or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to check whether a given number is an abundant number or not .\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to check whether a given number is a Deficient number or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to check whether a given number is a duck  number or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to check whether a given number is a perfect cube or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to check whether a given number is keith number or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Bsic decleration and expression(DONE)
void moderate10()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to print abundant number between 1 to 100(integer).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to print deficent number between 1 to 100(integer).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to print narcissistic decimal (first 15).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to print lucus number (first 10).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print first 10 catalan numbers.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to find pronic number between 1 to 100.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
        ;
    }
}

//question of TOPIC LEVEL :EASY.TOPIC : numbers
void easy11()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to input a string and print it.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to find the length of a string (without using strlen).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to print individual characters of string in reverse order.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to count total numbers of words in string(not didgits).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to compare two string without using library function.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to copy one string to another string.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Bsic decleration and expression(DONE)
void moderate11()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to count total number of vowels and consonant in a string.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to sort a string in ascending order.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to check whether a give substring is present in given string.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to convert a string to uppercase.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to split string by space into words.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to convert vowels into upercase character in a given string.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:date and time(DONE)
void moderate12()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to print current date and time.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to print date and time before 24 months.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to show the first of calender time.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to show start of the epoch.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print the number of seconds passed since the begining of the month.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to print number of minutes passed since your birth date.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}


void moderate13()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to print reverse of a given integer.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to check whether a given number is palindrome or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to check if a given integer is a power of three.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to find X raise to the power n(X^n).\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print all prime factors of a given nuber.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to check if a number is fibonacci number or not.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}


// Question of moderate level Topic:function(NOT DONE)
void moderate14()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to find the square of any number using the function.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to check whether a number is odd or even using the function.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to check whether a number is prime or not using function.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to check whether two given strings are an anagram.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to print all perfect number in given range using the function.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to get largest element of an array using the function.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

void easy15()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to print first 50 natural number using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to print fibonacci series using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to print print the array element using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to find sum of digits of number using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to find GCD of two number using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to find LCM of two number using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// Question of moderate level Topic:Bsic decleration and expression(******NOT DONE)
void moderate15()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to multiply two matrix using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to calculate power any number using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to copy one string to another using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program for binary serach using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to convert decimal number to binary using recursion.\t\tSelect next question number to which you want to solve from 1 to 6(Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to print even or odd number in a given range using recursion.\t\tSelect next question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}



// Question of moderate level Topic:Bsic decleration and expression(******NOT DONE)
void moderate16()
{
    int a;
resume:
    printf("\n\nThis level contains 6 question.Select question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
resume2:
    scanf("%d", &a);
    fflush(stdin);
    switch (a)
    {
    case 1:
        printf("\nQ.1>Write a C program to create and store information in a text file.\t\tSelect next question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 2:
        printf("\nQ.2>Write a programe to read an existing file.\t\tSelect next question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 3:
        printf("\nQ.3>Write a C program to write multiple lines in a text file.\t\tSelect next question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 4:
        printf("\nQ.4>Write a program to find the number of lines in a text file.\t\tSelect next question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 5:
        printf("\nQ.5>Write a programe to count total number of words and characters in a file.\t\tSelect next question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    case 6:
        printf("nQ.6>Write a programe to merge two files and write it in a new file.\t\tSelect next question number to which you want to solve from 1 to 6 (Press 0 to select topic again)\n\n");
        goto resume2;
        break;
    default:
        if (a != 0)
        {
            printf("\nWrong input,\t Input again\n\n");
            goto resume;
        }
        else
            break;
    }
}

// 4. Topic choosing function
void Basic_Decelarations()
{
    printf("\nTOPIC-Basic Decelarations and expression\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy1();
    }
    else if (x == 2)
    {
        moderate1();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Basic_algorithm()
{
    printf("\nTOPIC-Basic algorithm\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy2();
    }
    else if (x == 2)
    {
        moderate2();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Variable_type()
{
    printf("\nTOPIC-Variable type\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy3();
    }
    else if (x == 2)
    {
        moderate3();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Input_Output()
{
    printf("\nTOPIC-Input,Output\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy4();
    }
    else if (x == 2)
    {
        moderate4();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Conditional_statement()
{
    printf("\nTOPIC-Conditional statement\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy5();
    }
    else if (x == 2)
    {
        moderate5();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void For_loop()
{
    printf("\nTOPIC-For_loop\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy6();
    }
    else if (x == 2)
    {
        moderate6();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Array()
{
    printf("\nTOPIC-Array\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy7();
    }
    else if (x == 2)
    {
        moderate7();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void pointer()
{
    printf("\npointer\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy8();
    }
    else if (x == 2)
    {
        moderate8();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Linked_lists()
{
    printf("\nTOPIC-Linked_lists\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy9();
    }
    else if (x == 2)
    {
        moderate9();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Numbers()
{
    printf("\nTOPIC-Numbers\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy10();
    }
    else if (x == 2)
    {
        moderate10();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void String()
{
    printf("\nTOPIC-String\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy11();
    }
    else if (x == 2)
    {
        moderate11();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Date_and_Time()
{
    printf("\nTOPIC-Date_and_Time\n\nSelect question level\n\n1>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        moderate12();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Math()
{
    printf("\nTOPIC-Math\n\nSelect question level\n\n1>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        moderate13();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Functions()
{
    printf("\nTOPIC-Functions\n\nSelect question level\n\n1>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        moderate14();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void Recursion()
{
    printf("\nTOPIC-Recursion\n\nSelect question level\n\n1>Easy level\n2>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
    if (x == 1)
    {
        easy15();
    }
    else if (x == 2)
    {
        moderate15();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

void File_Handling()
{
    printf("\nTOPIC-File_Handling\n\nSelect question level\n\n1>Moderete level\n\n");
    int x;
start1:
    fflush(stdin);
    scanf("%d", &x);
   if (x == 1)
    {
        moderate16();
    }
    else
    {
        printf("Invalid input,Please input a valid number\n");
        goto start1;
    }
}

// 3. Topic selection function
void topic()
{
    int t;
    printf("\nSelect the topic listed below:\n");
    printf("\n1>Basic Decelarations and expression\n2.>Basic algorithm\n3>Variable type\n4>Input,Output\n5>Conditional statement\n6>For loop\n7>Array\n8>pointer\n");
    printf("9>Linked lists\n10>Numbers\n11>String\n12>Date and Time\n13>Math\n14>Functions\n15>Recursion\n16>File Handling\n\n");
    printf("****************************************************************************************************************************\n");
start:
    scanf("%d", &t);
    fflush(stdin);
    switch (t)
    {
    case 1:
        Basic_Decelarations();
        break;
    case 2:
        Basic_algorithm();
        break;
    case 3:
        Variable_type();
        break;
    case 4:
        Input_Output();
        break;
    case 5:
        Conditional_statement();
        break;
    case 6:
        For_loop();
        break;
    case 7:
        Array();
        break;
    case 8:
        pointer();
        break;
    case 9:
        Linked_lists();
        break;
    case 10:
        Numbers();
        break;
    case 11:
        String();
        break;

    case 12:
        Date_and_Time();
        break;

    case 13:
        Math();
        break;

    case 14:
        Functions();
        break;

    case 15:
        Recursion();
        break;
    case 16:
        File_Handling();
        break;

    default:
        printf("Invalid input please input again a valid value\n");
        goto start;
        break;
    }
}

// 1 Main function.
int main()
{
    printf("****************************************************************************************************************************\n");
    intro();
select_topic:
    topic();
    if (a == 0)
        goto select_topic;
    getch();
    return 0;
}
