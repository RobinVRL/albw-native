#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_005646CC(undefined1 *param_1,float *param_2);
extern float *DAT_0033199c;
extern float DAT_003319a0;
extern float *DAT_003319a4;
extern float *DAT_003319a8;
extern float *DAT_003319ac;
extern float *DAT_003319b0;

// USA 00331688 <- EU 00331664 (Ghidra, non-matching)
// GLOBAL DAT_0033199c float *
// GLOBAL DAT_003319a0 float
// GLOBAL DAT_003319a4 float *
// GLOBAL DAT_003319a8 float *
// GLOBAL DAT_003319ac float *
// GLOBAL DAT_003319b0 float *

undefined4 func_00331688(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define auStack_28 ((undefined4 *)(albw_frame + 0x18))
  piVar3 = (int *)(param_1 + 0x410);
  if (*(int *)(param_1 + 0x410) != 0) {
    if (*(int **)(param_1 + 0x414) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x414),param_2,param_3,param_4);
      func_00168E9C(*(int **)(param_1 + 0x414),*(int *)(param_1 + 0x410),(int *)0x0);
    }
    fVar7 = DAT_003319a0;
    pfVar1 = DAT_0033199c;
    pfVar4 = DAT_0033199c + 4;
    if (*(int *)(param_1 + 0x420) == 0) {
      if (*(int *)(param_1 + 0x428) != 0) {
        iVar2 = *(int *)(param_1 + 0x424) + 1;
        *(int *)(param_1 + 0x424) = iVar2;
        fVar6 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x428),(byte)(in_fpscr >> 0x15) & 3)
        ;
        if (fVar7 != fVar5) {
          fVar7 = (fVar6 - fVar7) / (fVar5 - fVar7);
        }
        local_38 = *DAT_003319a4 + (*pfVar1 - *DAT_003319a4) * fVar7;
        local_34 = DAT_003319a4[1] + (pfVar1[1] - DAT_003319a4[1]) * fVar7;
        local_30 = DAT_003319a4[2] + (pfVar1[2] - DAT_003319a4[2]) * fVar7;
        local_2c = DAT_003319a4[3] + (pfVar1[3] - DAT_003319a4[3]) * fVar7;
        func_005646CC((undefined1 *)auStack_28,&local_38);
        func_004CF5DC(*(int *)(param_1 + 0x410),*(int *)(param_1 + 0x41c),0,auStack_28);
        local_38 = *DAT_003319a8 + (*pfVar4 - *DAT_003319a8) * fVar7;
        local_34 = DAT_003319a8[1] + (pfVar1[5] - DAT_003319a8[1]) * fVar7;
        local_30 = DAT_003319a8[2] + (pfVar1[6] - DAT_003319a8[2]) * fVar7;
        local_2c = DAT_003319a8[3] + (pfVar1[7] - DAT_003319a8[3]) * fVar7;
        func_005646CC((undefined1 *)auStack_28,&local_38);
        func_004CF5DC(*piVar3,*(int *)(param_1 + 0x41c),1,auStack_28);
        *(uint *)(*piVar3 + 0x164) = *(uint *)(*piVar3 + 0x164) | 0x40000000;
        if (*(uint *)(param_1 + 0x428) <= *(uint *)(param_1 + 0x424)) {
          *(undefined4 *)(param_1 + 0x420) = 1;
          *(undefined4 *)(param_1 + 0x428) = 0;
        }
      }
    }
    else if ((*(int *)(param_1 + 0x420) == 1) && (*(int *)(param_1 + 0x428) != 0)) {
      iVar2 = *(int *)(param_1 + 0x424) + 1;
      *(int *)(param_1 + 0x424) = iVar2;
      fVar6 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x428),(byte)(in_fpscr >> 0x15) & 3);
      if (fVar7 != fVar5) {
        fVar7 = (fVar6 - fVar7) / (fVar5 - fVar7);
      }
      local_38 = *pfVar1 + (*DAT_003319ac - *pfVar1) * fVar7;
      local_34 = pfVar1[1] + (DAT_003319ac[1] - pfVar1[1]) * fVar7;
      local_30 = pfVar1[2] + (DAT_003319ac[2] - pfVar1[2]) * fVar7;
      local_2c = pfVar1[3] + (DAT_003319ac[3] - pfVar1[3]) * fVar7;
      func_005646CC((undefined1 *)auStack_28,&local_38);
      func_004CF5DC(*(int *)(param_1 + 0x410),*(int *)(param_1 + 0x41c),0,auStack_28);
      local_38 = *pfVar4;
      local_38 = local_38 + (*DAT_003319b0 - local_38) * fVar7;
      local_34 = pfVar1[5] + (DAT_003319b0[1] - pfVar1[5]) * fVar7;
      local_30 = pfVar1[6] + (DAT_003319b0[2] - pfVar1[6]) * fVar7;
      local_2c = pfVar1[7] + (DAT_003319b0[3] - pfVar1[7]) * fVar7;
      func_005646CC((undefined1 *)auStack_28,&local_38);
      func_004CF5DC(*piVar3,*(int *)(param_1 + 0x41c),1,auStack_28);
      if (*(uint *)(param_1 + 0x428) <= *(uint *)(param_1 + 0x424)) {
        *(undefined4 *)(param_1 + 0x420) = 2;
        *(undefined4 *)(param_1 + 0x428) = 0;
      }
    }
    return func_004CEAF0(*(int *)(param_1 + 0x410));
  }
  return 0;
}

