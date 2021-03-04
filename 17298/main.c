#include "header.h"
#include "header.h"


int main()
{
    int i,j, input;
    int num; // 입력받을 횟수
    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        scanf("%d", &input);
        _push(input);
    }

    int nge;

    for(i=0; i<num; i++)
    {
        nge = -1;
        for(j=num-1; j>i; j--)
        {
            if(stack[j]> stack[i])
            {
                nge = stack[j];
            }
        }

        printf("%d\t", nge);
    }

    return 0;
}