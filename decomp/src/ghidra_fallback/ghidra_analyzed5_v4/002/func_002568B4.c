#include "ghidra_types.h"

extern int func_00199F6C(int param_1);
extern int func_00199F78(int param_1);
extern int func_0019A23C(int param_1);
extern int func_004088D0(int param_1);
extern int func_005697B8(int param_1,uint param_2,undefined4 *param_3);
extern int func_00588174(int param_1,uint param_2);
extern int *DAT_00256a04;

// USA 002568B4 <- EU 002568DC (Ghidra, non-matching)
// GLOBAL DAT_00256a04 int *

undefined4 func_002568B4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(uint *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined1 *)(albw_frame + 0x28))
  #define uStack_27 (*(undefined1 *)(albw_frame + 0x29))
  #define uStack_24 (*(uint *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define cStack_1c (*(char *)(albw_frame + 0x34))
  #define uStack_1b (*(undefined1 *)(albw_frame + 0x35))
  piVar2 = *(int **)(param_1 + 0x18);
  func_004088D0((int)&uStack_50);
  puVar3 = (undefined4 *)func_00199F6C(param_3);
  uStack_50 = *puVar3;
  uStack_4c = puVar3[1];
  uStack_48 = puVar3[2];
  puVar3 = (undefined4 *)func_00199F78(param_3);
  uStack_44 = *puVar3;
  uStack_40 = puVar3[1];
  uStack_3c = puVar3[2];
  uStack_34 = func_0019A23C(param_3);
  piVar1 = DAT_00256a04;
  iVar4 = func_005697B8(*DAT_00256a04,param_2,&uStack_24);
  if (iVar4 != 0) {
    uStack_28 = 1;
    uStack_38 = uStack_24;
    uStack_2c = uStack_20;
    uStack_27 = uStack_1b;
    if ((cStack_1c != '\x01') && (cStack_1c == '\x02')) {
      uStack_28 = 2;
    }
  }
  uStack_30 = func_00588174(*piVar1,param_2);
  uVar5 = 0x40000000;
  if ((uStack_38 & 1) != 0) {
    uVar5 = 0x40000001;
  }
  if ((uStack_38 & 4) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((uStack_38 & 8) != 0) {
    uVar5 = uVar5 | 8;
  }
  return (**(code **)(*piVar2 + 0x10))
            (piVar2,*(undefined4 *)(piVar2[5] + 0xc),&uStack_50,param_2,uVar5,param_4);
}

