#include<stdio.h>
#include<math.h>
long int result=0;
//long int n=0; 
long int bmi(long int W, long int H){
    result= (W*10000)/(H*H);
    return result;
}

long int bmr(long int W,long int H, int A){
    result = 655 + (9.6 * W) + (1.8 * H) - (4.7 * A);
    return result;
}

long int calorie_requirement(float B, int S){
if(S==1)
{
   result=(B*1.2);
   return result;
    
}
else if(S==2)
{
   result=(B*1.375);
   return result;
    
}
else if(S==3)
{
    result=(B*1.55);
    return result;
    
}
else if(S==4)
{
    result=(B*1.725);
    return result;
   
}
else
{
    result=(B*1.9);
    return result;
   
}
    

}
