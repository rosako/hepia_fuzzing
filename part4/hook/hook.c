#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <unistd.h>
#include <string.h>


void* (*malloc_original)(size_t) = NULL;

char message[101];


void *malloc(size_t size){
        if(!malloc_original){
                malloc_original = dlsym(RTLD_NEXT, "malloc");
        }

        void *addr = malloc_original(size);

        sprintf(message, "[+] appel à malloc avec %zu bytes (%p)\n", size, addr);
        write(1, message, strlen(message));


        return addr;
}

