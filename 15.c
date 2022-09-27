#include<stdio.h>
#include<stdlib.h>

struct stud{
    int roll;
    char name[10];
    double YGPA;

};

int main(){
    FILE *fp_read, *fp_write;
    int i, j;
    fp_read = fopen("Stud_info.txt", "r");
    if (fp_read==NULL){
        printf("file does not exist\n");
        exit(0);
    }
    struct stud r[10];
    for(i=0; i<10; i++){
        fscanf(fp_read, "%d %s %lf", &r[i].roll, r[i].name, &r[i].YGPA);
    }
    double max=0;
    int pos;
    for(i=0; i<10; i++){
        if(max<r[i].YGPA){
            max=r[i].YGPA;
            pos = i;
        }
    }
    
    printf("%lf", max);
    //Done
    fp_write = fopen("Stud_info.txt", "a");

    fprintf(fp_write,"\nroll: %d Name: %s YGPA: %lf", r[pos].roll , r[pos].name, r[pos].YGPA);

    fclose(fp_write);

    return 0;
    
    
return 0;

}
