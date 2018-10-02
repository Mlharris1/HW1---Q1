/*
  CS300 Secure Coding
  Homework: 1
  Question: 1
  compile: gcc question-1.c -o question-1 -w -fno-stack-protector -z execstack -no-pie
*/

#include <string.h>
#include <stdio.h>

#define pass "password"

int main()
{
  char isValidPass = 0;
  char buf[75];

  printf("Enter the password: \n");
  malloc(buf); //Needs to be looked at and changed

  if (strcmp(buf, pass) == 0)
    isValidPass = 1;

  if (pass == 1)
    printf("You have the correct password.\n");
    isValidPass = 0;

return isValidPass;
}
