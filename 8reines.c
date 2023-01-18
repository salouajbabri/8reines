#include <stdio.h>

int pos_reines[8]={0};
int solution=0;

int abs(int n)
{
    return n<0 ;
}

void recursive(int num_reines){
    if(num_reines==8)
    {
                 for(int i=0; i<8; ++i)
                 {printf("\t\t\t\t");
                 for(int j=0; j<8; ++j)
                 if(j==pos_reines[i]) printf("1 ");
                 else printf("0 ");
                 printf("\n");
                 }
                 printf("\n\n");
                 ++solution;
                 }
    for(int i=0; i<8; ++i)
    {
    for(int j=0; j<num_reines; ++j)
    if(pos_reines[j]==i || ( abs(pos_reines[j]-i) == abs(j-num_reines)))
    goto next;
    pos_reines[num_reines]=i;
    recursive (num_reines+1);
    next: continue;
    }

}


int main()
{
        recursive(0);
        printf("\n\t\tNombre de solutions: %d\n",solution);
        _getch();
        return 0;
}
