#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00122588(int *param_1,int param_2,undefined4 param_3);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b0ecc;
extern undefined4 DAT_004b0ed0;
extern undefined4 *DAT_004b0ed4;
extern undefined4 DAT_004b0ed8;

// USA 004B0DB4 <- EU 004B0D8C (Ghidra, non-matching)
// GLOBAL DAT_004b0ecc undefined4
// GLOBAL DAT_004b0ed0 undefined4
// GLOBAL DAT_004b0ed4 undefined4 *
// GLOBAL DAT_004b0ed8 undefined4

undefined4 func_004B0DB4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(uint * *)(albw_frame + 0xc))
  #define auStack_3c ((undefined1 *)(albw_frame + 0x14))
  puVar1 = func_00689A2C(&local_48,auStack_3c,0x1e);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b0ed0;
  func_00688CA0(param_3,&local_48);
  iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0xc4);
  (**(code **)(local_48 + 8))(&local_48);
  iVar5 = *(int *)(iVar5 + 0x30);
  uVar2 = func_00103CBC((char *)local_44);
  uVar3 = func_00564ABC((short *)(iVar5 + 0x94),local_44,uVar2);
  puVar1 = DAT_004b0ed4;
  iVar5 = (int)(short)uVar3;
  if (-1 < iVar5) {
    if (*(int *)(param_2 + 0x19c34) == 0) {
      return func_00122588((int *)(param_1 + 0x216c),iVar5,uVar2);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = func_0010983C(*DAT_004b0ed4,*(int *)(param_1 + 0x20));
    }
    puVar4 = (undefined4 *)func_0010BAB4(0x10);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = *(int *)(param_2 + 0x19c34);
      puVar4[2] = 4;
      *puVar4 = DAT_004b0ed8;
      puVar4[3] = iVar5;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar4);
    if (iVar6 != 1) {
      func_0010983C(*puVar1,iVar6);
    }
  }
  return 0;
}

