#include <stdio.h>
#include <string.h>

int main()
{
    int totalRun = 0, wicket = 0, four = 0, six = 0;
    char S[300];
    scanf("%s", S);
    int len = strlen(S);
    int overs = len / 6;
    int remain_ball = len % 6;
    for (int i = 0; i < len; i++)
    {
        if (S[i] >= '0' && S[i] <= '6')
        {
            S[i] -= '0';
            totalRun += S[i];
            if (S[i] == 4)
            {
                four++;
            }
            else if (S[i] == 6)
            {
                six++;
            }
        }
        else if (S[i] == 'W')
        {
            wicket++;
        }
    }
    printf("Total Run: %d\n", totalRun);
    printf("Wicket: %d\n", wicket);
    printf("Four: %d\n", four);
    printf("Six: %d\n", six);
    printf("Over: %d.%d\n", overs, remain_ball);

    return 0;
}
