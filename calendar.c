#include<stdio.h>

double i_to_cm(double x){
    /*
    This function turns inch to cm by calculations
    Input: 
        x:double
    Output:
        double
    */
    double y = x * 2.54;
    return y;
}

double cm_to_i(double x){
    /*
    This function turns cm to inch;
    Input:
        x: double
    Output:
        double
    */
    double y = x / 2.54;
    return y;
}

double m_to_cm(double x){
    /*
    This function turns meters into centimeters
    Input: 
        x:double
    Output:
        double
    */
   double y = x * 100;
   return y;
}

int main(){
    double number;
    char unit;
    printf("Enter a length and its unit(inch(i), centimeter(c), meter(m): ");
    scanf("%lf %c", &number, &unit);
    double i = 2.54;   //one inch is 2.54 cm.(for expressing inch as centimeter in later calculations)
    if(unit == 'i'){
        printf("%g inch = %g centimeter\n", number, i_to_cm(number));
        //%g erases the trailing zeroes. example, 4.340->4.34 and 1.000->1
    }else if(unit == 'c'){
        printf("%g centimeter = %g inch\n", number, cm_to_i(number));
    }else if(unit == 'm'){
        double cm = m_to_cm(number);  //we turn meter into cm and then print by changing cm into inch
        printf("%g meters = %g centimenets\n", number, cm_to_i(cm));
    }else{
        printf("0 inch = 0 centimeters\n");
    }
    return 0;
}
