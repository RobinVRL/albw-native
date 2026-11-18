#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010A7BC(int *param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DCB24(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_003DD4A4(int *param_1);
extern int func_003DD5A0(void);
extern int func_003DE12C(void);
extern int DAT_003dd2f4;

// USA 003DD194 <- EU 003DD174 (Ghidra, non-matching)
// GLOBAL DAT_003dd2f4 int

void func_003DD194(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define auStack_24 ((undefined4 *)(albw_frame + 0x1c))
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  do {
    uVar4 = 0;
    iVar5 = 0;
    local_30 = 0;
    iStack_2c = 0;
    if (*(char *)(param_1 + 2) == '\0') {
      func_003DD5A0();
    }
    else {
      uVar4 = func_003DD4A4((int *)&local_30);
      software_interrupt(0x28);
      iVar5 = extraout_r1;
    }
    iVar2 = param_1[10];
    cVar1 = *(char *)((int)param_1 + 0xe);
    uVar3 = 0;
    if ((int)cVar1 != 0) {
      func_003DCB24(DAT_003dd2f4,0,&local_38,&uStack_28);
      func_003DCB24(DAT_003dd2f4,1,&iStack_34,auStack_24);
      uVar3 = 0;
      if (local_38 != 0 || iStack_34 != 0) {
        uVar3 = 1;
      }
    }
    uVar3 = (int)cVar1 & (uVar3 | iVar2 != 0);
    if (uVar3 != 0) {
      coproc_moveto_Data_Synchronization(0);
      func_001080D4(param_1 + 0x10);
    }
    if ((*(char *)(param_1 + 0xc) == '\0') && ((code *)param_1[10] != (code *)0x0)) {
      (*(code *)param_1[10])(param_1[0xb]);
    }
    if (param_1[8] != 0) {
      func_0010C0C0(param_1 + 0xd);
      (*(code *)param_1[8])(param_1[9]);
      func_0010C160(param_1 + 0xd);
    }
    if (uVar3 != 0) {
      func_0010A7BC(param_1 + 0x12);
    }
    func_0010C0C0(param_1 + 0xd);
    func_003DE12C();
    func_0010C160(param_1 + 0xd);
    uVar3 = (uint)*(byte *)(param_1 + 2);
    if (uVar3 != 0) {
      software_interrupt(0x28);
      param_1[1] = iStack_2c + (extraout_r1_00 - (iVar5 + (uint)(uVar3 < uVar4))) +
                   (uint)CARRY4(local_30,uVar3 - uVar4);
      *param_1 = local_30 + (uVar3 - uVar4);
    }
  } while (*(char *)((int)param_1 + 0xd) != '\0');
  return;
}

