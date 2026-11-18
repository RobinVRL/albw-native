#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_0065650C(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001243c4;
extern int *DAT_001243c8;
extern char s_TrancformEd_001243b8[];

// USA 00124258 <- EU 00124258 (Ghidra, non-matching)
// GLOBAL DAT_001243c4 uint *
// GLOBAL DAT_001243c8 int *
// GLOBAL s_TrancformEd_001243b8 string

void func_00124258(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_29c (*(undefined4 *)(albw_frame + 0x54))
  #define local_298 (*(undefined2 *)(albw_frame + 0x58))
  #define local_294 (*(undefined2 *)(albw_frame + 0x5c))
  #define local_28 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_20 (*(int *)(albw_frame + 0x2d0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x2d4))
  if (0x3c < *(int *)(param_1 + 0x8bc)) {
    iVar1 = *(int *)(param_1 + 0x950);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x954))) {
      iVar2 = *(int *)(iVar1 + 0x20);
      if ((iVar2 != 0) &&
         ((*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
        *(undefined1 *)(iVar2 + 0x280) = 1;
      }
      *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
    }
    piVar3 = (int *)(param_1 + 0x950);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar3 = 0;
      *(undefined4 *)(param_1 + 0x954) = 0;
    }
    else {
      iVar1 = *piVar3;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x954))) {
        func_00110848(iVar1);
      }
      func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)s_TrancformEd_001243b8);
      *piVar3 = local_20;
      *(undefined4 *)(param_1 + 0x954) = uStack_1c;
    }
    local_2c8 = 0;
    local_2c4 = 0;
    local_2cc = 0;
    local_2a0 = 0;
    local_29c = 0;
    local_28 = 0;
    func_002DFF7C(&local_2e8);
    local_2e8 = func_0019B04C(*DAT_001243c4);
    local_298 = *(undefined2 *)(param_1 + 0x54);
    local_294 = *(undefined2 *)(param_1 + 0x58);
    local_29c = *(undefined4 *)(param_1 + 0x2cc);
    local_2e4 = *(undefined4 *)(param_1 + 0x3d0);
    local_2e0 = *(undefined4 *)(param_1 + 0x3d4);
    local_2dc = *(undefined4 *)(param_1 + 0x3d8);
    local_2c8 = *(undefined4 *)(param_1 + 1000);
    func_004C43E0(*DAT_001243c8,&local_2e8);
    func_0065650C((undefined4 *)(param_1 + 0x8bc),7);
  }
  return;
}

