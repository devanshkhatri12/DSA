

// codestudio quetion
// link : https://bit.ly/3DfQW0s


void sort012(int *arr, int n)
{
   //   Write your code here
   int zerocount =0 ,onecount =0 , twocount =0;

   for(int i=0; i<n; i++)
   {
      if(arr[i] == 0)
      {
         zerocount++;
      }
      else if(arr[i] == 1)
      {
         onecount++;
      }
      else
      {
         twocount++;
      }
   }

   for(int i=0; i<n; i++)
   {
      if(zerocount != 0)
      {
         arr[i] = 0;
         zerocount--;
      }
      else if(onecount != 0)
      {
         arr[i] = 1;
         onecount--;
      }
      else
      {
         arr[i] = 2;
         twocount--;
      }
   }
}