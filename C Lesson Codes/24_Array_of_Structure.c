#include <stdio.h>

typedef struct
{
    char brand[12];
    char name[18];
    int year;
    int max;
} Car;

int main()
{
    Car car1 = {"Porsche", "911_GT3RS", 2022, 296};
    Car car2 = {"Lamborghini", "Diablo_VT_Roadster", 1999, 325};
    Car car3 = {"McLaren", "F1_LM", 1995, 362};

    Car Cars[] = {car1, car2, car3};
    int Size = sizeof(Cars)/sizeof(Cars[0]);

    for(int i = 0; i < Size; i++){
        printf("%d %-12s %-18s \tmax: %d kmph\n", Cars[i].year, Cars[i].brand, Cars[i].name, Cars[i].max);
    }
    
    return 0;
}