#include "ghidra_types.h"

extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0032651C(int param_1,undefined4 param_2);
extern int func_0052107C(int param_1);
extern int *DAT_00326890;
extern float DAT_00326894;
extern float DAT_00326898;
extern undefined4 DAT_0032689c;
extern undefined4 DAT_003268a0;
extern undefined4 DAT_003268a4;
extern int DAT_003268a8;

// USA 003267DC <- EU 003267B8 (Ghidra, non-matching)
// GLOBAL DAT_00326890 int *
// GLOBAL DAT_00326894 float
// GLOBAL DAT_00326898 float
// GLOBAL DAT_0032689c undefined4
// GLOBAL DAT_003268a0 undefined4
// GLOBAL DAT_003268a4 undefined4
// GLOBAL DAT_003268a8 int

void func_003267DC(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_10 (*(int *)(albw_frame + 0x10))
  #define local_c (*(undefined4 *)(albw_frame + 0x14))
  uVar2 = DAT_003268a0;
  fVar1 = DAT_00326898;
  if (((*(int *)(*DAT_00326890 + 0x44) != 0) && (*(int *)(*DAT_00326890 + 0x44) == param_1[0x128]))
     && (param_1[0x103] != 0)) {
    fVar4 = ALBW_AS_F32(param_1[0xf8]) - DAT_00326894;
    param_1[0xf8] = (int)ALBW_AS_U32(fVar4);
    if (fVar4 < fVar1) {
      fVar4 = fVar1;
    }
    param_1[0xf5] = (int)ALBW_AS_U32((fVar4 + ALBW_AS_F32(param_1[0xf5])));
    local_1c = param_1[0x126];
    local_20 = DAT_0032689c;
    local_18 = DAT_0032689c;
    func_0014EEC8((int)param_1,(uint)(param_1 + 0xf4),&local_20,uVar2,ALBW_AS_F32(param_1[0x126]));
    bVar3 = func_0052107C((int)param_1);
    if (bVar3) {
      local_c = DAT_003268a4;
      local_10 = DAT_003268a8;
      func_00150A84(param_1,&local_10,0);
      func_0032651C((int)param_1,3);
    }
  }
  return;
}

