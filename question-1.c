/*
  CS300 Secure Coding
  Homework: 1
  Question: 1
  compile: gcc question-1.c -o question-1 -w -fno-stack-protector -z execstack -no-pie
*/

#include <string.h>

#define pass "password"

int main()
{
  char isValidPass = 0;
  char buf[75];

  printf("Enter the password: \n");
  gets(buf);

  if (strcmp(buf, password) == 0)
    isValidPass = 1;

  if (password == 1)
    printf("You have the correct password.\n")
}
