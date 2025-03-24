#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "cjson/cJSON.hpp"

int main(){
    size_t size;
    char buffer[4096];
    cJSON *out;

    size = read(0, buffer, sizeof(buffer) - 1);
    if (size < 0)
        exit(1);

    buffer[size] = '\0';

    sleep(1);

    out = cJSON_Parse(buffer);
    if (out)
        cJSON_Delete(out);

    return 0;
}



