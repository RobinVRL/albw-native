#include "ghidra_types.h"

extern int func_00100AC4(uint *param_1,uint param_2,uint *param_3);
extern int func_0030058C(int param_1);
extern int DAT_003004cc;

// GLOBAL DAT_003004cc int
// USA 0030036C <- EU 00300348 (Ghidra, function missing from the decomp table)

undefined8 func_0030036C(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint * *)(albw_frame + 0x0))
  #define local_18 (*(uint * *)(albw_frame + 0x8))
  uVar1 = 0;
  local_18 = param_2;
  do {
    param_1[8] = uVar1;
LAB_00300352:
    uVar1 = (*(code *)param_1[3])(param_1);
    iVar6 = DAT_003004cc;
    if (uVar1 == 0) goto LAB_003004c8;
    if (uVar1 != 0x25) {
      pcVar5 = (code *)param_1[1];
      uVar4 = param_1[2];
      goto LAB_003004be;
    }
    uVar4 = 0;
    while (((uVar1 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar1 && (uVar1 < 0x31)) &&
           (uVar2 = (uint)*(byte *)(iVar6 + uVar1 + 0x30034e), uVar2 != 0))) {
      uVar4 = uVar4 | uVar2;
    }
    if ((int)(uVar4 << 0x1e) < 0) {
      uVar4 = uVar4 & 0xfffffffb;
    }
    param_1[7] = 0;
    iVar6 = 0;
    param_1[6] = 0;
    do {
      if (uVar1 == 0x2a) {
        uVar1 = *local_18;
        local_18 = local_18 + 1;
        param_1[iVar6 + 6] = uVar1;
        uVar1 = (*(code *)param_1[3])(param_1);
        if (iVar6 == 1) {
          if ((int)param_1[7] < 0) {
            uVar4 = uVar4 & 0xffffffdf;
          }
          break;
        }
      }
      else {
        iVar3 = func_0030058C(uVar1);
        if (iVar3 != 0) {
          local_20 = param_1 + iVar6;
          local_20[6] = uVar1 - 0x30;
          while( true ) {
            uVar1 = (*(code *)param_1[3])(param_1);
            iVar3 = func_0030058C(uVar1);
            if (iVar3 == 0) break;
            local_20[6] = (local_20[6] * 10 + uVar1) - 0x30;
          }
        }
        if (iVar6 == 1) break;
      }
      if (uVar1 != 0x2e) break;
      uVar1 = (*(code *)param_1[3])(param_1);
      uVar4 = uVar4 | 0x20;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    if ((int)param_1[6] < 0) {
      param_1[6] = -param_1[6];
      uVar4 = uVar4 | 1;
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 & 0xffffffef;
    }
    if ((uVar1 == 0x6c) || (uVar1 == 0x68)) {
      uVar2 = (*(code *)param_1[3])(param_1);
      if (uVar2 == uVar1) {
        if (uVar1 == 0x6c) goto LAB_003004aa;
        uVar1 = 0x400;
        goto LAB_0030045a;
      }
      if (uVar1 == 0x6c) {
        uVar1 = 0x40;
      }
      else {
        uVar1 = 0x100;
      }
      uVar4 = uVar4 | uVar1;
      uVar1 = uVar2;
    }
    else {
      if (uVar1 != 0x4c) {
        if (uVar1 == 0x6a) {
LAB_003004aa:
          uVar1 = 0x80;
          goto LAB_0030045a;
        }
        if ((uVar1 != 0x74) && (uVar1 != 0x7a)) goto LAB_00300470;
      }
      uVar1 = 0;
LAB_0030045a:
      uVar4 = uVar4 | uVar1;
      uVar1 = (*(code *)param_1[3])(param_1);
    }
LAB_00300470:
    if (uVar1 == 0) {
LAB_003004c8:
      return CONCAT44(local_20,param_1[8]);
    }
    if (uVar1 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x800;
      uVar1 = uVar1 + 0x20;
    }
    *param_1 = uVar4;
    iVar6 = func_00100AC4(param_1,uVar1,local_18);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        local_18 = local_18 + 1;
      }
      else {
        local_18 = (uint *)(((int)local_18 + 7U & 0xfffffff8) + 8);
      }
      goto LAB_00300352;
    }
    pcVar5 = (code *)param_1[1];
    uVar4 = param_1[2];
LAB_003004be:
    (*pcVar5)(uVar1,uVar4);
    uVar1 = param_1[8] + 1;
  } while( true );
}

