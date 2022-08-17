
//Approach 2 :Applying 3 Pointer algorithm


    cout<<"\n\nApplying 3 Pointer algorithm-->\n";
    int left,right;
    for(i=0;i<size-2;i++)
    {
        left=i+1;
        right=size-1;
        while(left<right)
        {
            if(arr[i]+arr[left]+arr[right]==target)
            {
                cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
                left++;
            }
            else if(arr[i]+arr[left]+arr[right]<target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }