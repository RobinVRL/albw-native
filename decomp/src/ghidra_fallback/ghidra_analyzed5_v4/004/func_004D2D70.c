#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00133D34(uint *param_1,int param_2,int param_3);
extern int func_001340A4(undefined4 param_1,int param_2,uint param_3);
extern int func_0014E138(int param_1,int param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00521004(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_004d2ee8;
extern uint *DAT_004d2eec;
extern undefined4 *DAT_004d2ef0;
extern undefined4 DAT_004d2ef4;

// USA 004D2D70 <- EU 004D2D48 (Ghidra, non-matching)
// GLOBAL DAT_004d2ee8 int *
// GLOBAL DAT_004d2eec uint *
// GLOBAL DAT_004d2ef0 undefined4 *
// GLOBAL DAT_004d2ef4 undefined4

undefined4 func_004D2D70(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    iVar5 = *(int *)(param_1 + 0x538);
    iVar2 = func_00521004(param_1);
    *(bool *)(iVar5 + 0x44) = iVar2 != 0;
    func_004CF478(*(int *)(param_1 + 0x530),1);
    func_004CEAF0(*(int *)(param_1 + 0x530));
  }
  bVar1 = func_00588BF0(param_1,1);
  if (bVar1) {
    *(undefined1 *)(*(int *)(param_1 + 0x538) + 0x44) = 0;
    func_004CF478(*(int *)(param_1 + 0x530),0);
    func_004CEAF0(*(int *)(param_1 + 0x530));
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  if ((*(short *)(param_1 + 0x36) != 0) && (*(short *)(param_1 + 0x38) != 0)) {
    iVar2 = *(int *)(param_1 + 0x538);
    uVar3 = func_00521004(param_1);
    *(char *)(iVar2 + 0x44) = (char)uVar3;
  }
  if ((*(char *)(param_1 + 0x548) != '\0') &&
     (puVar4 = (undefined4 *)
               func_0052FBDC(*DAT_004d2ee8 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0),
     puVar4 != (undefined4 *)0x0)) {
    if (((*DAT_004d2eec & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004d2eec), iVar2 != 0)) {
      *DAT_004d2ef0 = DAT_004d2ef4;
    }
    iVar2 = (**(code **)*puVar4)(puVar4,DAT_004d2ef0);
    if (iVar2 != 0) {
      if (*(short *)((int)puVar4 + 0x36) != 0) {
        bVar1 = func_00588BF0((int)puVar4,0);
        func_001340A4((uint *)(param_1 + 0x40c),*(int *)(param_1 + 0x530),(uint)bVar1);
      }
      *(undefined1 *)(param_1 + 0x548) = 0;
    }
  }
  func_00133D34((uint *)(param_1 + 0x40c),param_1,*(int *)(param_1 + 0x530));
  return func_0014E138(param_1,param_2);
}

