/*@ requires amount>0;
    assigns \nothing;
behavior a:
	assumes 500 <= amount;
	ensures \result==amount / 500;
behavior b:
	assumes 50 <= amount < 500;
	ensures \result == amount / 50;
behavior c:
	assumes 20 <= amount < 50;
	ensures \result == amount / 20;
behavior d:
	assumes 0 <= amount < 20;
	ensures \result == amount;
complete behaviors;
disjoint behaviors;

*/
int denom(int amount){
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

void main() {
    printf("%d", denom(80));
}