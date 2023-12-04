

// codestudio question
// link :  https://www.codingninjas.com/studio/problems/sort-0-1_624379

void sortZeroesAndOne(int input[], int size)
{
    int i=0 , j =size-1;

    while(i < j)
    {
        while(input[i] == 0  && i<j)
        {
            i++;
        }

        while(input[j] == 1 && i<j)
        {
            j--;
        }

        if(input[i] == 1 && input[j] == 0 && i < j)
        {
            swap(input[i] ,input[j]);
            i++;
            j--;
        }
    }
}