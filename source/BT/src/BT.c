#include "BT.h"
#include "BT_p.h"

#include <stdlib.h>



typedef struct
{
    btsIBinaryTree mParent;
    unsigned mId;
} testExtend;

/// @todo Лучше... Мб свой контейнер какой..
static testExtend * arr[ 3 ] = { NULL };




btsIBinaryTree *btNewBinaryTree()
{
    /// @todo

    testExtend *bt = malloc( sizeof( testExtend ) );

    /// @todo Сделать напрямую через -fms-extensions
    bt->mParent.add = add;
    bt->mParent.clear = clear;
    bt->mParent.contain = contain;
    bt->mParent.count = count;
    bt->mParent.remove = remove;
    bt->mParent.setOrderType = setOrderType;
    bt->mParent.useAll = useAll;

    bt->mId = 0;

/// @todo "push" function
    arr[ bt->mId ] = bt;

    return ( btsIBinaryTree* )bt;
}


void btDeleteBinaryTree(btsIBinaryTree *deleting)
{
    /// @todo delete all nodes...
    free( deleting );
}




/* private */


typedef struct btsNode
{
    struct btsNode *mpLeft;
    struct btsNode *mpRight;
    struct btsNode *mpParent;

    btData_t mData;
} btsNode;


static bteStatus_t add( btData_t data )
{

}

static bteStatus_t remove( btData_t data )
{

}

static bool contain( btData_t data )
{

}

static size_t count( void )
{

}

static bteStatus_t clear( void )
{

}

static bteStatus_t useAll( btfNode foo )
{

}

static void setOrderType( bteOrderType order )
{

}

