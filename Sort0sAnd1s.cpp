void segregate0and1(int arr[], int size)
{
    int type0 = 0;
    int type1 = size - 1;
 
    while (type0 < type1) {
        if (arr[type0] == 1) {
            if (arr[type1] != 1)
                swap(arr[type0], arr[type1]);
            type1--;
        }
        else
            type0++;
    }
}

