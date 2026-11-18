#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern undefined DAT_001c72d4;
extern int DAT_001c72f8;
extern int *DAT_001c72fc;
extern char s_SE_S_WARP_HOLE_SAGE_OUT_START_001c72d8[];

// USA 001C722C <- EU 001C722C (Ghidra, non-matching)
// GLOBAL DAT_001c72d4 undefined
// GLOBAL DAT_001c72f8 int
// GLOBAL DAT_001c72fc int *
// GLOBAL s_SE_S_WARP_HOLE_SAGE_OUT_START_001c72d8 string

undefined4 func_001C722C(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define aiStack_10 ((int *)(albw_frame + 0x10))
  iVar1 = *(int *)(param_1 + 0x448);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x44c))) {
    iVar2 = *(int *)(iVar1 + 0x20);
    if ((iVar2 != 0) &&
       ((*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  if (*(int *)(param_1 + 0x344) != 0) {
    func_004A1B9C(aiStack_10,*(int *)(param_1 + 0x344),(uint *)&DAT_001c72d4);
  }
  local_14 = s_SE_S_WARP_HOLE_SAGE_OUT_START_001c72d8;
  local_18 = DAT_001c72f8;
  return func_00587F74(*DAT_001c72fc,&local_18,0);
}

