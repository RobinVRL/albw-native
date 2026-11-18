#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0028F344(int param_1,int param_2);
extern int func_004905E0(float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053F2D4(int param_1,float *param_2,float *param_3,uint param_4,int param_5);
extern int *DAT_003623b0;
extern uint *DAT_003623b4;
extern undefined4 *DAT_003623b8;
extern undefined4 DAT_003623bc;
extern float DAT_003623c0;

// USA 00362198 <- EU 00362174 (Ghidra, non-matching)
// GLOBAL DAT_003623b0 int *
// GLOBAL DAT_003623b4 uint *
// GLOBAL DAT_003623b8 undefined4 *
// GLOBAL DAT_003623bc undefined4
// GLOBAL DAT_003623c0 float

undefined4 func_00362198(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20]; /* entry_sp - 0x20 .. entry_sp + 0x0 */
#define stack0xffffffe0 (*(undefined4 *)(albw_frame + 0x0))
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  #define in_stack_ffffffe0 (*(float *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  #define local_18 (*(float *)(albw_frame + 0x8))
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_003623b0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (((*DAT_003623b4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_003623b4), iVar3 != 0)) {
    *DAT_003623b8 = DAT_003623bc;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_003623b8), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    func_00115C70((float *)&stack0xffffffe0,(float *)(param_2 + 0x3c),*(float **)(param_1 + 0x14));
    if (local_18 == DAT_003623c0 && in_stack_ffffffe0 == DAT_003623c0) {
      iVar3 = 0;
    }
    else if (local_18 < DAT_003623c0) {
      if (in_stack_ffffffe0 < DAT_003623c0) {
        if (in_stack_ffffffe0 < local_18) {
          iVar3 = func_004905E0(local_18 / in_stack_ffffffe0);
          iVar3 = -0x40000000 - iVar3;
        }
        else {
          iVar3 = func_004905E0(in_stack_ffffffe0 / local_18);
          iVar3 = iVar3 + -0x80000000;
        }
      }
      else {
        fVar5 = -local_18;
        if (fVar5 < in_stack_ffffffe0) {
          iVar3 = func_004905E0(fVar5 / in_stack_ffffffe0);
          iVar3 = iVar3 + 0x40000000;
        }
        else {
          iVar3 = func_004905E0(in_stack_ffffffe0 / fVar5);
          iVar3 = -0x80000000 - iVar3;
        }
      }
    }
    else if (in_stack_ffffffe0 < DAT_003623c0) {
      in_stack_ffffffe0 = -in_stack_ffffffe0;
      if (local_18 < in_stack_ffffffe0) {
        iVar3 = func_004905E0(local_18 / in_stack_ffffffe0);
        iVar3 = iVar3 + -0x40000000;
      }
      else {
        iVar3 = func_004905E0(in_stack_ffffffe0 / local_18);
        iVar3 = -iVar3;
      }
    }
    else if (local_18 < in_stack_ffffffe0) {
      iVar3 = func_004905E0(local_18 / in_stack_ffffffe0);
      iVar3 = 0x40000000 - iVar3;
    }
    else {
      iVar3 = func_004905E0(in_stack_ffffffe0 / local_18);
    }
    bVar1 = func_0028F344(iVar3,*(int *)(*(int *)(param_1 + 0x10) + 1000));
    if (bVar1) {
      return 0;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x24);
  if ((((uVar4 & 8) == 0) ||
      (((uVar4 & 0x80000) != 0 && (2 < *(uint *)(*(int *)(param_1 + 0x10) + 0x438))))) &&
     ((iVar3 = *(int *)(param_2 + 0x2c), iVar3 == 0 ||
      (iVar3 = func_0053F2D4(*(int *)(*(int *)(param_1 + 0x10) + 0x614),(float *)(iVar3 + 4),
                             (float *)(param_2 + 0x10),uVar4,iVar3), iVar3 != 0)))) {
    return 1;
  }
  return 0;
}

