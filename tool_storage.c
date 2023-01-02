#include "raylib.h"
#include "tool_storage.h"


storage_chunk_t* Chunk_Allocate(size_t item_size)
{
    storage_chunk_t* chunk = MemAlloc(offsetof(storage_chunk_t, buffer) + STORAGE_CHUNK_CAPACITY * item_size);
    if (chunk != NULL)
    {
        chunk->item_size = item_size;
        chunk->_next = NULL;
    }

    return chunk;
}


void* Chunk_GetItemPointer(storage_chunk_t *chunk, int index)
{
    return
        (index >= 0 && index < STORAGE_CHUNK_CAPACITY)
        ? &chunk->buffer + index * chunk->item_size
        : NULL
    ;
}


void Chunk_Free(storage_chunk_t *chunk)
{
    MemFree(chunk);
}
