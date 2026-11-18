#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined *DAT_0019d390;
extern undefined DAT_0019d394;
extern int DAT_0019d398;
extern undefined4 DAT_0019d39c;
extern undefined4 DAT_0019d3a0;

// USA 0019D280 <- EU 0019D280 (Ghidra, non-matching)
// GLOBAL DAT_0019d390 undefined *
// GLOBAL DAT_0019d394 undefined
// GLOBAL DAT_0019d398 int
// GLOBAL DAT_0019d39c undefined4
// GLOBAL DAT_0019d3a0 undefined4

int func_0019D280(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(uint * *)(albw_frame + 0xc))
  #define auStack_4c ((undefined1 *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(undefined * *)(albw_frame + 0x3c))
  iVar1 = func_00100118(param_1,DAT_0019d390,0x2c,0x20);
  *(undefined4 *)(iVar1 + 0x580) = 0;
  *(undefined4 *)(iVar1 + 0x584) = 0;
  local_28 = DAT_0019d398;
  local_24 = &DAT_0019d394;
  puVar2 = func_00689A2C(&local_58,auStack_4c,0x1e);
  *puVar2 = DAT_0019d39c;
  func_00689894((int)puVar2,&local_28,0xffffffff);
  iVar4 = 0;
  *puVar2 = DAT_0019d3a0;
  do {
    iVar6 = iVar1 + iVar4 * 0x2c;
    puVar5 = *(uint **)(iVar6 + 4);
    (**(code **)(local_58 + 8))(&local_58);
    uVar3 = 0;
    do {
      if (*(char *)((int)local_54 + uVar3) == '\0') {
        if ((int)uVar3 < 0x40001) goto LAB_0019d348;
        break;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x40001);
    uVar3 = 0;
LAB_0019d348:
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 <= (int)uVar3) {
      uVar3 = iVar6 - 1;
    }
    (**(code **)(local_58 + 8))(&local_58);
    func_0010E3C4(puVar5,local_54,uVar3);
    iVar4 = iVar4 + 1;
    *(undefined1 *)((int)puVar5 + uVar3) = 0;
    if (0x1f < iVar4) {
      return iVar1;
    }
  } while( true );
}

