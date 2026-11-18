#include "ghidra_types.h"

extern int func_00100584(undefined8 *param_1,int param_2,int param_3);
extern undefined8 func_001138B4(uint param_1,uint param_2);
extern int func_00114600(void);
extern undefined8 func_00300180(uint param_1,uint param_2);
extern undefined8 func_00300720(uint *param_1,uint *param_2,undefined4 param_3);
extern undefined8 func_00300750(uint *param_1,uint *param_2,undefined4 param_3);
extern int DAT_00300c3c;
extern int DAT_00300c40;
extern int DAT_00300c44;

// GLOBAL DAT_00300c3c int
// GLOBAL DAT_00300c40 int
// GLOBAL DAT_00300c44 int
// PARAM param_5 Stack[0x0]:4 uint
// USA 0030085A <- EU 00300836 (Ghidra, function missing from the decomp table)

void func_0030085A(uint *param_1,char *param_2,uint *param_3,uint param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined8 *)(albw_frame + 0x0))
  #define local_58 (*(uint *)(albw_frame + 0x8))
  #define local_54 (*(uint *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(uint *)(albw_frame + 0x18))
  #define local_44 (*(uint *)(albw_frame + 0x1c))
  #define local_40 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(uint *)(albw_frame + 0x24))
  #define local_38 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(uint *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_24 (*(uint * *)(albw_frame + 0x3c))
  #define pcStack_20 (*(char * *)(albw_frame + 0x40))
  #define puStack_1c (*(uint * *)(albw_frame + 0x44))
  #define uStack_18 (*(uint *)(albw_frame + 0x48))
  local_40 = *param_3;
  local_3c = param_3[1];
  uVar9 = local_3c << 1;
  uVar8 = uVar9 >> 0x15;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  local_24 = param_1;
  pcStack_20 = param_2;
  puStack_1c = param_3;
  uStack_18 = param_4;
  local_38 = func_00114600();
  local_38 = local_38 & 0xc00000;
  if ((int)local_3c < 0) {
    local_38 = local_38 * 5 >> 1 & 0xc00000;
  }
  local_38 = local_38 >> 0x16;
  if (1 < local_38) {
    local_38 = 0xffffffff;
  }
  if (uVar9 == 0 && local_40 == 0) {
    if (param_5 == 1) {
      uVar8 = 0;
      uVar9 = ~param_4;
    }
    else {
      for (iVar6 = 0; iVar6 < (int)param_4; iVar6 = iVar6 + 1) {
        param_2[iVar6] = '0';
      }
      uVar9 = 0;
      uVar8 = param_4;
    }
    param_2[uVar8] = '\0';
    local_24[2] = param_5;
    *local_24 = uVar9;
    local_24[1] = uVar8;
    return;
  }
  uVar8 = (int)(DAT_00300c40 * (uVar8 + DAT_00300c3c)) >> 0x10;
LAB_00300886:
  do {
    if (param_5 == 0) {
      iVar6 = (uVar8 - param_4) + 1;
    }
    else {
      iVar6 = -param_4;
    }
    uVar9 = local_38;
    if (0 < iVar6) {
      uVar9 = -local_38;
    }
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = -iVar6;
    }
    func_00100584((undefined8 *)&local_34,iVar4,uVar9);
    local_54 = local_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    uVar10 = func_001138B4(local_3c,local_40);
    (*(undefined4 *)((char *)&local_60 + 4)) = (undefined4)((ulonglong)uVar10 >> 0x20);
    (*(undefined4 *)((char *)&local_60 + 0)) = (int)uVar10 + DAT_00300c44;
    uVar9 = local_38;
    if (iVar6 < 1) {
      local_54 = local_54 + DAT_00300c44;
      uVar11 = func_00300750((uint *)&local_60,&local_54,local_38);
    }
    else {
      local_54 = local_54 - DAT_00300c44;
      uVar11 = func_00300720((uint *)&local_60,&local_54,local_38);
    }
    (*(undefined4 *)((char *)&local_60 + 4)) = (undefined4)(uVar11 >> 0x20);
    uVar3 = uVar9;
    uVar5 = (*(undefined4 *)((char *)&local_60 + 4));
    if ((uVar11 & 0xffff) != 0) {
      uVar3 = 0xffffffff;
      uVar5 = 0x7fffffff;
    }
    lVar12 = CONCAT44(uVar5,uVar3);
    local_58 = uVar9;
    if (param_5 != 0) {
      uVar9 = 0;
      (*(undefined4 *)((char *)&local_60 + 0)) = 0;
      while( true ) {
        uVar3 = (uint)((ulonglong)lVar12 >> 0x20);
        uVar7 = (uint)lVar12 | uVar3;
        if ((uVar7 == 0) || (0x10 < (int)uVar9)) break;
        lVar12 = func_00300180((uint)lVar12,uVar3);
        param_2[uVar9] = (char)uVar7 + '0';
        uVar9 = uVar9 + 1;
      }
      if (lVar12 != 0) {
        if ((uint)local_60 != 0) goto LAB_003009b2;
        param_4 = 0x11;
        param_5 = 0;
        goto LAB_00300886;
      }
      uVar8 = uVar9;
      for (iVar6 = 0; uVar8 = uVar8 - 1, iVar6 < (int)uVar8; iVar6 = iVar6 + 1) {
        cVar1 = param_2[iVar6];
        param_2[iVar6] = param_2[uVar8];
        param_2[uVar8] = cVar1;
      }
      local_48 = (uVar9 - param_4) - 1;
      local_44 = uVar9;
LAB_003009b2:
      param_2[local_44] = '\0';
      local_24[1] = local_44;
      *local_24 = local_48;
      local_24[2] = param_5;
      return;
    }
    iVar6 = 0;
    local_60 = uVar11;
    uVar9 = param_4;
    while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
      lVar12 = func_00300180((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20));
      iVar6 = iVar6 + 0x30;
      param_2[uVar9] = (char)iVar6;
    }
    bVar2 = true;
    if (lVar12 == 0) {
      if (*param_2 == '0') {
        bVar2 = false;
        uVar8 = uVar8 - 1;
      }
    }
    else {
      bVar2 = false;
      uVar8 = uVar8 + 1;
    }
    local_48 = uVar8;
    local_44 = param_4;
    if (bVar2) goto LAB_003009b2;
  } while( true );
}

