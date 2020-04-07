
#include <stdlib.h>
#include <stdio.h>
#include "stack.h”
#define STACK SIZE 10
// S t r u c t u r e d e f i n i n g a s t a c k
struct stack
{
char elements [STACK SIZE] ;
int top;
int size;
} ;

struct stack∗ new_stack( )
{
 Stack* st = (Stack*) malloc(sizeof(Stack));
 st->top = -1;
 st->size = 0;
 return st;
}

char top(Stack* st)
{
  if(is_empty(st))
  {
    printf("Error: stack is empty\n");
    exit(EXIT_FAILURE);
  }
  return st->elements[st->top];
}
int size(Stack* st)
{
  return st->size;
}
void push(Stack* st, char i)
{
  st->top++;
  st->size++;
  st->elements[st->top] = i;
}
char pop(Stack* st)
{
  int element = top(st);
  st->top--;
  st->size--;
  return element;
}

void print(stack * st)
{
int i;
for(i=0)
}

int main()
{
struct stack∗st = new_stack ( ) ;
char* sentence = "Hello";
char* reversed;


push ( 'H' , i ) ;
push (  'e' , i ) ;
push (  'l'  , i ) ;
push (  'l'  , i ) ;
push (  'o' , i ) ;
print ( st ) ;
reverse print ( st ) ;
}
