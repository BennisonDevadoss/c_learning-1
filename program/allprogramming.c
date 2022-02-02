//this program displays this programs source code
#include <stdio.h>
int main()
{
    //variable declaration
    int ch;
    FILE *fp; //this file pointer

    //open current input files
    fp = fopen(__FILE__, "r"); // __FILE__ indicate current file.

    do
    {
        ch = getc(fp); //read character
        putchar(ch);   //display character
    } while (ch != EOF);

    fclose(fp); //file close

    return 0;
}//read first line of file using c programming
#include <stdio.h>
#include <stdlib.h> //for exit() function
int main()
{
    //variable declaration
    char ch[500];
    FILE *fp; //declare file pointer
    
    //file open
    fp = fopen("program.txt", "r");

    //this condition check file opened or not
    if (fp == NULL)
    {
        printf("FILE didn't exit");
        exit(0);
    }

    //read input from a file
    fscanf(fp, "%[^\n]", ch);  //I don't understand %[^\n] this one: what is this %[^\n]   
    printf("Data_from_the_first_line %s\n", ch);

    //file close function
    fclose(fp);

    //optional
    return 0;
}
//this program about to file write.
#include <stdio.h>
int main()
{
    //variable declaration
    char ch[500];
    FILE *fptr; //file pointer declaration

    //file open
    fptr = fopen("prog.txt", "w");

    //if file dont open program send this message
    if (fptr == NULL)
    {
        printf("ERROR!\n");
        printf("File didn't created");
    }

    printf("enter the notes");
    
    //read input from user
    fgets(ch, sizeof(ch), stdin);

    //print input to file
    fprintf(fptr, "%s", ch);

    fclose(fptr); //file close
}
//this program we will allocate memory dinamicaly

#include <stdio.h>
#include <stdlib.h>

//struct data allocationi
struct course
{
    int mark;
    char subject[30];
};

int main()
{
    //variable declaration
    struct coures *ptr;
    int n, i;

    //read input from user
    printf("How many student record you are entered");
    scanf("%d", &n);

    //dynamic memory allocation
    ptr = (struct course *)malloc(n * sizeof(struct course));

    if (ptr == NULL)
    {
        printf("MEMORY_NOT_ALLOCATED_FOR_PTR");
        exit(0);
    }

    //read stuent data from user
    printf("enter student detail");
    for (i = 0; i < n; ++i)
    {
        scanf("%s", (ptr + i)->subject);
        scanf("%d", &(ptr + i)->mark);
    }

    // displaying message
    for (i = 0; i < n; ++i)
    {
        printf("%s\n", (ptr + i)->subject);
        printf("%d", &(ptr + i)->mark);
        printf("\n");
    }

    //memory free up
    free(ptr);
}#include <stdio.h>
#include <stdlib.h>
struct course
{
    int marks;
    char subject[30];
};

int main()
{
    struct course *ptr;
    int n, i;
    printf("Enter the number of records: ");
    scanf("%d", &n);

    // Memory allocation for noOfRecords structures
    ptr = (struct course *)malloc(n * sizeof(struct course));

     printf("Enter subject and marks:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%s", (ptr + i)->subject);
        scanf("%d", &(ptr + i)->marks);
    }

    printf("Displaying Information:\n");
    for (i = 0; i < n; ++i)
    {
        printf("%s\t", (ptr + i)->subject);
        printf("%d\n", (ptr + i)->marks);
    }

    free(ptr);

    return 0;
}#include <stdio.h>
#include <stdlib.h>

struct student
{
    char Stud_Name[30];
    int Stud_No;
    int Stud_Marks[5];
    int Stud_Totals;
};

