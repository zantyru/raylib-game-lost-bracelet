/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

// Защита от множественного include одного и того же
// содержимого заголовочного файла
#ifndef TOOL_STORAGE_H
#define TOOL_STORAGE_H


#include <stddef.h>  // Required for: NULL, size_t


const size_t STORAGE_CHUNK_CAPACITY = 64;


typedef struct
{
    size_t item_size;
    storage_chunk_t* _next;
    void* buffer;
} storage_chunk_t;

storage_chunk_t* Chunk_Allocate(size_t item_size);
void* Chunk_GetItemPointer(storage_chunk_t *chunk, int index);
void Chunk_Free(storage_chunk_t *chunk);


typedef struct Storage
{

} Storage;


#endif // TOOL_STORAGE_H