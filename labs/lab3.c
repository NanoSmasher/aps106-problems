#include <stdio.h>

int main(){
    float lb, bmi; int ft, in;

    printf("Weight (lbs) :");      scanf("%f", &lb);
    printf("    Height (ft/in) :");scanf("%d %d", &ft, &in);

    if (lb < 0.0 || ft < 0 || in < 0 || in >= 12) printf("  I'm sorry; this input is invalid.");
    else if (ft == 0 && in == 0) printf("   I'm sorry; I can't see you. You are too short.");
    else{
        in += ft*12;
        ft = 0;                       //no real need, just to make it justified

        bmi = (lb*703)/(in*in);

        if (bmi > 30.0)      printf("   Your BMI score is %.1f - you're obese!", bmi);
        else if (bmi > 25.0) printf("   Your BMI score is %.1f - you're overweight!", bmi);
        else if (bmi > 18.5) printf("   Your BMI score is %.1f - you're normal weight!", bmi);
        else                 printf("   Your BMI score is %.1f - you're underweight!", bmi);
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}
