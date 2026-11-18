#include "ghidra_types.h"

extern int func_00691568(int *param_1,int *param_2);
extern undefined DAT_00582ee0;
extern int DAT_00582ee4;
extern undefined DAT_00582ee8;
extern undefined DAT_00582eec;

// USA 00582DD4 <- EU 00582DAC (Ghidra, non-matching)
// GLOBAL DAT_00582ee0 undefined
// GLOBAL DAT_00582ee4 int
// GLOBAL DAT_00582ee8 undefined
// GLOBAL DAT_00582eec undefined

undefined1 func_00582DD4(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  (**(code **)(*param_2 + 8))(param_2);
  iVar3 = DAT_00582ee4;
  iVar1 = 0;
  do {
    if (*(char *)(param_2[1] + iVar1) == '\0') {
      if (iVar1 < 0x40001) goto LAB_00582e04;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40001);
  iVar1 = 0;
LAB_00582e04:
  iVar4 = iVar1 + -3;
  local_34 = &DAT_00582ee0;
  local_38 = DAT_00582ee4;
  iVar2 = func_00691568(param_2,&local_38);
  uVar6 = iVar2 >= 0;
  iVar5 = iVar4;
  if (iVar2 < 0) {
    local_2c = &DAT_00582ee8;
    local_30 = iVar3;
    iVar2 = func_00691568(param_2,&local_30);
    if (iVar2 < 0) {
      local_24 = &DAT_00582eec;
      local_28 = iVar3;
      iVar3 = func_00691568(param_2,&local_28);
      iVar5 = iVar1;
      if (-1 < iVar3) {
        uVar6 = 3;
        iVar5 = iVar4;
      }
    }
    else {
      uVar6 = 2;
    }
  }
  if (iVar5 < param_2[2]) {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    *(undefined1 *)(param_2[1] + iVar5) = 0;
  }
  else {
    (**(code **)(*param_2 + 8))(param_2);
    iVar3 = 0;
    do {
      if (*(char *)(param_2[1] + iVar3) == '\0') {
        return uVar6;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
  }
  return uVar6;
}

