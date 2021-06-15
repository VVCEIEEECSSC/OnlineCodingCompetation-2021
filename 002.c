#include <stdio.h>


void main()
{
    int i, j, k, l;
    i = 0;
    j = 0;
    k = 0;
    l = 0;
    int a[8][8], sol[16][2][2], small, ind, gi = 0, gj= 0, mm, nom = 0;
    
    //printf("%d", sol[0][0][0]);
    
    printf("Enter matrix: \n");
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    mm = 0;
    small = a[0][0];
    int ss1, ii, jj;
    
    for(k = 0; k<8; k= k+2)
    {
        for(l = 0; l<8; l=l+2)
        {
            sol[mm][0][0] = a[k][l];
            sol[mm][0][1] = a[k][l+1];
            sol[mm][1][0] = a[k+1][l];
            sol[mm][1][1] = a[k+1][l+1];
            
            
            if(sol[mm][0][0] < small)
            {
                small = sol[mm][0][0];
                gi = k;
                gj = l;
                nom = mm;
            }
            if(sol[mm][0][1] < small)
            {
                small = sol[mm][0][1];
                gi = k;
                gj = l + 1;
                nom = mm;
            }
            if(sol[mm][1][0] < small)
            {
                small = sol[mm][1][0];
                gi = k+1;
                gj = l;
                nom = mm;
            }
            if(sol[mm][1][1] < small)
            {
                small = sol[mm][1][1];
                gi = k+ 1;
                gj = l +1;
                nom = mm;
             //   printf("%d", nom);
            }
            //printf("%d", nom);
            mm = mm+1;
        }
    }
    
    printf("2X2  extracted Matrix: \n");
    for(ii = 0; ii< 2; ii++)
    {
        for(jj = 0; jj < 2; jj++)
      {
           printf("%d ", sol[nom][ii][jj]);
      }
      printf("\n");
    }
    
    printf("\nSmallest element in 2X2: %d\n", small);
    printf("Index of smallest element in 8X8 matrix: %d %d\n", gi, gj);
}
