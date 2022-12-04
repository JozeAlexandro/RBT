#ifndef _BT_P_H
#define _BT_P_H

#include "BT_types.h"








//btsIBinaryTree *binaryTrees;

/* --- Реализация интерфейса ------------------------------------------------ */

static bteStatus_t add( btData_t data );
static bteStatus_t remove( btData_t data );
static bool contain( btData_t data );
static size_t count( void );
static bteStatus_t clear( void );
static bteStatus_t useAll( btfNode foo );
static void setOrderType( bteOrderType order );

#endif // _BT_P_H
