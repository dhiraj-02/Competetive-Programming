//https://www.codechef.com/problems/STABLEMP

#include <iostream>
using namespace std;

int preference_compare(int x, int y, int* A, int n)
{

    int x_pos, y_pos;

    for(int i = 0; i < n; i++)
    {

        if(*(A+i) == x)
            x_pos = i;
        if(*(A+i) == y)
            y_pos = i;
    }

    if(x_pos < y_pos)
        return 1;
    return 0;
}

int main()
{

    int T;
    scanf("%d", &T);

    while(T--)
    {

        int N;
        scanf("%d", &N);

        int WPL[N][N], MPL[N][N];

        for(int i = 0; i < N; i++)
        {

            int index;
            scanf("%d", &index);

            for(int j = 0; j < N; j++)
            {

                scanf("%d", &WPL[index-1][j]);
                WPL[index-1][j]--;
            }
        }

        for(int i = 0; i < N; i++)
        {

            int index;
            scanf("%d", &index);

            for(int j = 0; j < N; j++)
            {

                scanf("%d", &MPL[index-1][j]);
                MPL[index-1][j]--;
            }
        }

        int free_men = N;
        int WIF[N], MIF[N];

        for(int i = 0; i < N; i++)
        {

            WIF[i] = -1;
            MIF[i] = -1;
        }

        while(free_men > 0)
        {

            int pos;

            for(int i = 0; i < N; i++)
            {
                if(MIF[i] == -1)
                {
                    pos = i;
                    break;
                }
            }

            for(int i = 0; i < N && MIF[pos] == -1; i++)
            {

                int w = MPL[pos][i];

                if(WIF[w] == -1)
                {

                    WIF[w] = pos;
                    MIF[pos] = w;
                    free_men--;
                    break;
                }
                else
                {

                    int x = pos;
                    int y = WIF[w];

                    if(preference_compare(x, y, WPL[w], N))
                    {

                        MIF[y] = -1;
                        WIF[w] = pos;
                        MIF[pos] = w;
                    }

                }
            }
        }

        for(int i = 0; i < N; i++)
        {
            cout << i+1 << " " << MIF[i]+1 << endl;
        }

    }

    return 0;
}