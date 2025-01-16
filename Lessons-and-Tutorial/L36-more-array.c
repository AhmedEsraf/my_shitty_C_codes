// write a program to enter price of 3 items &
// print their final cost with gst

#include <stdio.h>

int main()
{
    int n;
    
    float totalCost = 0;

    printf("Enter the number of items: "); // taking array size
    scanf("%d", &n);

    float prices[n];

    float gst;
    printf("Enter gst rate: "); // taking gst rate
    scanf("%f", &gst);

    for (int i = 0; i < n; i++) // taking input for each array element
    {
        printf("Enter price of item #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    printf("Prices with gst: "); // printing all the array elements with gst

    for (int j = 0; j < n; j++)
    {
        printf("%.2f  ", (prices[j] * gst + prices[j]));
    }

    // calculating total cost with gst
    for (int k = 0; k < n; k++)
    {
        totalCost += prices[k] * (1 + gst);
    }
    printf("\nTotal cost with gst: %.2f\n", totalCost);
}