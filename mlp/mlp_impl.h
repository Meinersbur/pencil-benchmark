// UjoImro, 2013
// Experimental code for the CARP Project
// Copyright (c) RealEyes, 2013
// This is the response-map header exported for testing

#ifndef __MLP_IMPL__H__
#define __MLP_IMPL__H__

#include "cltypes.h"
// #include "allocator.hpp"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

    
void
calculateMaps(
    void * self,
    int memory_segments[], // representing the start of the gang's memory segment
    int m_visibleLandmarks_size, 
    int m_mapSize, 
//    clMat /*float*/shape, 

    calcpackage inputs[] //,

    // // temporaries
    // cMat wIn,
    // cMat patches[],
    // cMat xOuts[],
    // cMat es[],

    // results
    // clMat /*float*/responseMaps[] );
    );
    
    
        
#endif /* __MLP_IMPL__H__ */

#ifdef __cplusplus
} // extern C
#endif // __cplusplus
// LuM end of file
