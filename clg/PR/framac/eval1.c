#include <limits.h>
/*@
requires 0<=amount<INT_MAX;
ensures 0<=\result<INT_MAX;
behavior a:
	assumes 500<=amount<INT_MAX;
	ensures \result==amount/500;
behavior b:
	assumes 50<=amount<500;
	ensures \result==amount/50;
behavior c:
	assumes 20<=amount<50;
	ensures \result==amount/20;
behavior d:
	assumes 0<=amount<20;
	ensures \result==amount;
complete behaviors a,b,c,d;
disjoint behaviors a,b,c,d;

*/
int denom( int amount)
{
	int note;
if(amount >= 500)
    note = amount/500;
else if(amount >= 50)
	note= amount/50;
else if(amount >= 20)
        note = amount/20;
else
        note = amount;
return note;
}
int main(){
	int n;
	int y=90;
	n=denom(y);
	
}