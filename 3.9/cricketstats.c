#include <stdio.h>
struct player
{
    int runs,wickets,matches;
    char name[50];
    float score;
};
int main(){
    int n,i,topindex=0;
    printf("\nenter number of players: ");
    scanf("%d",&n);
    struct player pl[n];
    for (i=0;i<n;i++)
    {printf("\nenter details of players: \n");
    printf("runs: ");
    scanf("%d",&pl[i].runs);
    printf("wickets: ");
    scanf("%d",&pl[i].wickets);
    printf("matches: ");
    scanf("%d",&pl[i].matches);
    printf("\nscore: ");
    scanf("%f", &pl[i].score);
    printf("\nname: ");
    scanf("%s", pl[i].name);}
if (pl[i].score>pl[topindex].score)
{topindex=i;}
printf("\n-------winner--------\n");
printf("runs: %d\n",pl[topindex].runs);
printf("wickets: %d\n",pl[topindex].wickets);
printf("matches: %d\n",pl[topindex].matches);
printf("name: %s\n", pl[topindex].name);
printf("score: %f\n", pl[topindex].score);
return 0;
}