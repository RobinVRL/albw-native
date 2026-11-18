#include "ghidra_types.h"

extern int func_0010FB48(int param_1);
extern int func_0068F5E8(uint *param_1,uint *param_2,ushort *param_3,uint *param_4,int param_5, ushort *param_6);
extern int func_0068F9A8(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4);
extern undefined4 DAT_003c82d4;
extern uint DAT_003c82d8;

// USA 003C8238 <- EU 003C8214 (Ghidra, non-matching)
// GLOBAL DAT_003c82d4 undefined4
// GLOBAL DAT_003c82d8 uint

/* WARNING: Variable defined which should be unmapped: objStack_58 */

uint func_003C8238(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint unaff_r5;
  undefined4 unaff_r6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_44 (*(uint *)(albw_frame + 0x1c))
  #define auStack_40 ((uint *)(albw_frame + 0x20))
  #define auStack_34 ((uint *)(albw_frame + 0x2c))
  #define auStack_28 ((ushort *)(albw_frame + 0x38))
  if (*param_3 == 4) {
    objStack_58[1] = param_3[1];
  }
  else {
    objStack_58[1] = 0;
  }
  objStack_58[0] = 1;
  uVar1 = func_0068F5E8((uint *)(param_1 + 0x20),auStack_34,auStack_28,auStack_40,1,
                        (ushort *)objStack_58[1]);
  if (-1 < (int)uVar1) {
    unaff_r5 = 0xffffffff;
    unaff_r6 = 0xffffffff;
    uVar1 = func_0068F9A8((uint *)(param_1 + 0x20),&uStack_44,objStack_58,auStack_40);
    if (-1 < (int)uVar1) {
      uVar1 = 0;
      unaff_r5 = objStack_58[1];
      unaff_r6 = uStack_50;
    }
  }
  if (-1 < (int)uVar1) {
    puVar2 = func_0010FB48(param_1 + 0xf4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = DAT_003c82d4;
      puVar2[1] = param_1;
      puVar2[2] = unaff_r5;
      puVar2[3] = unaff_r6;
      puVar2[5] = *(undefined4 *)(param_1 + 4);
    }
    *param_2 = puVar2;
    uVar1 = DAT_003c82d8;
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

