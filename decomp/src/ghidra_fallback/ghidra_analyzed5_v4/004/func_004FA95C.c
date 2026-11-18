#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_0054D884(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern undefined4 *DAT_004faac8;
extern undefined4 DAT_004faacc;
extern undefined4 *DAT_004faad0;
extern undefined4 DAT_004faad4;
extern undefined4 DAT_004faad8;
extern undefined4 DAT_004faadc;
extern undefined4 DAT_004faae0;

// USA 004FA95C <- EU 004FA934 (Ghidra, non-matching)
// GLOBAL DAT_004faac8 undefined4 *
// GLOBAL DAT_004faacc undefined4
// GLOBAL DAT_004faad0 undefined4 *
// GLOBAL DAT_004faad4 undefined4
// GLOBAL DAT_004faad8 undefined4
// GLOBAL DAT_004faadc undefined4
// GLOBAL DAT_004faae0 undefined4

undefined4 * func_004FA95C(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  
  if (((-1 < (int)param_3) && (param_4 != 0)) &&
     (puVar2 = (undefined4 *)func_0010BAB4(0x5c), puVar2 != (undefined4 *)0x0)) {
    puVar3 = func_0010DA7C(puVar2,0,3);
    uVar9 = DAT_004faae0;
    uVar1 = DAT_004faadc;
    puVar2 = DAT_004faac8;
    uVar6 = DAT_004faac8[1];
    uVar7 = DAT_004faac8[2];
    puVar3[4] = *DAT_004faac8;
    puVar3[5] = uVar6;
    puVar3[6] = uVar7;
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    puVar3[9] = puVar2[2];
    *puVar3 = DAT_004faacc;
    puVar3[10] = param_2;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[7] = uVar6;
    puVar3[8] = uVar7;
    puVar2 = DAT_004faad0;
    puVar3[0xf] = 0;
    uVar6 = puVar2[0x11];
    puVar3[0x10] = puVar2[0x10];
    puVar3[0x11] = uVar6;
    uVar6 = DAT_004faad8;
    puVar3[0xe] = DAT_004faad4;
    puVar3[0x12] = puVar3 + 0xe;
    puVar3[0x13] = 0;
    puVar3[0x15] = uVar6;
    puVar3[0x16] = uVar1;
    puVar3[0x14] = 0;
    uVar6 = *puVar2;
    puVar3[0x11] = puVar2[1];
    puVar3[0xf] = puVar3;
    puVar3[0x10] = uVar6;
    fVar8 = func_0054DE3C(param_1,param_3,1);
    puVar3[4] = uVar9;
    puVar3[5] = ALBW_AS_U32(fVar8);
    puVar3[6] = uVar9;
    iVar4 = func_0054D884(*(int *)(param_1 + 0x2d0) + 0x18,param_3);
    puVar3[7] = *(undefined4 *)(iVar4 + 4);
    puVar3[8] = *(undefined4 *)(iVar4 + 8);
    puVar3[9] = *(undefined4 *)(iVar4 + 0xc);
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar2 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = func_0034CAA0(puVar5);
    }
    puVar3[0xd] = puVar2;
    iVar4 = func_0054D964(param_1,param_3);
    puVar3[0xb] = iVar4;
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x28) = 0;
      *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) & 0xffffe0ff;
    }
    puVar3[0x13] = param_4;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

