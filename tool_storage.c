#include "raylib.h"
#include "tool_storage.h"


storage_chunk_t* Chunk_Allocate(size_t size, int count)
{
    storage_chunk_t* p = MemAlloc(offsetof(storage_chunk_t, buffer) + count * size);
    if (p)
    {
        p->size = size;
        p->count = count;
        p->_next = NULL;
    }

    return p;
}


void* Chunk_GetElement(storage_chunk_t *data, int index)
{
    return &data->buffer + index * data->size;
}


void Chunk_Free(storage_chunk_t *data)
{
    MemFree(data);
}
