//BMI

#include <stdio.h>
int main(void){
    double weight=46; //kg表記
    double height=1.58; //m表記
    double bmi=weight/(height*height);

    if(bmi>=25){
        printf("ふとってるかも・・・");
    
    }else if(18.5<=bmi&&bmi<25){
        printf("ちょうどいいかんじ！")；

    }else{
        printf("やせてるよ！")；

    }