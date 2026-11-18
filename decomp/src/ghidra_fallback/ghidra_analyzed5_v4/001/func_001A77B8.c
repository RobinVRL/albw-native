#include "ghidra_types.h"

extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern float func_005287F4(int param_1,float *param_2,uint *param_3,uint *param_4);
extern int func_0058A8F0(int param_1);
extern int func_0065A840(undefined4 *param_1,undefined1 param_2);

// USA 001A77B8 <- EU 001A77B8 (Ghidra, non-matching)

undefined4 func_001A77B8(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 ((uint *)(albw_frame + 0xc))
  fVar4 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar4);
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    local_14[0] = 0;
    fVar4 = func_005287F4(param_1,&local_18,(uint *)0x0,local_14);
    bVar3 = SBORROW4((int)ALBW_AS_U32(fVar4),0x3f800000);
    bVar2 = (int)ALBW_AS_U32(fVar4) + -0x3f800000 < 0;
    if (fVar4 != 1.0) {
      bVar2 = local_18 < fVar4;
      bVar3 = NAN(local_18) || NAN(fVar4);
    }
    if ((fVar4 == 1.0 || local_18 == fVar4) || bVar2 != bVar3) {
      local_14[0] = 0;
      fVar4 = func_005287F4(param_1,(float *)0x0,(uint *)0x0,local_14);
      *(float *)(param_1 + 0x95c) = fVar4;
      return func_0065A840((undefined4 *)(param_1 + 0x8bc),4);
    }
    func_0065A840((undefined4 *)(param_1 + 0x8bc),0);
  }
  return 0;
}

