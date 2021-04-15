#include "header.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int fitness_calculator_operation = 0;

/* Operands on which calculation is performed */
long int weight=0;
long int height = 0;
long int bmr1=0;
int age=0;
int selection;
// float bmr,bmi,calorie_requirement;
/* Valid operations */
enum operations{ BMI=1, BMR, Calorie_Requirement, EXIT };

/* Display the menu of operations supported */
void fitness_calculator_menu(void);

/* Verifies the requested operations validity */
int valid_operation(int operation);

/* Start of the application */
int main()
{   
    printf("\n****Welcome to the Fitness Calculator****\n");
    while(1)
    {
        fitness_calculator_menu();
    }
}

void fitness_calculator_menu(void)
{   
    printf("\nSupported Fitness Operations\n");
    printf("\n1. Body Mass Index(BMI)"); 
    printf("\n2. Basal Metabolic Rate(BMR)");
    printf("\n3. Calorie Requirement");
    printf("\n4. Exit");
    printf("\n\tEnter your choice\n");
   
    //fpurge(stdin);
    scanf("%u", &fitness_calculator_operation);

    if(EXIT == fitness_calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }
    if(INVALID != valid_operation(fitness_calculator_operation))
    {   
        long int result=0;
        switch(fitness_calculator_operation)
        {
            case BMI:
                printf("\nYou have selected to calculate BMI. Enter your weight in kg");
                scanf("%ld",&weight);
                printf("\nEnter your height in cm");
                scanf("%ld",&height);
                result=bmi(weight,height); 
                printf("\nBMI is %ld\n",result);
               // fpurge(stdin);
                getchar();
                break;
            case BMR:
                printf("\nYou have selected to calculate BMR. Enter your weight in kg");
                scanf("%ld",&weight);
                printf("\nEnter your height in cm");
                scanf("%ld",&height);
                printf("\nEnter your age in years");
                scanf("%d",&age);
                printf("\nPress Enter to continue");
                result=bmr(weight,height,age);
                printf("\nBMR is %ld\n",result);
                //fpurge(stdin);
                getchar();
                break;
            case Calorie_Requirement:
                printf("Please select your activity level\n");
                printf("1. Little to no exercise\n" );
                printf("2. Light exercise (1-3 days per week)\n");
                printf("3. Moderate exercise ( 3-5 days per week)\n");
                printf("4. Heavy exercise ( 6-7 days per week )\n");
                printf("5. Very heavy exercise (twice per day, extra heavy workouts)\n");
                printf("Please enter the number to the left of your activity\n");
                scanf("%d",&selection);
                printf("\nYou have selected to calculate Calorie Requirement. Enter your BMR");
                scanf("%ld",&bmr1);
                
                
                result=calorie_requirement(bmr1,selection);
                printf("\nCalorie Requirement is %ld\n",result);
                //fpurge(stdin);
                getchar();
                break;
           
            case 4:
                exit(0);
                break;
            default:
                printf("\n\t---It should never come here---\n");
        }
    }
    else
    {
        printf("\n\t---Choice is not implemented yet---\nEnter to continue\n");
        //fpurge(stdin);
        getchar();
        return;  
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((BMI <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
