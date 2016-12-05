/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int start = 0;
    int end = n - 1; // important (start counting from 0)
    int mid = (start + end) / 2;

    while (start <= end)
    {
    if (values[mid] == value)
      return true;
    else if (value < values[mid])
        {
          end = mid - 1;
          mid = (start + end) / 2;
        }
    else if (value > values[mid])
        {
          start = mid + 1;
          mid = (start + end) / 2;
        }
      else 
        break;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int element = values[i];
        int j = i;
        while (j > 0 && values[i - 1] > element)
        {
            values[j] = values [j - 1];
            j = j - 1;
            values[j] =element;
        }
}
}