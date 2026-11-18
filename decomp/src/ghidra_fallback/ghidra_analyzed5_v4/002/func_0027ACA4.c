#include "ghidra_types.h"

extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern undefined DAT_0027ae3c;
extern uint *DAT_0027ae40;

// USA 0027ACA4 <- EU 0027ACCC (Ghidra, non-matching)
// GLOBAL DAT_0027ae3c undefined
// GLOBAL DAT_0027ae40 uint *

undefined4 func_0027ACA4(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_60 ((undefined2 *)(albw_frame + 0x10))
  #define local_5c (*(undefined2 *)(albw_frame + 0x14))
  #define local_58 (*(undefined2 *)(albw_frame + 0x18))
  #define local_54 (*(undefined2 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x20))
  #define local_4c (*(undefined1 *)(albw_frame + 0x24))
  #define local_48 (*(undefined2 *)(albw_frame + 0x28))
  #define local_44 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x30))
  #define local_3c (*(undefined1 *)(albw_frame + 0x34))
  #define local_38 (*(undefined2 *)(albw_frame + 0x38))
  #define local_34 (*(undefined2 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined2 *)(albw_frame + 0x40))
  #define aiStack_28 ((int *)(albw_frame + 0x48))
  #define aiStack_20 ((int *)(albw_frame + 0x50))
  func_003C7A70(aiStack_28);
  bVar1 = func_00560EF8(param_2,aiStack_28,(uint *)&DAT_0027ae3c);
  uVar3 = 0;
  if (bVar1) {
    iVar4 = 0;
    do {
      iVar2 = func_00560FA0((int)aiStack_28,(uint *)(local_60 + iVar4 * 2),iVar4);
      if (iVar2 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xd);
    iVar4 = func_00561184((int)aiStack_28,(uint *)(param_1 + 0x44),0xd);
    uVar3 = 0;
    if (iVar4 != 0) {
      *(undefined2 *)(param_1 + 0x28) = local_60[0];
      *(undefined2 *)(param_1 + 0x2a) = local_5c;
      *(undefined2 *)(param_1 + 0x2c) = local_58;
      *(undefined2 *)(param_1 + 0x2e) = local_54;
      *(undefined1 *)(param_1 + 0x30) = local_50;
      *(undefined2 *)(param_1 + 0x32) = local_48;
      *(undefined1 *)(param_1 + 0x3c) = local_40;
      *(undefined1 *)(param_1 + 0x31) = local_4c;
      *(undefined2 *)(param_1 + 0x34) = local_44;
      *(undefined1 *)(param_1 + 0x3d) = local_3c;
      *(undefined2 *)(param_1 + 0x3e) = local_38;
      *(undefined2 *)(param_1 + 0x40) = local_34;
      *(undefined2 *)(param_1 + 0x42) = local_30;
      func_003C7A70(aiStack_20);
      bVar1 = func_00560EF8(param_2,aiStack_20,DAT_0027ae40);
      if (!bVar1) {
        return 0;
      }
      iVar4 = 0;
      do {
        iVar2 = func_00560FA0((int)aiStack_20,local_70 + iVar4,iVar4);
        if (iVar2 == 0) {
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      *(char *)(param_1 + 0x36) = (char)local_70[0];
      *(short *)(param_1 + 0x38) = (short)local_70[2];
      *(char *)(param_1 + 0x37) = (char)local_70[1];
      *(short *)(param_1 + 0x3a) = (short)local_70[3];
      uVar3 = 1;
    }
  }
  return uVar3;
}

