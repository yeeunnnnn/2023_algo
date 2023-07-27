#include <stdio.h>

#define MAX_HEAP_SIZE 100001
#define EMPTY_HEAP(n) (!n)
#define FULL_HEAP(n) (n == MAX_HEAP_SIZE - 1)
#define abs(n) ((n > 0) ? n : -n)

int cursor = 0;
int abs_min_heap[MAX_HEAP_SIZE] = {0};

void push(int key)
{
    if (FULL_HEAP(cursor))
        return;
    int i = ++cursor;
    while (i != 1 && abs(abs_min_heap[i / 2]) >= abs(key))
    {
        if (abs(abs_min_heap[i / 2]) == abs(key))
        {
            if (abs_min_heap[i / 2] > key) // 부호가 다른 경우 바꿔주고
            {
                abs_min_heap[i] = abs_min_heap[i / 2];
                i /= 2;
            }
            else // 부호가 같으면... break? 뭐 더해줄게 있나?
            {
                break;
            }
        }
        else
        {
            abs_min_heap[i] = abs_min_heap[i / 2];
            i /= 2;
        }
    }
    abs_min_heap[i] = key;
}

void pop()
{
    if (EMPTY_HEAP(cursor))
        return;
    abs_min_heap[1] = abs_min_heap[cursor];
    abs_min_heap[cursor--] = 0;
    int value = abs_min_heap[1];

    int parent = 1;
    int child = 2;

    while (child <= cursor)
    {
        if (abs(abs_min_heap[child]) >= abs(abs_min_heap[child + 1]) && child < cursor)
        {

            if (abs(abs_min_heap[child]) == abs(abs_min_heap[child + 1]))
            {
                if (abs_min_heap[child] > abs_min_heap[child + 1]) // 부호가 다를때
                {
                    child++;
                }
                else // 부호가 같을때는 굳이?
                {
                }
            }
            else
            {
                child++;
            }
        }
        if (abs(value) <= abs(abs_min_heap[child]))
        {
            if (abs(value) == abs(abs_min_heap[child]))
            {
                if (value < abs_min_heap[child]) // 부호가 다를때
                {
                    break;
                }
                else
                {
                    // break 걸리면 안됨
                }
            }
            else
            {
                break;
            }
        }
        abs_min_heap[parent] = abs_min_heap[child];
        parent = child;
        child *= 2;
    }
    abs_min_heap[parent] = value;
}

int main()
{
    int ans[MAX_HEAP_SIZE];
    int N;
    int ansIdx = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int cmd;
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 0:
            ans[ansIdx++] = abs_min_heap[1];
            pop();
            break;
        default:
            push(cmd);
        }
    }
    for (int i = 0; i < ansIdx; i++)
        printf("%d\n", ans[i]);
}
