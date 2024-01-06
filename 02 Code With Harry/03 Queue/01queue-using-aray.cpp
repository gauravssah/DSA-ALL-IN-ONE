#include <iostream>
#include <stdlib.h>
using namespace std;

//  Code For Queue and its Operations Using Arrays in Data Structure

struct queue
{
        int size;
        int f;
        int r;
        int *arr;
};

int main()
{
        struct queue q;
        q.size = 100;
        q.f = q.r = -1;
        q.arr = (int *)malloc(q.size * sizeof(int));

        return 0;
}