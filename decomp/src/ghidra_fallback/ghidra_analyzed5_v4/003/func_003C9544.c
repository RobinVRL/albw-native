#include "ghidra_types.h"

extern int func_0010FB48(int param_1);
extern int func_003C9764(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6);
extern int func_003C97C4(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int DAT_003c95c4;
extern int DAT_003c95c8;
extern undefined4 DAT_003c95cc;
extern int DAT_003c95d0;

// USA 003C9544 <- EU 003C9520 (Ghidra, non-matching)
// GLOBAL DAT_003c95c4 int
// GLOBAL DAT_003c95c8 int
// GLOBAL DAT_003c95cc undefined4
// GLOBAL DAT_003c95d0 int

/* WARNING: Variable defined which should be unmapped: objStack_30 */

int func_003C9544(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 ((int *)(albw_frame + 0x10))
  iVar2 = DAT_003c95c4;
  local_20[0] = *(int *)(DAT_003c95c4 + 0x10);
  objStack_30[1] = 0xc;
  objStack_30[0] = param_2;
  iVar6 = func_003C9764(local_20,&local_28,7,2,param_2,0xc);
  uVar5 = uStack_24;
  uVar4 = local_28;
  if (-1 < iVar6) {
    uVar8 = *(undefined4 *)(iVar2 + 0x10);
    puVar7 = func_0010FB48(DAT_003c95c8);
    uVar3 = DAT_003c95cc;
    iVar9 = DAT_003c95d0;
    uVar1 = extraout_r1;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = DAT_003c95cc;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      puVar7[1] = uVar8;
      iVar9 = 0;
      uVar1 = uVar3;
    }
    *param_1 = puVar7;
    iVar6 = 0;
    if (iVar9 < 0) {
      objStack_30[0] = *(uint *)(iVar2 + 0x10);
      func_003C97C4(objStack_30,uVar1,local_28,uStack_24);
      iVar6 = iVar9;
    }
  }
  return iVar6;
}

