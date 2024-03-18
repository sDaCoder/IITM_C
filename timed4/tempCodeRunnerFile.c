int isIncreasing(int* arr, int size)
{
    int check = 0;
    for (int i = 0; i < (size-1); i++)
    {
        if (arr[i] < arr[i+1])
        {
            check = 1;
        }
        else{
            check = 0;
            break;
        }
    }
    return check;
}