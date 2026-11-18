#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_0052107C(int param_1);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d6a5c;
extern float DAT_001d6a60;
extern float DAT_001d6a64;
extern char s_WaterCrown_001d6a68[];

// USA 001D6994 <- EU 001D6994 (Ghidra, non-matching)
// GLOBAL DAT_001d6a5c float
// GLOBAL DAT_001d6a60 float
// GLOBAL DAT_001d6a64 float
// GLOBAL s_WaterCrown_001d6a68 string

undefined4 func_001D6994(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  fVar1 = DAT_001d6a60;
  fVar4 = *(float *)(param_1 + 0x3e0) - DAT_001d6a5c;
  *(float *)(param_1 + 0x3e0) = fVar4;
  if ((uint)ALBW_AS_U32(fVar1) <= (uint)ALBW_AS_U32(fVar4)) {
    fVar4 = DAT_001d6a64;
  }
  *(float *)(param_1 + 0x3e0) = fVar4;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  if ((*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc)) &&
     (iVar3 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0), iVar3 == 0)) {
    return func_0065C988((undefined4 *)(param_1 + 0x4d4),6);
  }
  bVar2 = func_0052107C(param_1);
  if (bVar2) {
    if (*(int *)(param_1 + 0x344) != 0) {
      func_004A1B9C(aiStack_18,*(int *)(param_1 + 0x344),(uint *)s_WaterCrown_001d6a68);
    }
    func_0065C988((undefined4 *)(param_1 + 0x4d4),0x11);
  }
  return 0;
}

