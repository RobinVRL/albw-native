#include "ghidra_types.h"

extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int *DAT_004b3b38;
extern int *DAT_004b3b3c;
extern undefined4 DAT_004b3b40;
extern int DAT_004b3b44;

// USA 004B3B10 <- EU 004B3AE8 (Ghidra, non-matching)
// GLOBAL DAT_004b3b38 int *
// GLOBAL DAT_004b3b3c int *
// GLOBAL DAT_004b3b40 undefined4
// GLOBAL DAT_004b3b44 int

bool func_004B3B10(void)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = func_00582260(*DAT_004b3b3c,(int)*(char *)(*DAT_004b3b38 + 0x18),
                        *(uint *)(*DAT_004b3b38 + 0x1c));
  local_c = DAT_004b3b40;
  local_10 = DAT_004b3b44;
  iVar1 = func_00691884((int *)(iVar1 + 4),&local_10);
  return iVar1 != 0;
}

