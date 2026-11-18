#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00512E74(int param_1);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern float DAT_005136bc;
extern undefined4 DAT_005136c0;
extern float DAT_005136c4;
extern uint DAT_005136c8;

// USA 00513588 <- EU 00513560 (Ghidra, non-matching)
// GLOBAL DAT_005136bc float
// GLOBAL DAT_005136c0 undefined4
// GLOBAL DAT_005136c4 float
// GLOBAL DAT_005136c8 uint

/* WARNING: Variable defined which should be unmapped: objStack_70 */

void func_00513588(int param_1)

{
  int iVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_005136bc;
  iVar1 = func_00512E74(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x3e0) = DAT_005136c0;
  }
  if (**(int **)(*(int *)(param_1 + 0x4b0) + 0x14) == 2) {
    objStack_70[0] = 0;
    objStack_70[1] = 0;
    iVar1 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x4cc),param_1 + 0x4d4,0x100,0,0);
    if (iVar1 != 0) {
      func_0066B94C((undefined4 *)(param_1 + 0x48c),9);
    }
  }
  fVar3 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x3d4);
  if (fVar3 <= DAT_005136c4) {
    fVar3 = -fVar3;
  }
  fVar4 = DAT_005136c4;
  if ((DAT_005136c8 < *(uint *)(param_1 + 0x3e0)) && ((int)ALBW_AS_U32(fVar3) < 0x3f800000)) {
    func_0066B94C((undefined4 *)(param_1 + 0x48c),0xd);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x4b0) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < fVar4) {
      if (fVar4 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    puVar2 = (uint *)func_002C11E8((int *)objStack_70,2,6,0);
    func_0016898C(*(int *)(param_1 + 0x4b0),puVar2);
  }
  return;
}

