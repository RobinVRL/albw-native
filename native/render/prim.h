/* sead PrimitiveRenderer: hand-written GLSL of its vertex program (render/prim.c); the draws go
 * through the generic ops (ROP_PROGRAM RPROG_PRIMITIVE, ROP_VS_FLOAT, ROP_ATTRIB, ROP_DRAW)
 * recorded by native/sdk/prim.c. */
#pragma once

extern const char RENDER_VS_PRIMITIVE[];
