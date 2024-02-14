#include<stdio.h>

int main(){
    
    int aq = 0, ah = 0, fq = 0, fh = 0, tq = 0, th = 0, rq = 0, rh = 0;
    int aircon = 0, fan = 0, tv = 0, ref = 0;
    int tusage = 0, tconsump = 0;
    float totalcharge = 0;

    printf("%-10s","Description");
    printf("%-10s","Qty");
    printf("%-10s","Hrs/Day");

    printf("%-25s","\nAircon");
    scanf("%-20d", &aq);
    printf("%-25s"," ");
    scanf("%-20d", &ah);

    printf("%-25s","\nFan");
    scanf("%-20d %-20d", &fq, &fh);
    printf("%-25s","\nTV");
    scanf("%-20d %-20d", &tq, &th);
    printf("%-25s","\nRefrigerator");
    scanf("%-20d %-20d", &rq, &rh);

    return 0;
}