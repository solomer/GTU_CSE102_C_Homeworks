#include <stdio.h>
float trueOp(float num1,float num2, char operation);
float falseOp(float num1,float num2, char operation);
int main()
{
  float num1, num2,error,result,falseResult,errorRate;
  float sumOfErrorRate=0;
  char operation;
  /*1*/
  printf("Enter an operation(Example3+2):");
  scanf("%f %c %f",&num1,&operation,&num2);
  /*true result*/
  if(operation=='*'){
    result = num1*num2;
    falseResult = num1+num2;
  }
  if(operation=='/'){
    if(num2 == 0){
      printf("Error. you cant divide with 0");
      return 0;
    }
    result= num1/num2;
    falseResult = num1-num2;
  }
  if(operation=='+'){
    result= num1+num2;
    falseResult = num1-num2;
  }
  if(operation=='-'){
    result= num1-num2;
    falseResult = num1*num2;
  }

  if(result< falseResult){
    error=falseResult-result;
  }else{
  error=result-falseResult;
  }
  errorRate =error/result*100;
  if (result==0){
    errorRate=0;
  }
  sumOfErrorRate+=errorRate;
  printf("Expected Result: %.2f\n",result);
  printf("Experimental Result: %.2f\n",falseResult);
  printf("Error: %.2f\n",error);
  printf("Error Percentage: %.2f%%\n",errorRate);
  printf("Average Error Value: %.2f%%\n",sumOfErrorRate);

  /*2*/
  printf("Enter an operation(Example3+2):");
  scanf("%f %c %f",&num1,&operation,&num2);
  /*true result*/
  if(operation=='*'){
    result = num1*num2;
    falseResult = num1+num2;
  }
  if(operation=='/'){
    if(num2 == 0){
      printf("Error. you cant divide with 0");
      return 0;
    }
    result= num1/num2;
    falseResult = num1-num2;
  }
  if(operation=='+'){
    result= num1+num2;
    falseResult = num1-num2;
  }
  if(operation=='-'){
    result= num1-num2;
    falseResult = num1*num2;
  }

  if(result< falseResult){
    error=falseResult-result;
  }else{
  error=result-falseResult;
  }
  errorRate =error/result*100;
  if (result==0){
    errorRate=0;
  }
  sumOfErrorRate+=errorRate;
  printf("Expected Result: %.2f\n",result);
  printf("Experimental Result: %.2f\n",falseResult);
  printf("Error: %.2f\n",error);
  printf("Error Percentage: %.2f%%\n",errorRate);
  printf("Average Error Value: %.2f%%\n",sumOfErrorRate/2);

  /*3*/
  printf("Enter an operation(Example3+2):");
  scanf("%f %c %f",&num1,&operation,&num2);
  /*true result*/
  if(operation=='*'){
    result = num1*num2;
    falseResult = num1+num2;
  }
  if(operation=='/'){
    if(num2 == 0){
      printf("Error. you cant divide with 0");
      return 0;
    }
    result= num1/num2;
    falseResult = num1-num2;
  }
  if(operation=='+'){
    result= num1+num2;
    falseResult = num1-num2;
  }
  if(operation=='-'){
    result= num1-num2;
    falseResult = num1*num2;
  }

  if(result< falseResult){
    error=falseResult-result;
  }else{
  error=result-falseResult;
  }
  errorRate =error/result*100;
  if (result==0){
    errorRate=0;
  }
  sumOfErrorRate+=errorRate;
  printf("Expected Result: %.2f\n",result);
  printf("Experimental Result: %.2f\n",falseResult);
  printf("Error: %.2f\n",error);
  printf("Error Percentage: %.2f%%\n",errorRate);
  printf("Average Error Value: %.2f%%\n",sumOfErrorRate/3);
  
  /*4*/
  printf("Enter an operation(Example3+2):");
  scanf("%f %c %f",&num1,&operation,&num2);
  /*true result*/
  if(operation=='*'){
    result = num1*num2;
    falseResult = num1+num2;
  }
  if(operation=='/'){
    if(num2 == 0){
      printf("Error. you cant divide with 0");
      return 0;
    }
    result= num1/num2;
    falseResult = num1-num2;
  }
  if(operation=='+'){
    result= num1+num2;
    falseResult = num1-num2;
  }
  if(operation=='-'){
    result= num1-num2;
    falseResult = num1*num2;
  }

  if(result< falseResult){
    error=falseResult-result;
  }else{
  error=result-falseResult;
  }
  errorRate =error/result*100;
  if (result==0){
    errorRate=0;
  }
  sumOfErrorRate+=errorRate;
  printf("Expected Result: %.2f\n",result);
  printf("Experimental Result: %.2f\n",falseResult);
  printf("Error: %.2f\n",error);
  printf("Error Percentage: %.2f%%\n",errorRate);
  printf("Average Error Value: %.2f%%\n",sumOfErrorRate/4);

  return 0;
}


