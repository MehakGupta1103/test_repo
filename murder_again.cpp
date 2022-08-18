#include <bits/stdc++.h>
using namespace std;

// Declaration of global variables
int array[100000];
int array1[100000], array2[100000];
long long int sum1[100000];
long long int ans;

void merge_sort(int left, int right);
void merge(int left, int mid, int right);

int main()
{
    int t, counter, n, i;

    // t is the number of testcases
    scanf("%d", &t);

    for (counter = 0; counter < t; counter++)
    {
        // n is the number of elements in the array
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        // ans hold the final answer and so it is initialized to 0 for every test case
        ans = 0;
        merge_sort(0, n - 1);

        printf("%lld\n", ans);
    }
}

void merge(int left, int mid, int right)
{
    int index, index1, index2;

    // array1 is used to store the elements from left to mid
    // array2 is used to store the elemetns from mid+1 to right
    // sum1 holds the sum of elements whose index is less than current index in array1 so that sum1[0] is always 0 .

    sum1[0] = 0; // initialize here

    // copying into array1 from left to mid
    index1 = 0;
    for (index = left; index < mid + 1; index++)
    {
        if (index1 != 0)
        {
            sum1[index1] = sum1[index1 - 1] + array1[index1 - 1];
        }

        // copying into array1 from left to mid
        index1 = 0;
        for (index = left; index < mid + 1; index++)
        {
            if (index1 != 0)
            {
                sum1[index1] = sum1[index1 - 1] + array1[index1 - 1];
            }

            array1[index1] = array[index];
            index1++;
        }

        // copying into array2 from mid+1 to right
        index2 = 0;
        for (index = mid + 1; index < right + 1; index++)
        {

            array2[index2] = array[index];
            index2++;
        }

        // merging the two arrays array1 and array2 and adding to the variable  ans array[index1] if array1[index1] < array2[index2]
        index1 = 0;
        index2 = 0;
        index = left;
        while ((index1 < mid - left + 1) && (index2 < right - mid))
        {
            if (array1[index1] < array2[index2])
            {

                array[index] = array1[index1];
                index++;
                index1++;
            }
            else if (array1[index1] >= array2[index2])
            {
                ans = ans + sum1[index1];
                array[index] = array2[index2];
                index++;
                index2++;
            }
        }

        if (index1 < mid - left + 1)
        {
            while (index1 < mid - left + 1)
            {
                array[index] = array1[index1];
                index++;
                index1++;
            }
        }
        else if (index2 < right - mid)
        {
            while (index2 < right - mid)
            {
                ans = ans + sum1[index1 - 1] + array1[index1 - 1];
                array[index] = array2[index2];
                index++;
                index2++;
            }
        }
    }
}

void merge_sort(int left, int right)
{
    // Typical merge sort procedure
    if (left == right)
    {
    }
    else
    {
        int mid = (left + right) / 2;
        merge_sort(left, mid);
        merge_sort(mid + 1, right);
        merge(left, mid, right);
    }
}
