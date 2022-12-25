/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

// Защита от множественного include одного и того же
// содержимого заголовочного файла
#ifndef AREA_H
#define AREA_H


typedef enum AreaCellType
{
    AREA_CELL_TYPE_NONE,
    AREA_CELL_TYPE_EMPTY,
    AREA_CELL_TYPE_BLOCK,
    AREA_CELL_TYPE_FLOOR,
    AREA_CELL_TYPE_PLAYER,
    _COUNT_AREA_CELL_TYPE
} AreaCellType;


typedef struct AreaCell
{
    AreaCellType floor;
    AreaCellType object;
} AreaCell;


typedef struct Area
{
    //  width
    // -------+
    //        |  length
    //        |
    
    int _width;
    int _length;
    int _widlen;
    AreaCell* _cells;
} Area;

void Area_Init(Area* area, const int width, const int length);
void Area_Release(Area* area);
const AreaCell* Area_GetCell(Area* area, const int at_x, const int at_y);


#endif // AREA_H
