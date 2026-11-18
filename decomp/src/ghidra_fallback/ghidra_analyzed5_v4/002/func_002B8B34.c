#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_002b8c54;
extern float DAT_002b8c58;
extern float DAT_002b8c5c;

// USA 002B8B34 <- EU 002B8B10 (Ghidra, non-matching)
// GLOBAL DAT_002b8c54 float
// GLOBAL DAT_002b8c58 float
// GLOBAL DAT_002b8c5c float

undefined4 func_002B8B34(int param_1,uint *param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  fparam_0 = DAT_002b8c54;
  *(undefined1 *)(param_1 + 0xb3d) = 0;
  func_004D80A4(&local_50,*param_2,fparam_0);
  local_4c = DAT_002b8c58;
  fVar4 = DAT_002b8c58;
  func_004D80A4(&local_44,*(uint *)(param_1 + 0xa24),fparam_0);
  if (fVar4 <= local_50 * *(float *)(param_1 + 0x9c4) + local_4c * *(float *)(param_1 + 0x9c8) +
               local_48 * *(float *)(param_1 + 0x9cc)) {
    uVar1 = 0;
  }
  else {
    local_40 = fVar4;
    if ((uint)ALBW_AS_U32(DAT_002b8c5c) <
        (uint)ALBW_AS_U32((local_44 * *(float *)(param_1 + 0x9c4) + fVar4 * *(float *)(param_1 + 0x9c8) +
              local_3c * *(float *)(param_1 + 0x9cc)))) {
      pfVar2 = (float *)func_00520FC0();
      func_00115C70(&local_50,pfVar2,(float *)(param_1 + 0x9f4));
      local_4c = fVar4;
      func_00115E10(&local_38,&local_44,&local_50);
      if (fVar4 < local_34) {
        uVar3 = *(int *)(param_1 + 0xa24) + 0x40000000;
      }
      else {
        uVar3 = *(int *)(param_1 + 0xa24) + 0xc0000000;
      }
      *param_2 = uVar3;
    }
    else {
      func_00115C70(&local_2c,(float *)(param_1 + 0x9f4),(float *)(param_1 + 0x3d0));
      local_38 = local_2c;
      local_34 = ALBW_AS_F32(uStack_28);
      uStack_30 = uStack_24;
      *(undefined1 *)(param_1 + 0xb3d) = 1;
      uVar3 = func_0068C690(&local_38);
      *param_2 = uVar3;
    }
    uVar1 = 1;
  }
  return uVar1;
}

