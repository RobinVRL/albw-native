#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001514C8(int param_1);
extern int func_00291CF0(int param_1,float *param_2,float *param_3);
extern int func_00581F54(int param_1,undefined4 *param_2,int param_3);
extern int *DAT_00261300;
extern float DAT_00261304;
extern int *DAT_00261308;

// USA 002611BC <- EU 002611E4 (Ghidra, non-matching)
// GLOBAL DAT_00261300 int *
// GLOBAL DAT_00261304 float
// GLOBAL DAT_00261308 int *

void func_002611BC(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined2 *)(albw_frame + 0x1c))
  #define local_42 (*(undefined2 *)(albw_frame + 0x1e))
  #define local_40 (*(undefined2 *)(albw_frame + 0x20))
  #define local_3e (*(undefined2 *)(albw_frame + 0x22))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  iVar2 = func_001514C8(param_1);
  if (iVar2 == 0) {
    iVar4 = *DAT_00261300;
    local_60 = DAT_00261304;
    local_5c = DAT_00261304;
    local_58 = DAT_00261304;
    local_54 = DAT_00261304;
    local_50 = DAT_00261304;
    local_4c = DAT_00261304;
    local_44 = 0;
    local_40 = 0xffff;
    local_48 = 0;
    local_42 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0;
    fVar8 = DAT_00261304;
    func_00115C70(&local_38,(float *)(param_1 + 0x3d0),*(float **)(iVar4 + 0x1c));
    piVar1 = DAT_00261308;
    iVar2 = 0;
    fVar7 = local_30;
    fVar5 = local_38;
    fVar6 = local_34;
    while (((iVar3 = (int)*(short *)(param_1 + 0x5e + iVar2 * 6), iVar3 < 1 ||
            (iVar3 = func_00581F54(*piVar1,&local_60,iVar3), iVar3 == 0)) ||
           (func_00115C70(&local_38,&local_60,(float *)(param_1 + 0x3d0)),
           fVar5 * local_38 + fVar6 * local_34 + fVar7 * local_30 < fVar8))) {
      iVar2 = iVar2 + 1;
      if (0x5f < iVar2) {
        return;
      }
    }
    func_00291CF0(iVar4,&local_60,(float *)(param_1 + 0x3d0));
  }
  return;
}

