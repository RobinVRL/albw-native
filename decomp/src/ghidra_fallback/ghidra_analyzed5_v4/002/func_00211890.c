#include "ghidra_types.h"

extern int func_004A3700(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern undefined4 DAT_00211af0;
extern float DAT_00211af4;
extern int DAT_00211af8;
extern undefined4 DAT_00211afc;

// USA 00211890 <- EU 00211890 (Ghidra, non-matching)
// GLOBAL DAT_00211af0 undefined4
// GLOBAL DAT_00211af4 float
// GLOBAL DAT_00211af8 int
// GLOBAL DAT_00211afc undefined4

uint func_00211890(int param_1,uint param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  ushort uVar10;
  
  uVar4 = DAT_00211afc;
  if (param_2 == 0x14) {
    return 0x14;
  }
  cVar3 = *(char *)(param_1 + 0x8c0);
  uVar10 = (ushort)DAT_00211af0;
  if (cVar3 == '\f') {
    cVar1 = *(char *)(*(int *)(param_1 + 0x510) + 4);
    if ((cVar1 == '\a' || cVar1 == '\x06') || (cVar1 == '\x05' || cVar1 == '\n')) {
      if (*(char *)(param_3 + 0x24) == '\b') goto LAB_00211988;
      if (*(char *)(param_3 + 0x27) != '\0') goto LAB_00211948;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x510) + 5);
    if (((cVar2 == '\a' || cVar2 == '\x06') || (cVar2 == '\x05' || cVar2 == '\n')) &&
       (cVar1 == '\x02')) {
      if (*(char *)(param_3 + 0x24) == '\b') {
LAB_00211988:
        func_004FC78C(param_1,0);
        return 0x14;
      }
      if (*(char *)(param_3 + 0x27) != '\0') {
LAB_00211948:
        fVar9 = DAT_00211af4;
        func_004FC78C(param_1,0);
        func_004FBA18(param_1,9,0xff,0,-1,0,uVar10,fVar9,fVar9);
        return 0x10;
      }
    }
  }
  cVar1 = *(char *)(param_3 + 0x24);
  if ((cVar3 == '\n' || cVar3 == '\t') || (cVar3 == '\a' || cVar3 == '\b')) {
    if (*(char *)(param_3 + 0x27) != '\0') {
      fVar9 = DAT_00211af4;
      func_004FC78C(param_1,0);
      if (*(char *)(param_3 + 0x24) == '\b') {
        return 0x14;
      }
      func_004FBA18(param_1,9,0xff,0,-1,0,uVar10,fVar9,fVar9);
      return param_2;
    }
  }
  else {
    if (cVar1 == '\b' || cVar1 == '\f') {
      *(undefined4 *)(param_1 + 0x674) = 0x32;
      *(undefined4 *)(param_1 + 0x678) = uVar4;
      *(undefined4 *)(param_1 + 0x670) = 0;
      return 0xe;
    }
    if ((param_2 == 0xb || param_2 == 10) || cVar1 == '\x10') {
      return 0xe;
    }
  }
  uVar5 = param_2 & 0xff;
  bVar8 = 0x1d < uVar5;
  bVar7 = uVar5 != 0x1e;
  if (bVar7) {
    uVar5 = uVar5 - 0xe;
    bVar8 = 2 < uVar5;
  }
  if ((!bVar8 || (!bVar7 || uVar5 == 3)) && (0 < *(short *)(DAT_00211af8 + param_1))) {
    return 0xe;
  }
  if (param_2 == 3) {
    param_2 = 0;
  }
  else if (param_2 == 0x12) {
    iVar6 = *(int *)(param_1 + 0x98c);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == *(int *)(param_1 + 0x990))) {
      *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar6);
    }
    return 0x13;
  }
  return param_2;
}

