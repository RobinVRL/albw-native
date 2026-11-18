#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001A56C8(int param_1,float fparam_0);
extern int func_001A5D24(int param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A7D4(void);
extern int func_0065A6FC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_001a6718;
extern float DAT_001a671c;
extern float DAT_001a6720;
extern int DAT_001a6724;
extern float DAT_001a6728;
extern float DAT_001a672c;

// USA 001A65D8 <- EU 001A65D8 (Ghidra, non-matching)
// GLOBAL DAT_001a6718 int *
// GLOBAL DAT_001a671c float
// GLOBAL DAT_001a6720 float
// GLOBAL DAT_001a6724 int
// GLOBAL DAT_001a6728 float
// GLOBAL DAT_001a672c float

undefined4 func_001A65D8(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x948),DAT_001a6718[-1],*DAT_001a6718,
                DAT_001a671c);
  func_001A56C8(param_1,DAT_001a6720);
  iVar1 = func_001A5D24(param_1);
  if (iVar1 == 0) {
    fVar4 = *(float *)(param_1 + 0x91c) - *(float *)(param_1 + 0x3d0);
    fVar5 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x3d8);
    fVar4 = fVar4 * fVar4 + fVar5 * fVar5;
    if (DAT_001a6724 < (int)ALBW_AS_U32(fVar4)) {
      if (*(uint *)(param_1 + 0x8e0) < 0x78) {
        puVar2 = (uint *)func_0058A7D4();
        uVar3 = func_00111A64(puVar2);
        iVar1 = (int)((ulonglong)uVar3 * 0x78 >> 0x20) + 0x3c;
        if (iVar1 == 0) {
          fVar4 = DAT_001a6728;
        }
        *(int *)(param_1 + 0x8e4) = iVar1;
        if (iVar1 == 0) {
          *(float *)(param_1 + 0x8e8) = fVar4;
        }
        else {
          fVar4 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x8e8) = DAT_001a672c / fVar4;
        }
        *(undefined4 *)(param_1 + 0x8e0) = 0;
      }
      func_00115C70(afStack_28,(float *)(param_1 + 0x91c),(float *)(param_1 + 0x3d0));
      iVar1 = func_0068C690(afStack_28);
      *(int *)(param_1 + 0x948) = iVar1;
    }
    if (*(uint *)(param_1 + 0x8e4) <= *(uint *)(param_1 + 0x8e0)) {
      return func_0065A6FC((undefined4 *)(param_1 + 0x8bc),0);
    }
    *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
  }
  else {
    func_0065A6FC((undefined4 *)(param_1 + 0x8bc),2);
  }
  return 0;
}

