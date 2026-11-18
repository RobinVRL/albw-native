#include "ghidra_types.h"

extern int func_0034BB9C(int param_1);
extern float func_0034C0E4(int param_1,int param_2,int param_3,undefined4 param_4);
extern int func_00689B00(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_0046d120;
extern undefined4 DAT_0046d124;

// USA 0046D074 <- EU 0046D04C (Ghidra, non-matching)
// GLOBAL DAT_0046d120 int *
// GLOBAL DAT_0046d124 undefined4

void func_0046D074(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_40 ((undefined4 *)(albw_frame + 0x0))
  piVar3 = DAT_0046d120;
  cVar2 = *(char *)(param_1 + 0xcc);
  cVar1 = (char)*(undefined4 *)(*DAT_0046d120 + 0x2d0);
  *(char *)(param_1 + 0xcc) = cVar1;
  if ((int)cVar1 != (int)cVar2) {
    piVar6 = *(int **)(param_1 + 0xc0);
    if (piVar6 != (int *)0x0) {
      piVar4 = func_00689B00(auStack_40,DAT_0046d124,(int)cVar1,param_4);
      (**(code **)(*piVar4 + 8))(piVar4);
      (**(code **)(*piVar6 + 0x5c))(piVar6,piVar4[1],0);
    }
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  }
  iVar5 = func_0034BB9C(*(int *)(param_1 + 0xb4));
  if (iVar5 != 0) {
    iVar7 = *(int *)(param_1 + 0xc4);
    iVar5 = *(int *)(*piVar3 + 0x2cc);
    *(int *)(param_1 + 0xc4) = iVar5;
    if (iVar5 != iVar7) {
      func_0034C0E4(*(int *)(param_1 + 0xb4),iVar7,iVar5,0x3c);
      return;
    }
  }
  return;
}