int main()
{
    struct student detail[5];

    FILE *fptr;
    int i, j;

    fptr = fopen("STUD_TETAIL", "w");
    if (fptr == NULL)
    {
        printf("file not created");
    }

    //read information
    for (size_t i = 0; i < 5; i++)
    {
        printf("STUDENT_NAME:");
        fgets(detail[i].Stud_Name, 30, stdin);
        printf("STUDENT_NO:");
        scanf("%d", detail[i].Stud_No);
        printf("STUDENT MARKS:");
        for (size_t j = 0; j < 5; j++)
        {
            scanf("%d", detail[i].Stud_Marks);
        }
        //print output
        for (size_t i = 0; i < 5; i++)
        {
            printf("FIRST_STUDENT_DETAIL:\n");
            puts(detail[i].Stud_Name);
            printf("\n");
            printf("%d\n", detail[i].Stud_No);
            printf("STUDENT_MARKS");
            for (size_t j = 0; i < 5; j++)
            {
                printf("%d", detail[i].Stud_Marks[i]);
            }
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //variable declaration
    char data[100];
    FILE *ptr;

    //file creation
    ptr = fopen("program.txt", "w");

    if (ptr == NULL)
    {
        printf("file did not created");
        exit(1);
    }

    printf("Enter the data: ");
    fgets(data, 100, stdin);

    fputs(data, ptr);

    //close file
    fclose(ptr);

    // print out put
    printf("please check that file\n");
}
#include <stdio.h>
int main()
{
    // variable declaration
    char ch;
    FILE *fptr;

    fptr = fopen("program.txt", "r");

    if (fptr == NULL)
    {
        printf("file didn't opened");
        printf("please check file name");
    }

    // logic display output
    do
    {
        ch = fgetc(fptr);
        putchar(ch);
    } while (ch != EOF);
}#include <stdio.h>
int main()
{ //variable declaration
    float amount, time, rate, SI;

    // read information from user
    printf("enter the amount");
    scanf("%f", &amount);

    printf("enter time");
    scanf("%f", &time);

    printf("enter rate");
    scanf("%f", &rate);

    // logic
    SI = (amount * rate * time) / 100;

    // print output
    printf("%.2f\n", SI);
}#include <stdio.h>
#include <math.h>
int main()
{
    // variable declaration
    double CI, amount, rate, time;

    // read information from user
    printf("Enter the amount");
    scanf("%lf", &amount);

    printf("Enter the time");
    scanf("%lf", &time);

    printf("Enter the rate");
    scanf("%lf", &rate);

    // logic
    CI = amount * (pow((1 + rate / 100), time));

    // print output
    printf("%.0lf", CI);
}#include <stdio.h>
int main()
{
    //variable declaratioin
    int number;

    // read information from user
    printf("enter the number");
    scanf("%d", &number);

    // logic
    if (number & 1)
    {
        printf("LSB of %d is set(1)\n", number);
    }
    else
    {
        printf("LSB of %d, is unset(0)\n", number);
    }
}
#include <stdio.h>
int main()
{
    char c;
    int cc, wc, lc;

    cc = wc = lc = 0;

    while ((c = getchar()) != EOF)
    {
        // character counting
        ++cc;

        // word counting
        if (c == '\n' || c == ' ' || c == '\t')
        {
            ++wc;
        }

        // line counting
        if (c == '\n')
        {
            ++lc;
        }
    }

    // print output
    printf("number of characters :%d\n", cc);
    printf("number of words      :%d\n", wc);
    printf("number of lines      :%d\n", lc);
}#include <stdio.h>
int main()
{
    //variable declaration
    int num1, num2, num3;

    //read input from user
    printf("enter the first number:");
    scanf("%d", &num1);

    printf("enter the second number:");
    scanf("%d", &num2);

    printf("enter the third number:");
    scanf("%d", &num3);

    // logic
    if (num1 > num2 && num1 > num3)
    {
        printf("the biggest number :%d\n", num1);
    }

    if (num2 > num1 && num2 > num3)
    {
        printf("the bigset number :%d\n", num2);
    }

    if (num3 > num1 && num3 > num2)
    {
        printf("the biggest number :%d\n", num3);
    }
}#include <stdio.h>
int main()
{
    //variable declaration
    int num;

    //read input from user
    printf("enter the number:");
    scanf("%d", &num);

    //logic
    if (num > 0)
    {
        printf("%d this is passitive number\n", num);
    }
    if (num < 0)
    {
        printf("%d this is negative number\n", num);
    }
    if (num == 0)
    {
        printf("%d this is zero\n", num);
    }
}#include <stdio.h>
int main()
{
    //variable declaration
    int num;

    //read information from users
    printf("enter the number:");
    scanf("%d", &num);

    //logic
    if (num % 2 == 0)
    {
        printf("%d <---- this is even number\n", num);
    }
    else
    {
        printf("%d <---- this is odd number\n", num);
    }
}
#include <stdio.h>
#include <math.h>

#define BASE 2

int main()
{
    //variable declaration
    long long int binary, decimal = 0, tempbinary;
    int N = 0;

    //read input from user
    printf("Enter the binary number:");
    scanf("%lld", &binary);

    //logic

    tempbinary = binary;
    while (tempbinary != 0)
    {
        if (tempbinary == 1)
        {
            decimal = decimal + bow(BASE, N);
        }
        N++;
        tempbinary /= 10;
    }

    // print output
    printf("binary number : %lld", binary);
    printf("decimal number :%lld", decimal);
}#include <stdio.h>
int main()
{
    int number;
    printf("Hello World!\n");
    printf("hello ");
    printf("world!\\n");
    scanf("enter the number%d");
    printf("entered number is :%d");
}
#include <stdio.h>
int main()
{
    // variable declaration
    int number, temp, rem, rev = 0;

    // read information from user
    printf("enter the any number");
    scanf("%d", &number);

    // logic
    temp = number;
    while (temp > 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + rem;
    }

    //output
    if (rev == number)
    {
        printf("%d, entered number is PALINDROME\n", number);
    }
    else
    {
        printf("%d, entered number is NOT PALINDROME\n", number);
    }
}
#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    // variable declaration
    int array1[MAX_SIZE];
    int array2[MAX_SIZE], size, i, j, k, l;
    ;

    // read input from user
    printf("enter your array size:");
    scanf("%d", &size);

    // logic
    printf("Enter the array inputs:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
    }

    // array copy
    for (j = 0; j < size; j++)
    {
        array2[j] = array1[j];
    }

    // print output
    printf("first array's value:\n");
    for (k = 0; k < size; k++)
    {
        printf("%d", array1[k]);
    }

    printf("\n");

    printf("second array's (or) copied array value\n");
    for (l = 0; l < size; l++)
    {
        printf("%d", array2[l]);
    }

    printf("\n");
}#include <stdio.h>
int main()
{
    //variabe declaration
    char ch;

    // head input from user
    printf("Enter the Character:");
    scanf("%c", &ch);

    // logic
    if ((ch >= 'a' && ch >= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Entered Character is ALPHAPET\n");
    }
    else
    printf("Enter Character is NOT ALPHAPET\n");
}
#include <stdio.h>

#define MAX_INPUT 100
int main()
{
    //variable declaration
    char ch[MAX_INPUT];
    int count = 0;

    //read input from user
    printf("Enter any string:");
    fgets(ch, sizeof(ch), stdin);

    //logic
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }

    printf("Total string counts:%d\n", count);
}#include <stdio.h>
int main()
{
    int num1, num2;
    num1 = 1;
    num2 = 4;
    printf("total nummber is :%d", num1 + num2);
}// this program about swap two numbers
#include <stdio.h>
int main()
{
    // variable declaration
    int number1, number2, temp;

    // read information from users
    printf("enter the first number:");
    scanf("%d", &number1);

    printf("enter the second number");
    scanf("%d", &number2);
    printf("\n");

    printf("before swapping number one value is %d\n", number1);
    printf("before swapping number two value is %d\n", number2);
    printf("\n");

    // logic
    temp = number1;
    number1 = number2;
    number2 = temp;

    // print output
    printf("after swapping number one value is %d\n", number1);
    printf("after swapping number two value is %d\n", number2);
}//swap two number without using temp variable
#include <stdio.h>
int main()
{
    // variable declaration
    int number1, number2;

    // read information from users
    printf("enter the first numbr:");
    scanf("%d", &number1);

    printf("enter the second number:");
    scanf("%d", &number2);
    printf("\n");

    printf("number1 is :%d\n", number1);
    printf("number2 is :%d\n", number2);
    printf("\n");

    // logic
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    //out put
    printf("after swapping number one is :%d\n", number1);
    printf("after swapping number two is :%d\n", number2);
}
#include <stdio.h>
int main()
{
    // variable declaration
    int number, i, j;

    // read information from user
    printf("Enter the number:");
    scanf("%d", &number);

    //logic
    for (size_t i = 0; i <= number; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}// find perimeter of rectangle
#include <stdio.h>
int main()
{
    // variable declaration
    int length, width, perimeter;

    // read input from user
    printf("Enter the length of rectangle:");
    scanf("%d", &length);

    printf("Enter the width of rectangle:");
    scanf("%d", &width);

    // logic
    perimeter = 2 * (length + width);

    // print output
    printf("rectangle's perimeter is :%d\n", perimeter);
}
// year, month, week, days calculation
#include <stdio.h>

int main()
{
    // variable declaration
    int numbers, temp, year, month, week, day;
    year = month = week = day = 0;

    //read information from user
    printf("enter the number");
    scanf("%d", &numbers);

    //logic
    temp = numbers;
    if (temp >= 365)
    {
        year = temp / 365;
        temp = temp - (365 * year);
    }

    if (temp > 31)
    {
        month = temp / 31;
        temp = temp - (31 * month);
    }

    if (temp >= 7)
    {
        week = temp / 7;
        temp = temp - (7 * week);
    }

    if (temp >= 1)
    {
        day = temp;
    }

    // print output
    printf("year:%d\nmonth:%d\nweek:%d\nday:%d\n", year, month, week, day);
}
//find square root without using sqrt function
#include <math.h>
#include <stdio.h>
int main()
{
    //variable declaration
    double number, squareroot;

    //read input from user
    printf("Enter the number:");
    scanf("%lf", &number);

    //logic
    squareroot = sqrt(number);

    // print output
    printf("%lf this number's sqrt is :%lf", number, squareroot);
}
#include <stdio.h>
#include <math.h>

int main()
{
    int number, exponent, power;

    printf("enter number");
    scanf("%d", &number);

    printf("enter the expononent:");
    scanf("%d", &exponent);

    //logic
    power = pow(number, exponent);

    //print output
    printf("power value is %d:", power);

    return 0;
}#include <stdio.h>
int main()
{

    // variable declaration
    int tamil, english, maths, science, social, total;
    float presentage, average;

    printf("Enter the student marks\n");
    scanf("%d\n%d\n%d\n%d\n%d\n", &tamil, &english, &maths, &science, &social);

    //logic
    total = tamil + english + maths + science + social;
    average = total / 5.0;
    presentage = (total / 500.0) * 100;

    //print output
    printf("total mark:%d\n", total);
    printf("average :%.2f\n", average);
    printf("total presentage %.2f\n", presentage);
}<h1>The Main Languages of the Web</h1>

<p>HTML is the standard markup language for creating Web pages. HTML describes the structure of a Web page, and consists of a series of elements. HTML elements tell the browser how to display the content.</p>

<h1>The Main Languages of the Web</h1>

<p>HTML is the standard markup language for creating Web pages. HTML describes the structure of a Web page, and consists of a series of elements. HTML elements tell the browser how to display the content.</p>

#include <stdio.h>
int main()
{
    // variable declaration
    int input, i;

    //read input from users
    printf("enter the any number");
    scanf("%d", &input);

    // logic
    for (i = 2; i < input; i++)
    {
        if (input % i == 0)
        {
            break;
        }
    }

    //print the output
    if (i == input)
    {
        printf("%d this number is prime number", input);
    }
    else
    {
        printf("%d this number is not prime number:", input);
    }
}
//function using prime number
#include <stdio.h>
int primenumber(int input);
int main()
{
    // vatiable declaration
    int input, i;

    //  read input from user
    printf("enter the eny number");
    scanf("%d", &input);

    //fucction call
    if (primenumber(input))
        printf("%d entered number is prime number", input);
    else
        printf("%d entered number is not prime number", input);
}
int primenumber(int input)
{
    int i;
    int true, false;
    for (i = 0; i < input; i++)
    {
        if (input % i == 0)
        {
            break;
        }
    }
    if (i == input)
        return true;
    else
        return false;
}//fibonacci series 0 1 2 3 5 8 13 ...
#include <stdio.h>
int main()
{
    //variable declaration
    int number, i, a = 0, b = 1, c;

    // read input from user
    printf("enter the number:");
    scanf("%d", &number);

    //logic
    printf("fibonacci serries is %d %d", a, b);
    for (i = 0; i <= number - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d", c);
    }
}
#include <stdio.h>
int main()
{
    // variable declaration
    int n, m, rem, result = 0;

    printf("\t\t\tPRINT ARMSTRONG NUMBER\t\t\t\n");

    //read value from user
    printf("enter any number::");
    scanf("%d", &n);

    // logic
    m = n;
    while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        result = result + rem * rem * rem;
    }
    if (result == n)
    {
        printf("%d this number is ARMSRONG NUMBER\n", n);
    }
    else
        printf("%d this number is NOT ARMSTRONG AMSTRONG\n", n);
}
//this program find sum of digits
#include <stdio.h>
int main()
{
    // varaible declaration
    int number, number1, result = 0, remainder;

    //read input from users
    printf("enter the number");
    scanf("%d", &number);

    // logic

    number1 = number;
    while (number1 > 0)
    {
        remainder = number1 % 10;
        number1 = number1 / 10;
        result = result + remainder;
    }
    printf("%d sum of digits is %d", number, result);
}
// this program reverses the n number
// reverse the n number
#include <stdio.h>
int main()
{
    // variable declaration
    int number, number1, remainder, result = 0;
    // read input from user
    printf("enter the number:");
    scanf("%d", &number);

    // logic
    number1 = number;
    while (number1 > 0)
    {
        remainder = number1 % 10;
        number1 = number1 / 10;
        result = result * 10 + remainder;
    }

    printf("%d this number's reverse value is :%d\n", number, result);
}#include <stdio.h>
int main()
{
    int number, factorial;
    printf("enter the number:"); //nice work welldone bennison
    scanf("%d", &number);
    int i = number - 1;
    factorial = number;
    while (i > 0)
    {
        factorial = factorial * i;
        i = i - 1;
    }
    printf("factorial number is =%d", factorial);
}#include <stdio.h>
int main()
{
    int number, number1;
    printf("enter the number:\n");
    scanf("%d", &number);
    number1= number;
    for (int i = 1; i < number; i++)
    {
        number1 *= number - i;
        printf("%d", number1);
    }
    printf("factorial number is :%d", number1);
}#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    //this program uses to find the FACTORS of numbers
    for (int i = 1; i <= number; i++)
    {
        int output = number % i;
        if (output == 0)
        {
            printf("%d factors is :%d\n", number, i);
        }
    }
}
#include <stdio.h>
int FACT(int number);
int main()
{
    int number;
    int FACTORIAL;
    printf("enter the number:");
    scanf("%d", &number);
    FACTORIAL = FACT(number);
    printf("factorial number is :%d", FACTORIAL);
}
int FACT(int number)
{
    if (number != 0)
    {
        return number * FACT(number - 1);
    }
    else
        return 1;
}#include <stdio.h>
int main()
{
    int number1, number2;
    printf("enter the number to multiplication:\n");
    scanf("%d", &number1);
    printf("how many time multiply wntered number:\n");
    scanf("%d", &number2);
    for (int i = 1; i <= number2; i++)
    {
        printf("%d * %d = %d\n", i, number1, i * number1);
    }
}#include <stdio.h>
int main()
{
    int *ptr;
    int x = 0;
    ptr = &x;
    int y = *ptr;
    *ptr = 1;
    printf("%d, %d", x, y);
}// #include <stdio.h>
// int recursion(int number, int number1);
// int main()
// {
//     int number1, number2, power;
//     printf("enter the rst number:");
//     scanf("%d", &number1);
//     printf("enter the second number:");
//     scanf("%d", &number2);
//     power = recursion(number1, number2)
// }
// int recursion(int number, int number1)
// {
//     if (number == number1 == 0)
//     {
//         return number1* recursion(number-)
//     }
// }
#include <stdio.h>
int main()
{
    long long number1, number2;
    printf("enter the number:");
    scanf("%lld", &number1);
    printf("%lld^", number1);
    scanf("%lld", &number2);
    long long temp = number1;
    for (int i = 2; i <= number2; i++)
    {
        number1 = number1 * temp;
    }
    printf("power value is :%lld\n", number1);
}
#include <stdio.h>
int main()
{
    int number, number2;
    int flag;
    printf("enter the number:");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        number2 = number % i;
        if (number2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d this number is not prime number", number);
    else
        printf("%d, this number is prime number", number);
}
// #include <stdio.h>
// void prime(int number);
// int main()
// {
//     int number, total;
//     printf("enter the number:");
//     scanf("%d", &number);
//     // total = prime(number);
//     prime(number);
// }
// void prime(int number)
// {
//     int number2;
//     for (int i = 2; i <= number; i++)
//     {
//         for (int j = 2; j < i; j++)
//         {
//             number2 = i % j;
//             if (number2 == 0)
//             {
//                 break;
//             }
//             printf("%d", i);
//         }
//     }
// }
#include <stdio.h>
//this program about find prime number
int main()
{
    //variable diclaration
    int number, number1;
    FILE *ptr;
    int number3, flag;
    //give input from user
    printf("enter the number");
    scanf("%d", &number);
    //statement
    int i, j;
    for (i = 3; i <= number; i++)
    {
        for (j = 2; j < i; j++)
        {
            number1 = i % j;
            // if (number1 == 0)
            // {
            //     // continue;
            // }
            // else
            // {
            //     printf("%d", i);
            // }
            if (number1 == 0)
            {
                flag = 1;
            }
        }
        if (flag != 1)
        {
            printf("%d", i);
        }
    }
}
#include <stdio.h>
int main()
{
    int number, number2, flag;
    printf("enter the number:");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        number2 = number % i;
        if (number2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d, this number is not prime number\n", number);
    }
    else
    {
        printf("%d,this number is prime number\n", number);
    }
}
#include <stdio.h>
int factorial(int number);
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    int fact = factorial(number);
    printf("factorial nimber is :%d", fact);
}
int factorial(int number)
{
    for (int i = number - 1; i > 0; i--)
    {
        number = number + i;
    }
    return number;
}#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:\n");
    scanf("%d", &number);
    for (int i = number - 1; i > 0; i--)
    {
        number = number + i;
    }
    printf("factorial number is = %d", number);
}