/*
   under:   trilobite apphub
   author:  Michael Gene Ridge Brockus
   gmail:   <michaelbrockus@gmail.com>
   website: <https://trilobite.code.blog>
*/


/*
 >
 > application foundation function is considered to
 > to be the starting point for applications created
 > and hosted at the trilobite apphub.
 > 
 > there should not be a reason for you to touch the
 > main source file, begin your work in the program
 > source file.
 >
*/
extern int foundation(int argc, char **argv);


/*
 >
 > main is where program execution starts and foundation
 > is where the magic begins. 
 >
*/
int main(int argc, char **argv)
{
    return foundation(argc, argv);
} // end of func
