#include <stdio.h> //input/output

int main()
{
    int count;
    float sum,avg;

    //รับจำนวนตัวเลข
    printf("input = ");
    scanf("%d",&count);

    int number[count];

    //รับตัวเลยคำนวณ
    for (int i=1; i<= count; i++){
        printf("%d number =  ",i);
        scanf("%d",&number[i]);
    }

    //ผลรวม
    for(int j=1; j<= count; j++){
        sum += number[j];
    }

    //ค่าเฉลี่ย
    avg = sum /count;

    printf("total = %.2f\n",sum);
    printf("avg = %.2f\n",avg);

    return 0;
}
