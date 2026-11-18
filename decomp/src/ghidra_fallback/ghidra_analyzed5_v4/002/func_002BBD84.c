#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004F4A68();
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_002bbe68;
extern int DAT_002bbe6c;

// USA 002BBD84 <- EU 002BBD60 (Ghidra, non-matching)
// GLOBAL DAT_002bbe68 float
// GLOBAL DAT_002bbe6c int

undefined4 func_002BBD84(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 ((int *)(albw_frame + 0x1c))
  fVar6 = *(float *)(param_2 + 8);
  if (fVar6 <= DAT_002bbe68) {
    fVar6 = -fVar6;
  }
  if ((*(char *)(param_1 + 0x8c0) == '\x02') && ((int)ALBW_AS_U32(fVar6) < DAT_002bbe6c)) {
    local_2c = func_0068C690((float *)(param_2 + 4));
    local_2c = (*(int *)(param_1 + 0x8f8) + -0x80000000) - local_2c;
    iVar1 = func_0058E2B8(&local_2c);
    if (iVar1 < 0x60000000) {
      pfVar2 = (float *)func_00520FC0();
      func_00115C70(afStack_38,pfVar2,(float *)(param_1 + 0x3d0));
      iVar3 = func_0068C690(afStack_38);
      uVar4 = iVar1 + 0x20000000U >> 0x1e;
      iVar1 = uVar4 * 0x40000000;
      if (uVar4 == iVar3 + 0x20000000U >> 0x1e) {
        local_28 = iVar3 - (iVar1 + 0x40000000);
        uVar4 = func_0058E2B8(&local_28);
        local_24[0] = iVar3 - (iVar1 + -0x40000000);
        uVar5 = func_0058E2B8(local_24);
        if (uVar4 < uVar5) {
          iVar3 = iVar1 + 0x40000000;
        }
        else {
          iVar3 = iVar1 + -0x40000000;
        }
      }
      *(int *)(param_1 + 0x8f8) = iVar3;
    }
  }
  return func_004F4A68(param_1,param_2);
}

