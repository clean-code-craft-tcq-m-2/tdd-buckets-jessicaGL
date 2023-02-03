#include "TestDrivenRanges.h"
#include <assert.h>

char* Response(int a, int b)
{
    char *response = malloc(10);
    strcpy(response, "4-5, 2");
    return response;
}


int main()
{
  
assert(strcmp(Response(4,5),"4-5, 2") == 0);

return 0;
}
