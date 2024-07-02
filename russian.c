#include <windows.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Russian roulette here becus I'm russian
    srand(time(NULL));
    int r = rand() % 6;
    system(r == 5 ? "shutdown -s -t 0" : "pause");
    return 0;
}
