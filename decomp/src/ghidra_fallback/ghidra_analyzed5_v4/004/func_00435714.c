#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00435B54(undefined4 *param_1,undefined4 *param_2);
extern int DAT_004358d8;
extern int DAT_004358dc;
extern undefined4 *DAT_004358e0;
extern int DAT_004358e4;
extern int DAT_004358e8;
extern int DAT_004358ec;
extern int DAT_004358f0;
extern int DAT_004358f4;
extern undefined4 *DAT_004358f8;
extern int DAT_004358fc;

// USA 00435714 <- EU 004356F4 (Ghidra, non-matching)
// GLOBAL DAT_004358d8 int
// GLOBAL DAT_004358dc int
// GLOBAL DAT_004358e0 undefined4 *
// GLOBAL DAT_004358e4 int
// GLOBAL DAT_004358e8 int
// GLOBAL DAT_004358ec int
// GLOBAL DAT_004358f0 int
// GLOBAL DAT_004358f4 int
// GLOBAL DAT_004358f8 undefined4 *
// GLOBAL DAT_004358fc int

int * func_00435714(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c ((undefined4 *)(albw_frame + 0x4))
  switch(*param_1) {
  default:
    return (int *)0x0;
  case 1:
    puVar2 = (undefined4 *)func_0010BAB4(0x58);
    piVar4 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      local_10 = 1;
      piVar4 = (int *)func_00435B54(puVar2,&local_10);
      *piVar4 = DAT_004358d8;
    }
    break;
  case 5:
    puVar2 = (undefined4 *)func_0010BAB4(0x68);
    iVar5 = DAT_004358dc;
    piVar4 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar6 = DAT_004358e0[1];
      uVar7 = DAT_004358e0[2];
      puVar2[0x16] = *DAT_004358e0;
      puVar2[0x17] = uVar6;
      puVar2[0x18] = uVar7;
      puVar2[0x19] = iVar5;
      local_10 = 5;
      piVar4 = (int *)func_00435B54(puVar2,&local_10);
      *piVar4 = DAT_004358e4;
      return piVar4;
    }
    break;
  case 6:
    puVar2 = (undefined4 *)func_0010BAB4(0x5c);
    if (puVar2 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    local_10 = 6;
    piVar4 = (int *)func_00435B54(puVar2,&local_10);
    iVar5 = DAT_004358e8;
    piVar4[0x16] = DAT_004358dc;
    goto LAB_00435860;
  case 7:
    puVar2 = (undefined4 *)func_0010BAB4(0x6c);
    piVar4 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      local_10 = 7;
      piVar4 = (int *)func_00435B54(puVar2,&local_10);
      iVar5 = DAT_004358f0;
      iVar1 = DAT_004358ec;
      piVar4[0x19] = DAT_004358ec;
      piVar4[0x1a] = iVar1;
      goto LAB_00435860;
    }
    break;
  case 8:
    puVar2 = (undefined4 *)func_0010BAB4(0x88);
    if (puVar2 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    local_10 = 8;
    local_c[0] = 8;
    piVar4 = (int *)func_00435B54(puVar2,local_c);
    iVar5 = DAT_004358f4;
    goto LAB_004358c4;
  case 9:
    puVar3 = (undefined4 *)func_0010BAB4(0x74);
    puVar2 = DAT_004358e0;
    if (puVar3 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    uVar6 = DAT_004358f8[1];
    uVar7 = DAT_004358f8[2];
    puVar3[0x16] = *DAT_004358f8;
    puVar3[0x17] = uVar6;
    puVar3[0x18] = uVar7;
    iVar5 = DAT_004358dc;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    puVar3[0x19] = *puVar2;
    puVar3[0x1a] = uVar6;
    puVar3[0x1b] = uVar7;
    puVar3[0x1c] = iVar5;
    local_10 = 9;
    piVar4 = (int *)func_00435B54(puVar3,&local_10);
    iVar5 = DAT_004358fc;
LAB_004358c4:
    iVar5 = iVar5 + 8;
LAB_00435860:
    *piVar4 = iVar5;
    return piVar4;
  }
  return piVar4;
}

