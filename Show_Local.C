#include <stdio.h>
void showlocal(){
int localvar = 0;  //Local variable: re-created eash function call
localvar++;
printf("Local variable value: %d\n", localvar);
}

int main(){
showLocal(); //1st call
showLocal(); //2nd call
showLocal(); //3rd call
getch ();
return 0;
}