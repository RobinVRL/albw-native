#include "ghidra_types.h"

extern int func_001053A8(undefined4 *param_1,undefined1 *param_2,int param_3,int *param_4,int *param_5, undefined4 param_6,uint param_7,uint param_8);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003CD990(int param_1,uint param_2,uint param_3,undefined4 param_4);
extern int func_003CDAC0(int *param_1);
extern int func_003E3F30(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6, uint *param_7);
extern int func_003E452C(void *param_1,undefined4 param_2);
extern int func_003E4FBC(uint param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_003E576C(undefined4 param_1);
extern int *DAT_003e4378;
extern undefined4 DAT_003e437c;
extern uint DAT_003e4380;
extern int *DAT_003e4384;
extern int *DAT_003e4388;
extern undefined4 DAT_003e438c;

// USA 003E426C <- EU 003E424C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:4 uint *
// PARAM param_7 Stack[0x8]:4 uint *
// PARAM param_8 Stack[0xc]:4 uint *
// PARAM param_9 Stack[0x10]:4 int
// GLOBAL DAT_003e4378 int *
// GLOBAL DAT_003e437c undefined4
// GLOBAL DAT_003e4380 uint
// GLOBAL DAT_003e4384 int *
// GLOBAL DAT_003e4388 int *
// GLOBAL DAT_003e438c undefined4

undefined4
func_003E426C(undefined1 *param_1,undefined1 *param_2,uint *param_3,uint *param_4,uint *param_5,
             uint *param_6,uint *param_7,uint *param_8,int param_9)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((int *)(albw_frame + 0x0))
  local_30[0] = 0;
  local_30[1] = 0;
  iVar8 = *DAT_003e4378;
  puVar7 = param_4;
  iVar4 = func_003E3F30((int)param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar5 = func_003E576C(DAT_003e437c);
    piVar2 = DAT_003e4384;
    uVar1 = 0;
    if ((int)uVar5 < 0) {
      uVar1 = DAT_003e4380;
    }
                    /* WARNING: Subroutine does not return */
    if ((int)uVar5 < 0 && uVar5 != uVar1) {
      func_0010C1B8(uVar5,uVar1,puVar7);
    }
    if (param_3 != (uint *)0x0 && param_4 != (uint *)0x0) {
      uVar5 = *(uint *)(param_2 + 0x130);
    }
    if ((param_3 != (uint *)0x0 && param_4 != (uint *)0x0) && uVar5 != 0) {
      func_003CD990((int)DAT_003e4384,(uint)param_3,(uint)param_4,3);
      iVar8 = piVar2[5];
    }
    piVar3 = DAT_003e4388;
    bVar9 = (*(uint *)(param_2 + 0x18) & 0x20) != 0;
    if (bVar9) {
      *DAT_003e4388 = param_9;
    }
    if (bVar9 && param_9 != 0) {
      func_003E452C(DAT_003e438c,0);
    }
    func_003E4FBC(0x401,param_2,0x400,iVar8);
    iVar4 = func_001053A8(local_30 + 1,param_2,0x400,local_30,(int *)0x0,param_7,piVar3[2],piVar3[3]
                         );
    *param_1 = (char)iVar4;
    if (piVar2[5] != 0) {
      func_003CDAC0(DAT_003e4384);
    }
    uVar6 = 1;
  }
  return uVar6;
}

