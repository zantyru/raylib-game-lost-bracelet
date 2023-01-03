/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

#include <stddef.h>  // Required for: NULL
#include "raylib.h"
#include "area.h"


void Area_Init(Area* data, const int width, const int length)
{
    data->_width = width;
    data->_length = length;
    
    if (data->_width < 0) data->_width = -data->_width;
    if (data->_length < 0) data->_length = -data->_length;
    
    data->_widlen = data->_width * data->_length;
    data->_cells = (AreaCell*)MemAlloc(sizeof(AreaCell) * data->_widlen);
    
    for (int idx = 0; idx < data->_widlen; idx++)
    {
        data->_cells[idx].floor = AREA_CELL_TYPE_FLOOR;
        data->_cells[idx].object = AREA_CELL_TYPE_EMPTY;
    }
}


void Area_Release(Area* data)
{
    if (data->_cells != NULL)
    {
        MemFree(data->_cells);
        data->_cells = NULL;
    }
    
    data->_widlen = 0;
    data->_width = 0;
    data->_length = 0;
}


const AreaCell* Area_GetCell(Area* data, const int at_x, const int at_y)
{
    if (at_x < 0 || at_y < 0 || at_x >= data->_width || at_y >= data->_length)
    {
        return NULL;
    }
    
    int index = at_y * data->_width + at_x;
    const AreaCell* cell = &(data->_cells[index]);
    
    return cell;
}