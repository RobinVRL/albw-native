/* The asset viewer resolves a few extra GL entry points with SDL_GL_GetProcAddress. Under the Qt
 * frontend there is no SDL window, so viewer.c is compiled with
 * -DSDL_GL_GetProcAddress=albw_fe_viewer_gl_proc and gets them from the frontend's context. */
#include "frontend.h"

typedef void (*FnPtr)(void);
FnPtr albw_fe_viewer_gl_proc(const char *name) { return (FnPtr)fe_gl_get_proc(name); }
