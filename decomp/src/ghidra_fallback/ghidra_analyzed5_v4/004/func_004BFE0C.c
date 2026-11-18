#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern undefined DAT_004bfe40;
extern int DAT_004bfe48;
extern char s_Spine_004bfe4c[];

// USA 004BFE0C <- EU 004BFDE4 (Ghidra, non-matching)
// GLOBAL DAT_004bfe40 undefined
// GLOBAL DAT_004bfe48 int
// GLOBAL s_Spine_004bfe4c string

void func_004BFE0C(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_004bfe48;
  local_1c = &DAT_004bfe40;
  local_20 = DAT_004bfe48;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_20);
  *(uint *)(param_1 + 0x840) = uVar2;
  if ((*(uint *)(param_1 + 0x8ac) & 0x400) == 0) {
    local_14 = s_Spine_004bfe4c;
    local_18 = iVar1;
    uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
    *(uint *)(param_1 + 0x844) = uVar2;
  }
  return;
}

