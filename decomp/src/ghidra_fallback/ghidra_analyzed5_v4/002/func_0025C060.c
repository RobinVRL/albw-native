#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004937B0(undefined4 *param_1);
extern undefined4 DAT_0025c200;
extern int DAT_0025c204;
extern undefined4 DAT_0025c208;
extern undefined4 DAT_0025c20c;
extern int DAT_0025c210;
extern int DAT_0025c214;
extern uint *DAT_0025c218;
extern undefined4 DAT_0025c21c;
extern undefined4 DAT_0025c220;
extern undefined4 DAT_0025c224;
extern undefined4 DAT_0025c228;

// USA 0025C060 <- EU 0025C088 (Ghidra, non-matching)
// GLOBAL DAT_0025c200 undefined4
// GLOBAL DAT_0025c204 int
// GLOBAL DAT_0025c208 undefined4
// GLOBAL DAT_0025c20c undefined4
// GLOBAL DAT_0025c210 int
// GLOBAL DAT_0025c214 int
// GLOBAL DAT_0025c218 uint *
// GLOBAL DAT_0025c21c undefined4
// GLOBAL DAT_0025c220 undefined4
// GLOBAL DAT_0025c224 undefined4
// GLOBAL DAT_0025c228 undefined4

undefined4 * func_0025C060(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint * *)(albw_frame + 0xc))
  puVar2 = func_0010DA7C(param_1,0,3);
  *puVar2 = DAT_0025c200;
  piVar3 = func_004937B0(puVar2 + 4);
  piVar3[0x12] = (int)(piVar3 + 0x14);
  piVar3[0x13] = 0x80;
  local_28 = DAT_0025c204;
  *(undefined1 *)(piVar3[0x12] + 0x7f) = 0;
  *(undefined1 *)piVar3[0x12] = 0;
  piVar3[0x11] = DAT_0025c210;
  *(undefined1 *)(piVar3 + 0x34) = 7;
  *(undefined1 *)((int)piVar3 + 0xd1) = 0xff;
  iVar4 = DAT_0025c214 + 0x18;
  piVar3[-4] = DAT_0025c214;
  local_24 = DAT_0025c218;
  *piVar3 = iVar4;
  piVar3[0x39] = 0;
  piVar3[0x3a] = 0;
  piVar3[0x3b] = (int)(piVar3 + 0x35);
  piVar3[0x3c] = 0;
  puVar2 = func_0010CE7C(piVar3 + 0x35);
  *puVar2 = DAT_0025c21c;
  puVar2[10] = 0x20;
  puVar2[9] = puVar2 + 0xb;
  *(undefined1 *)((int)puVar2 + 0x4b) = 0;
  uVar1 = DAT_0025c220;
  *(undefined1 *)puVar2[9] = 0;
  puVar2[8] = DAT_0025c224;
  *(undefined1 *)(puVar2 + 0x13) = 1;
  puVar6 = (uint *)puVar2[9];
  (**(code **)(local_28 + 8))(&local_28,*(code **)(local_28 + 8),uVar1);
  uVar5 = 0;
  do {
    if (*(char *)((int)local_24 + uVar5) == '\0') {
      if ((int)uVar5 < 0x40001) goto LAB_0025c1b8;
      break;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x40001);
  uVar5 = 0;
LAB_0025c1b8:
  if ((int)puVar2[10] <= (int)uVar5) {
    uVar5 = puVar2[10] - 1;
  }
  (**(code **)(local_28 + 8))(&local_28);
  func_0010E3C4(puVar6,local_24,uVar5);
  uVar1 = DAT_0025c228;
  *(undefined1 *)((int)puVar6 + uVar5) = 0;
  *puVar2 = uVar1;
  puVar2[0x14] = piVar3;
  return puVar2 + -0x39;
}

