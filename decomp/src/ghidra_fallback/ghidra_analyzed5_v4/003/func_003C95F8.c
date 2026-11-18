#include "ghidra_types.h"

extern int func_0010FB48(int param_1);
extern int func_003C9764(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6);
extern int func_003C97C4(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int DAT_003c9684;
extern int DAT_003c9688;
extern undefined4 DAT_003c968c;
extern int DAT_003c9690;

// USA 003C95F8 <- EU 003C95D4 (Ghidra, non-matching)
// GLOBAL DAT_003c9684 int
// GLOBAL DAT_003c9688 int
// GLOBAL DAT_003c968c undefined4
// GLOBAL DAT_003c9690 int

/* WARNING: Variable defined which should be unmapped: objStack_38 */

int func_003C95F8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 extraout_r1;
  int iVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_38 ((uint *)(albw_frame + 0x8))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 ** *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(int *)(albw_frame + 0x24))
  iVar2 = DAT_003c9684;
  objStack_38[0] = (uint)&local_24;
  local_28 = 1;
  uStack_20 = 1;
  local_1c = *(int *)(DAT_003c9684 + 0x10);
  objStack_38[1] = 1;
  local_24 = (undefined4 **)objStack_38[0];
  iVar6 = func_003C9764(&local_1c,&local_30,param_2,1,objStack_38[0],1);
  uVar5 = local_2c;
  uVar4 = local_30;
  if (-1 < iVar6) {
    uVar9 = *(undefined4 *)(iVar2 + 0x10);
    puVar7 = func_0010FB48(DAT_003c9688);
    uVar3 = DAT_003c968c;
    iVar8 = DAT_003c9690;
    uVar1 = extraout_r1;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = DAT_003c968c;
      puVar7[1] = uVar9;
      puVar7[3] = uVar5;
      puVar7[2] = uVar4;
      iVar8 = 0;
      uVar1 = uVar3;
    }
    *param_1 = puVar7;
    iVar6 = 0;
    if (iVar8 < 0) {
      objStack_38[0] = *(uint *)(iVar2 + 0x10);
      func_003C97C4(objStack_38,uVar1,local_30,local_2c);
      iVar6 = iVar8;
    }
  }
  return iVar6;
}

