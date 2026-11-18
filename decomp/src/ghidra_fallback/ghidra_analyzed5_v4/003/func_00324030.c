#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_00111A64(uint *param_1);

// USA 00324030 <- EU 0032400C (Ghidra, non-matching)

undefined8 func_00324030(char *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  longlong lVar11;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((int *)(albw_frame + 0x0))
  #define local_40 ((char *)(albw_frame + 0x40))
  #define pcStack_30 (*(char * *)(albw_frame + 0x50))
  #define local_2c (*(uint *)(albw_frame + 0x54))
  #define local_28 (*(uint * *)(albw_frame + 0x58))
  local_28 = param_3;
  local_2c = param_2;
  pcStack_30 = param_1;
  uVar8 = 0;
  do {
    uVar6 = (int)(char)uVar8 - 1;
    iVar7 = 0;
    uVar1 = local_2c;
    while (local_2c = uVar1, (int)uVar6 < (char)uVar8 + 1) {
      lVar11 = func_001104E4(uVar6,8);
      iVar5 = (int)lVar11;
      iVar3 = iVar5;
      if (0 < iVar5) {
        iVar3 = uVar6 + iVar5 * -8;
      }
      if ((iVar5 < 0) || ((cVar2 = (char)iVar3, iVar5 < 1 && (cVar2 = (char)uVar6, (int)uVar6 < 0)))
         ) {
        cVar2 = ((char)iVar3 + '\x01') * '\b' + (char)uVar6;
      }
      uVar6 = uVar6 + 1;
      pcVar4 = param_1;
      if ((uint)(int)cVar2 < 8) {
        pcVar4 = param_1 + cVar2 * 0x10;
      }
      uVar1 = local_2c;
      if (*pcVar4 != '\0') {
        iVar7 = iVar7 + 1;
      }
    }
    if (local_80 + uVar8 != (int *)0x0) {
      local_80[uVar8] = iVar7;
    }
    if ((uVar8 & 1) == 0) {
      local_80[uVar8] = 1;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 8);
  if (uVar1 < 8) {
    local_2c = uVar1 + 4;
  }
  iVar7 = local_80[uVar1];
  if (uVar1 < 8) {
    local_2c = local_2c & 7;
  }
  else {
    local_2c = 0xffffffff;
  }
  bVar10 = iVar7 == 1;
  if (bVar10) {
    iVar7 = local_80[local_2c];
  }
  if (!bVar10 || iVar7 != 0) {
    if (local_80[0] == 0) {
      local_40[0] = '\0';
    }
    uVar8 = (uint)(local_80[0] == 0);
    cVar2 = '\x01';
    iVar3 = 3;
    iVar7 = local_80[1];
    piVar9 = local_80;
    local_2c = uVar1;
    do {
      iVar5 = piVar9[2];
      if (iVar7 == 0) {
        local_40[uVar8] = cVar2;
        uVar8 = uVar8 + 1;
      }
      iVar7 = piVar9[3];
      if (iVar5 == 0) {
        local_40[uVar8] = cVar2 + '\x01';
        uVar8 = uVar8 + 1;
      }
      iVar3 = iVar3 + -1;
      cVar2 = cVar2 + '\x02';
      piVar9 = piVar9 + 2;
    } while (iVar3 != 0);
    if (local_80[7] == 0) {
      local_40[uVar8] = '\a';
      uVar8 = uVar8 + 1;
    }
    if (uVar8 != 0) {
      uVar6 = func_00111A64(local_28);
      iVar7 = (int)((ulonglong)uVar8 * (ulonglong)uVar6);
      local_2c = (uint)local_40[(int)((ulonglong)uVar8 * (ulonglong)uVar6 >> 0x20)];
    }
  }
  return CONCAT44(iVar7,local_2c);
}

