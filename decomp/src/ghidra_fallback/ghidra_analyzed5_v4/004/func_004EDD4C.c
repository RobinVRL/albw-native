#include "ghidra_types.h"

extern int func_004EDEFC(int param_1,float *param_2,int param_3,int param_4);
extern int func_00589DFC(int param_1,int param_2);
extern undefined4 DAT_004ede70;
extern undefined4 DAT_004ede74;

// USA 004EDD4C <- EU 004EDD24 (Ghidra, non-matching)
// GLOBAL DAT_004ede70 undefined4
// GLOBAL DAT_004ede74 undefined4

undefined4 func_004EDD4C(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((undefined4 *)(albw_frame + 0x0))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined2 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined1 *)(albw_frame + 0x38))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  iVar1 = param_1[4];
  iVar3 = *(int *)(param_3 + 0x1c);
  puVar5 = local_60;
  puVar4 = local_60;
  bVar7 = *(float *)(iVar1 + 0x34) == *(float *)(iVar3 + 0x40);
  bVar8 = *(float *)(iVar3 + 0x40) <= *(float *)(iVar1 + 0x34);
  if (!bVar8 || bVar7) {
    bVar7 = *(float *)(iVar3 + 0x34) == *(float *)(iVar1 + 0x40);
    bVar8 = *(float *)(iVar1 + 0x40) <= *(float *)(iVar3 + 0x34);
  }
  if (!bVar8 || bVar7) {
    bVar7 = *(float *)(iVar1 + 0x38) == *(float *)(iVar3 + 0x44);
    bVar8 = *(float *)(iVar3 + 0x44) <= *(float *)(iVar1 + 0x38);
    if (!bVar8 || bVar7) {
      bVar7 = *(float *)(iVar3 + 0x38) == *(float *)(iVar1 + 0x44);
      bVar8 = *(float *)(iVar1 + 0x44) <= *(float *)(iVar3 + 0x38);
    }
    if (!bVar8 || bVar7) {
      bVar7 = *(float *)(iVar1 + 0x3c) == *(float *)(iVar3 + 0x48);
      bVar8 = *(float *)(iVar3 + 0x48) <= *(float *)(iVar1 + 0x3c);
      if (!bVar8 || bVar7) {
        bVar7 = *(float *)(iVar3 + 0x3c) == *(float *)(iVar1 + 0x48);
        bVar8 = *(float *)(iVar1 + 0x48) <= *(float *)(iVar3 + 0x3c);
      }
      if (!bVar8 || bVar7) {
        iVar1 = func_00589DFC((int)param_1,param_3);
        uVar2 = 0;
        if (iVar1 != 0) {
          local_60[0] = DAT_004ede74;
          local_44 = DAT_004ede70;
          local_18 = 0x1f;
          local_3c = 0;
          local_38 = 0;
          local_40 = 0x1f;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          if ((param_1[7] == 0 && param_2 == (float *)0x0) && (*(int *)(param_3 + 4) == 0)) {
            puVar5 = (undefined4 *)0x0;
            puVar6 = (undefined1 *)puVar5;
          }
          else {
            puVar6 = (undefined1 *)0x1;
          }
          iVar1 = (**(code **)(*param_1 + 0x18))(param_1,puVar5);
          if (iVar1 == 0) {
            return 0;
          }
          if (puVar6 == (undefined1 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          uVar2 = func_004EDEFC((int)param_1,param_2,(int)puVar4,param_3);
        }
        return uVar2;
      }
    }
  }
  return 0;
}

