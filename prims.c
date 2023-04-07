
#include <stdio.h>
#include <stdbool.h>

#define INF 9999999

#define V 5

// int G[V][V] = {
//     {0, 9, 75, 0, 0},
//     {9, 0, 95, 19, 42},
//     {75, 95, 0, 51, 66},
//     {0, 19, 51, 0, 31},
//     {0, 42, 66, 31, 0}};

int G2[V][V] = {
    {0,2,0,6,0},
    {2,0,3,8,5},
    {0,3,0,0,7},
    {6,8,0,0,9},
    {0,5,7,9,0}
};
int main()
{
    int no_edge; 


    int selected[V];

    memset(selected, false, sizeof(selected));


    no_edge = 0;


    selected[0] = true;

    int x; 
    int y;
    int cost=0;
  
    printf("Edge : Weight\n");

    while (no_edge < V - 1)
    {


        int min = INF;
        x = 0;
        y = 0;

        for (int i = 0; i < V; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < V; j++)
                {
                    if (!selected[j] && G2[i][j])
                    {
                        if (min > G2[i][j])
                        {
                            min = G2[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        printf("%d - %d : %d\n", x, y, G2[x][y]);
        selected[y] = true;
        no_edge++;
        cost  = cost + G2[x][y];
    }
    
    printf("Minimum cost = %d",cost);

    return 0;
}