#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0026F4EC(int param_1,int param_2,undefined4 *param_3);
extern int func_004C8AFC(int param_1,int *param_2);
extern int DAT_0014eb14;
extern int DAT_0014eb18;
extern int *DAT_0014eb1c;
extern int DAT_0014eb20;
extern int *DAT_0014eb24;
extern undefined4 *DAT_0014eb28;
extern undefined4 DAT_0014eb2c;
extern undefined4 DAT_0014eb30;
extern int *DAT_0014eb34;

// USA 0014E9A0 <- EU 0014E9A0 (Ghidra, non-matching)
// GLOBAL DAT_0014eb14 int
// GLOBAL DAT_0014eb18 int
// GLOBAL DAT_0014eb1c int *
// GLOBAL DAT_0014eb20 int
// GLOBAL DAT_0014eb24 int *
// GLOBAL DAT_0014eb28 undefined4 *
// GLOBAL DAT_0014eb2c undefined4
// GLOBAL DAT_0014eb30 undefined4
// GLOBAL DAT_0014eb34 int *

undefined4 func_0014E9A0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(uint *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(int *)(albw_frame + 0x24))
  if (*(char *)((int)param_1 + 0x395) != '\0') {
    return 0;
  }
  *(undefined1 *)((int)param_1 + 0x395) = 0x16;
  uVar1 = (param_3 & 0xc000000) >> 0x1a;
  uVar2 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5;
  bVar3 = false;
  iVar5 = 0;
  switch(uVar2) {
  case 3:
    iVar5 = DAT_0014eb14 + -0x1c;
    break;
  case 5:
  case 7:
  case 9:
    bVar3 = true;
    iVar5 = DAT_0014eb14;
  }
  if (iVar5 != 0) {
    local_20 = DAT_0014eb18;
    local_1c = iVar5;
    func_0014DBF4(param_1,&local_20,(undefined4 *)(param_2 + 0x10),0);
  }
  if (bVar3) {
    if (uVar1 == 0) {
      iVar6 = 2;
      iVar5 = *(int *)(*DAT_0014eb1c + 0xf9c);
    }
    else {
      if (uVar1 != 1) goto LAB_0014ea9c;
      iVar6 = 3;
      iVar5 = *(int *)(*DAT_0014eb1c + 0xf9c);
    }
    func_0026F4EC(iVar5,iVar6,(undefined4 *)(param_2 + 0x10));
  }
LAB_0014ea9c:
  if ((*(uint *)(DAT_0014eb20 + 8) & 1) == 0) {
    func_00100174(DAT_0014eb24);
  }
  puVar4 = DAT_0014eb28;
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  uVar8 = *(undefined4 *)(param_2 + 0x18);
  *DAT_0014eb28 = *(undefined4 *)(param_2 + 0x10);
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  local_34 = DAT_0014eb2c;
  local_24 = 0;
  local_38 = DAT_0014eb18;
  local_30 = DAT_0014eb28;
  uStack_2c = DAT_0014eb30;
  uStack_28 = uVar2;
  return func_004C8AFC(*DAT_0014eb34,&local_38);
}

