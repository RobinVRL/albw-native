#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern int func_0065A5B8(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_001a43bc;
extern int DAT_001a43d4;
extern char s_ASE_Funguin_SLIDE_001a43bf[];
extern undefined4 _DAT_001a43bc;

// USA 001A4354 <- EU 001A4354 (Ghidra, non-matching)
// GLOBAL DAT_001a43bc undefined
// GLOBAL DAT_001a43d4 int
// GLOBAL s_ASE_Funguin_SLIDE_001a43bf string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_001A4354(int param_1)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_0065A5B8((undefined4 *)(param_1 + 0x8bc),6);
  }
  fVar2 = func_0058AA40(param_1);
  if (_DAT_001a43bc <= (int)ALBW_AS_U32(fVar2)) {
    local_c = s_ASE_Funguin_SLIDE_001a43bf + 1;
    local_10 = DAT_001a43d4;
    func_001507D8(param_1,&local_10,0);
  }
  return;
}

