#include "ghidra_types.h"

extern int func_0048AB38(void);
extern int func_0048F4A4(int param_1,uint param_2,undefined1 param_3,undefined1 param_4);
extern int func_004945FC(int param_1,uint param_2,uint *param_3,int param_4);
extern int func_0049481C(int param_1);
extern ulonglong func_004981A4(int param_1,int param_2,int param_3);
extern undefined4 DAT_004a0bd4;
extern int DAT_004a0bd8;
extern int *DAT_004a0bdc;
extern uint *DAT_004a0be0;

// USA 004A0AFC <- EU 004A0AD4 (Ghidra, non-matching)
// GLOBAL DAT_004a0bd4 undefined4
// GLOBAL DAT_004a0bd8 int
// GLOBAL DAT_004a0bdc int *
// GLOBAL DAT_004a0be0 uint *

undefined4 * func_004A0AFC(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  bool bVar6;
  
  *param_1 = DAT_004a0bd4;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[1] = param_1 + 1;
  param_1[4] = 0xffffffff;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[5] = param_1 + 5;
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  puVar3 = func_0049481C((int)(param_1 + 0xc));
  iVar2 = DAT_004a0bd8;
  *(undefined1 *)(puVar3 + 100) = 0;
  puVar3[0x65] = iVar2;
  puVar3[-8] = 0x10;
  puVar3[-4] = 0x18;
  iVar4 = *DAT_004a0bdc;
  bVar6 = iVar4 != 0;
  iVar5 = 0;
  iVar1 = extraout_r1;
  if (bVar6) {
    iVar5 = *(int *)(iVar4 + 0xd0);
    iVar1 = iVar5;
  }
  if ((bVar6 && iVar1 != 0) && -1 < iVar5) {
    if (bVar6 && iVar1 != 0) {
      iVar5 = **(int **)(iVar4 + 0xd8);
    }
    else {
      iVar5 = 0;
    }
    func_004981A4((int)puVar3,iVar5,1);
  }
  func_004945FC((int)puVar3,6,DAT_004a0be0,0);
  func_0048F4A4((int)(puVar3 + 4),3,0,0);
  func_0048F4A4((int)(puVar3 + 4),0x3c,0x1e,5);
  if ((*(int *)(iVar2 + 0x118) == 0) && (iVar5 = func_0048AB38(), iVar5 != 0)) {
    *(int *)(iVar2 + 0x118) = iVar5;
  }
  return puVar3 + -0xc;
}

