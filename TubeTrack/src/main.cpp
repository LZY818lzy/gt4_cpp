#include <iostream>
#include "TubeTrackObject.h"

int main()
{
    CTube tube;
    for (int i = 0; i < 10; i++)
    {
        if (prodPlan.Pop(&tube))
        {
            if (lengthPos.Push(tube))
            {
                lengthPos.DebugOut();
                lengthPos.Pop(&tube);
            }
        }
    }

    return 0;
}