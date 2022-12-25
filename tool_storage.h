/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

// Защита от множественного include одного и того же
// содержимого заголовочного файла
#ifndef TOOL_STORAGE_H
#define TOOL_STORAGE_H


#include <stddef.h>  // NULL, size_t


const int STORAGE_CHUNK_SIZE = 64;


typedef struct
{
    size_t size;
    int count;
    storage_chunk_t* _next;
    void* buffer;
} storage_chunk_t;

storage_chunk_t* Chunk_Allocate(size_t size, int count);
void* Chunk_GetElement(storage_chunk_t *data, int index);
void Chunk_Free(storage_chunk_t *data);


typedef struct Storage
{

} Storage;


#endif // TOOL_STORAGE_H