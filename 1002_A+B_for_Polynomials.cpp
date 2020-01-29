#include<stdio.h>
int main(){
    int a_K=0;
    int b_K=0;
    double a[1005]={0};
    double b[1005]={0};
    scanf("%d",&a_K);
    for(int i=0;i<a_K;i++){
        int temp_exp;
        double temp_coe;
        scanf(" %d %lf",&temp_exp,&temp_coe);
        a[temp_exp]=temp_coe;
    }

    scanf("%d",&b_K);
    for(int i=0;i<b_K;i++){
        int temp_exp;
        double temp_coe;
        scanf(" %d %lf",&temp_exp,&temp_coe);
        b[temp_exp]=temp_coe;
    }
    double res[1005];
    int dig=0;
    for(int i=0;i<1005;i++){
        res[i]=a[i]+b[i];
        if(res[i]!=0)dig++;
    }

    printf("%d",dig);
    for(int i=1004;i>=0;i--){
        if(res[i]!=0){
            printf(" %d %.1lf",i,res[i]);//这个要%.1lf输出 输出注意按指数递减输出
        }
    }
   return 0;
}