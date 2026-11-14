/* USA 004A107C (EU 004A1054): sead::FrameHeap::create(size, name, parent, dir, ...). Ghidra
 * text with one fix: the parent->alloc call (vtable +0x18) lost its alignment argument
 * (r2 = dir << 2: 4 = from the head, -4 = from the tail), so the allocation failed and
 * create returned NULL (TaskRender's heap). Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010DB90(void);
extern int func_0010DF58(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6 ,int param_7);
extern int func_0010EEE0(int param_1);
extern int DAT_004a120c;
extern undefined4 DAT_004a1210;
extern int DAT_004a1214;

// USA 004A107C <- EU 004A1054 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_004a120c int
// GLOBAL DAT_004a1210 undefined4
// GLOBAL DAT_004a1214 int

int * func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar1 = DAT_004a120c;
  func_0010C0B8(DAT_004a120c);
  if ((param_3 != (int *)0x0) || (param_3 = (int *)func_0010DB90(), param_3 != (int *)0x0)) {
    if (param_1 == 0) {
      param_1 = (**(code **)(*param_3 + 0x3c))(param_3,4);
    }
    uVar4 = param_1 + 3U & 0xfffffffc;
    if ((0x7b < uVar4) &&
       (puVar2 = (undefined4 *)(**(code **)(*param_3 + 0x18))(param_3,uVar4,param_4 << 2)  /* alignment = dir*4, EU 004A10D0 */,
       puVar2 != (undefined4 *)0x0)) {
      iVar6 = DAT_004a1214 + 8;
      iVar7 = DAT_004a1214 + 0x6c;
      if (param_4 == 1) {
        piVar3 = func_0010DF58(puVar2,param_2,(int)param_3,(int)puVar2,uVar4,1,param_5);
        piVar3[0x1d] = 0;
        *piVar3 = iVar6;
        piVar3[6] = iVar7;
        piVar3[0x1e] = 0;
      }
      else {
        puVar8 = (undefined4 *)((int)puVar2 + (uVar4 - 0x7c));
        if (puVar8 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = func_0010DF58(puVar8,param_2,(int)param_3,(int)puVar2,uVar4,(char)param_4,param_5
                                );
          piVar3[0x1d] = 0;
          *piVar3 = iVar6;
          piVar3[6] = iVar7;
          piVar3[0x1e] = 0;
        }
      }
      piVar5 = (int *)0x0;
      if ((piVar3[0x1c] & 1U) != 0) {
        func_0010C0B8((int)(piVar3 + 0x15));
        piVar5 = piVar3 + 0x15;
      }
      iVar6 = piVar3[7];
      if ((char)piVar3[0x14] == '\x01') {
        iVar6 = iVar6 + 0x7c;
      }
      piVar3[0x1d] = iVar6;
      if ((char)piVar3[0x14] == '\x01') {
        iVar7 = piVar3[8];
        iVar6 = piVar3[7];
      }
      else {
        iVar6 = piVar3[7];
        iVar7 = piVar3[8] + -0x7c;
      }
      piVar3[0x1e] = iVar7 + iVar6;
      if (piVar5 != (int *)0x0) {
        func_0010EEE0((int)piVar5);
      }
      func_0010EEE0(iVar1);
      return piVar3;
    }
  }
  func_0010EEE0(iVar1);
  return (int *)0x0;
}

