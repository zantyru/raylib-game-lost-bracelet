/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

// Защита от множественного include одного и того же
// содержимого заголовочного файла
#ifndef AREA_H
#define AREA_H


#include "constants.h"


typedef struct AreaCell
{
    AreaCellType floor;
    AreaCellType object;
} AreaCell;


typedef struct Area
{
    //  width
    //    ___--+
    // ```      \  length
    //           \ 
    
    int _width;
    int _length;
    int _widlen;
    AreaCell* _cells;
} Area;

void Area_Init(Area* area, const int width, const int length);
void Area_Release(Area* area);
const AreaCell* Area_GetCell(Area* area, const int at_x, const int at_y);


#endif // AREA_H
