// Защита от множественного include одного и того же
// содержимого заголовочного файла
#ifndef CONSTANTS_H
#define CONSTANTS_H


const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 576;

const unsigned int RENDER_QUEUE_MAX_LENGTH = 1000;

typedef enum AreaCellType
{
    AREA_CELL_TYPE_NONE,
    AREA_CELL_TYPE_EMPTY,
    AREA_CELL_TYPE_BLOCK,
    AREA_CELL_TYPE_FLOOR,
    AREA_CELL_TYPE_PLAYER,
    _COUNT_AREA_CELL_TYPE
} AreaCellType;


#endif // CONSTANTS_H