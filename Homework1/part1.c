#include <stdio.h>
float trueOp(float num1,float num2, char operation);
float falseOp(float num1,float num2, char operation);
float main()
{
  float num1, num2,error,result,falseResult,errorRate;//float yapıllıcak
  float sumOfErrorRate=0;
  char operation;
  //1
  printf("Enter an operation(Example3+2):");
  scanf("%f %c %f",&num1,&operation,&num2);
  //true result
  if(operation=='*'){
    result = num1*num2;
  }
  if(operation=='/'){
    result= num1/num2;
  }
  if(operation=='+'){
    result= num1+num2;
  }
  if(operation=='-'){
    result= num1-num2;
  }
  //false result
  if(operation=='*'){
    falseResult = num1+num2;
  }
  if(operation=='/'){
    falseResult = num1-num2;
  }
  if(operation=='+'){
    falseResult = num1-num2;
  }
  if(operation=='-'){
    falseResult = num1*num2;
  } 

  if(result< falseResult){
    error=falseResult-result;
  }else{
  error=result-falseResult;
  }
  errorRate =error/result*100;
  sumOfErrorRate+=errorRate;
  printf("Expected Result: %.2f\n",result);
  printf("Experimental Result: %.2f\n",falseResult);
  printf("Error: %.2f\n",error);
  printf("Error Percentage: %.2f%%\n",errorRate);
  printf("Average Error Value: %.2f%%\n",sumOfErrorRate);

  //2
  printf("Enter an operation(Example3+2):");
  scanf("%f %c %f",&num1,&operation,&num2);
  //true result
  if(operation=='*'){
    result = num1*num2;
  }
  if(operation=='/'){
    result= num1/num2;
  }
  if(operation=='+'){
    result= num1+num2;
  }
  if(operation=='-'){
    result= num1-num2;
  }
  //false result
  if(operation=='*'){
    falseResult = num1+num2;
  }
  if(operation=='/'){
    falseResult = num1-num2;
  }
  if(operation=='+'){
    falseResult = num1-num2;
  }
  if(operation=='-'){
    falseResult = num1*num2;
  } 

  if(result< falseResult){
    error=falseResult-result;
  }else{
  error=result-falseResult;
  }
  errorRate =error/result*100;
  sumOfErrorRate+=errorRate;
  printf("Expected Result: %.2f\n",result);
  printf("Experimental Result: %.2f\n",falseResult);
  printf("Error: %.2f\n",error);
  printf("Error Percentage: %.2f%%\n",errorRate);
  printf("Average Error Value: %.2f%%\n",sumOfErrorRate/2);

  //3
  printf("Enter an operation(Example3+2):");
  scanf("%f %c %f",&num1,&operation,&num2);
  //true result
  if(operation=='*'){
    result = num1*num2;
  }
  if(operation=='/'){
    result= num1/num2;
  }
  if(operation=='+'){
    result= num1+num2;
  }
  if(operation=='-'){
    result= num1-num2;
  }
  //false result
  if(operation=='*'){
    falseResult = num1+num2;
  }
  if(operation=='/'){
    falseResult = num1-num2;
  }
  if(operation=='+'){
    falseResult = num1-num2;
  }
  if(operation=='-'){
    falseResult = num1*num2;
  }   

  if(result< falseResult){
    error=falseResult-result;
  }else{
  error=result-falseResult;
  }
  errorRate =error/result*100;
  sumOfErrorRate+=errorRate;
  printf("Expected Result: %.2f\n",result);
  printf("Experimental Result: %.2f\n",falseResult);
  printf("Error: %.2f\n",error);
  printf("Error Percentage: %.2f%%\n",errorRate);
  printf("Average Error Value: %.2f%%\n",sumOfErrorRate/3);
  
  //4
  printf("Enter an operation(Example3+2):");
  scanf("%f %c %f",&num1,&operation,&num2);
  //true result
  if(operation=='*'){
    result = num1*num2;
  }
  if(operation=='/'){
    result= num1/num2;
  }
  if(operation=='+'){
    result= num1+num2;
  }
  if(operation=='-'){
    result= num1-num2;
  }
  //false result
  if(operation=='*'){
    falseResult = num1+num2;
  }
  if(operation=='/'){
    falseResult = num1-num2;
  }
  if(operation=='+'){
    falseResult = num1-num2;
  }
  if(operation=='-'){
    falseResult = num1*num2;
  }

  if(result< falseResult){
    error=falseResult-result;
  }else{
  error=result-falseResult;
  }
  errorRate =error/result*100;
  sumOfErrorRate+=errorRate;
  printf("Expected Result: %.2f\n",result);
  printf("Experimental Result: %.2f\n",falseResult);
  printf("Error: %.2f\n",error);
  printf("Error Percentage: %.2f%%\n",errorRate);
  printf("Average Error Value: %.2f%%\n",sumOfErrorRate/4);







  return 0;
}


