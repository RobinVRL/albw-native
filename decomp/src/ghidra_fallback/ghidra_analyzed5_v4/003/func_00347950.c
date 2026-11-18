#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_00546488(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern undefined4 DAT_00347afc;
extern undefined4 DAT_00347b00;
extern undefined4 DAT_00347b04;
extern undefined4 DAT_00347b08;
extern undefined4 DAT_00347b0c;
extern int *DAT_00347b10;
extern undefined DAT_00347b14;
extern int DAT_00347b18;

// USA 00347950 <- EU 0034792C (Ghidra, non-matching)
// GLOBAL DAT_00347afc undefined4
// GLOBAL DAT_00347b00 undefined4
// GLOBAL DAT_00347b04 undefined4
// GLOBAL DAT_00347b08 undefined4
// GLOBAL DAT_00347b0c undefined4
// GLOBAL DAT_00347b10 int *
// GLOBAL DAT_00347b14 undefined
// GLOBAL DAT_00347b18 int

int func_00347950(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c ((uint *)(albw_frame + 0x4))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar6 = DAT_00347b00;
  *puVar2 = DAT_00347afc;
  uVar7 = DAT_00347b04;
  puVar2[0x1c] = *(undefined4 *)(puVar2[10] + 0x648);
  puVar2[0x1e] = uVar6;
  puVar2[0x1f] = uVar6;
  puVar2[0x20] = uVar6;
  puVar2[0x21] = uVar6;
  puVar2[0x22] = uVar6;
  puVar2[0x23] = uVar6;
  puVar2[0x24] = uVar6;
  puVar2[0x25] = uVar6;
  puVar2[0x26] = uVar6;
  local_2c[1] = 0;
  *(undefined2 *)(puVar2 + 0x27) = 0;
  puVar2[0x28] = 0;
  *(undefined1 *)(puVar2 + 0x29) = 0;
  puVar2[0x2a] = uVar7;
  puVar2[0x2b] = uVar7;
  puVar2[0x2c] = uVar7;
  uVar7 = DAT_00347b08;
  puVar2[0x2d] = DAT_00347b08;
  puVar2[0x2e] = uVar7;
  puVar2[0x2f] = uVar7;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  *(undefined2 *)(puVar2 + 0x32) = 6;
  puVar2[0x1d] = DAT_00347b0c;
  puVar2[0x33] = uVar6;
  iVar3 = func_004EE484(puVar2 + 0x34);
  *(undefined4 *)(iVar3 + 100) = uVar6;
  *(undefined4 *)(iVar3 + 0x68) = uVar6;
  *(undefined1 *)(iVar3 + 0x6c) = 0;
  *(undefined1 *)(iVar3 + 0x6d) = 0;
  *(undefined1 *)(iVar3 + 0x6e) = 0;
  *(undefined1 *)(iVar3 + 0x6f) = 0;
  *(undefined1 *)(iVar3 + 0x70) = 1;
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = uVar6;
  *(undefined4 *)(iVar3 + 0x80) = uVar6;
  *(undefined4 *)(iVar3 + 0x84) = uVar6;
  puVar2 = (undefined4 *)func_00546488(*(int *)(iVar3 + -0x60));
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  *(undefined4 *)(iVar3 + 0x88) = uVar6;
  *(undefined4 *)(iVar3 + 0x8c) = uVar7;
  *(undefined4 *)(iVar3 + 0x90) = uVar8;
  *(undefined4 *)(iVar3 + 0x94) = uVar6;
  *(undefined4 *)(iVar3 + 0x98) = uVar7;
  *(undefined4 *)(iVar3 + 0x9c) = uVar8;
  *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(*(int *)(iVar3 + -0xa0) + 4);
  *(uint *)(iVar3 + -0x30) = *(uint *)(iVar3 + -0x30) | 8;
  *(int *)(iVar3 + 0x10) = iVar3 + -0x5c;
  local_2c[0] = *(uint *)(*(int *)(iVar3 + -0xa8) + 0x2cc);
  func_004EDEA0(iVar3,local_2c);
  piVar1 = DAT_00347b10;
  uVar5 = 8;
  *(undefined1 *)(iVar3 + 0x21) = 8;
  *(undefined1 *)(iVar3 + 0x22) = 0;
  *(undefined1 *)(iVar3 + 0x20) = 0xc;
  if (*(char *)(*piVar1 + 0x18) == '\a' || *(char *)(*piVar1 + 0x18) == '%') {
    if (*(int *)(*(int *)(iVar3 + -0xa8) + 0x44c) != 3) {
      uVar5 = 4;
    }
  }
  else {
    *(undefined2 *)(iVar3 + 0x30) = 0xc;
    if (*(int *)(*(int *)(iVar3 + -0xa8) + 0x44c) != 3) goto LAB_00347ac8;
    uVar5 = 0x18;
  }
  *(undefined2 *)(iVar3 + 0x30) = uVar5;
LAB_00347ac8:
  local_1c = &DAT_00347b14;
  local_20 = DAT_00347b18;
  uVar4 = func_00564A78(*(int *)(*(int *)(iVar3 + -0x60) + 4),&local_20);
  *(uint *)(iVar3 + 0xa0) = uVar4;
  return iVar3 + -0xd0;
}

