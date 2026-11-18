#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001B53B8(int param_1,undefined4 *param_2);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00181634;
extern uint *DAT_00181638;
extern undefined4 *DAT_0018163c;
extern undefined4 DAT_00181640;
extern int DAT_00181644;

// USA 00181538 <- EU 00181538 (Ghidra, non-matching)
// GLOBAL DAT_00181634 int *
// GLOBAL DAT_00181638 uint *
// GLOBAL DAT_0018163c undefined4 *
// GLOBAL DAT_00181640 undefined4
// GLOBAL DAT_00181644 int

bool func_00181538(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define afStack_1c ((float *)(albw_frame + 0x4))
  if (*(uint *)(param_1 + 0xba0) != 0) {
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_00181634 + 0x3dbbc,*(uint *)(param_1 + 0xba0));
    if (((*DAT_00181638 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00181638), iVar2 != 0)) {
      *DAT_0018163c = DAT_00181640;
    }
    if ((puVar1 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0018163c), iVar2 == 0)) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 == (undefined4 *)0x0) {
      return false;
    }
    local_20 = *(undefined4 *)(param_1 + 0x2cc);
    iVar2 = func_001B53B8((int)puVar1,&local_20);
    if (iVar2 == 0) {
      return false;
    }
    func_00230610(*(int *)(param_1 + 0xbe4),*(undefined4 *)(param_1 + 0xba0));
  }
  iVar2 = DAT_00181644;
  func_00115C54(afStack_1c,(float *)(param_1 + 0x3d0),(float *)(DAT_00181644 + 0x1c));
  iVar2 = (**(code **)(**(int **)(param_1 + 0xbe4) + 0x34))
                    (*(int **)(param_1 + 0xbe4),afStack_1c,iVar2,0);
  return iVar2 != 0;
}

