/*@ requires a>0;
   
    behavior a:
        assumes (a % 2 == 0);
        ensures \result == 1;
    behavior b:
        assumes (a % 2 == 1);
        ensures \result == 0;
    
    complete behaviors;
    disjoint behaviors;

*/
int main(){
    int l[5] = {1, 2, 4, 6, 0};
    int flag = 0;
    
    for(int i = 0; i < 5; i++){
        if (l[i] == 0){
            flag = 1;
        } 
    }

    if (flag == 1){
        return 1;
    } else {
        return 0;
    }
}
