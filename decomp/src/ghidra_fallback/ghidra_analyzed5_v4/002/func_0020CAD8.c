#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_0020cb94;
extern int DAT_0020cb98;

// USA 0020CAD8 <- EU 0020CAD8 (Ghidra, non-matching)
// GLOBAL DAT_0020cb94 undefined4
// GLOBAL DAT_0020cb98 int

undefined4 func_0020CAD8(int *param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x24))
  iVar1 = func_0058A8F0((int)param_1);
  if (iVar1 != 0) {
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_14,pfVar2,(float *)(param_1 + 0xf4));
    local_20 = local_14;
    uStack_1c = uStack_10;
    uStack_18 = uStack_c;
    local_2c = func_0068C690(&local_20);
    local_2c = (param_1[0xfa] + -0x80000000) - local_2c;
    uVar3 = func_0058E2B8(&local_2c);
    if (0x3fffffff < uVar3) {
      return func_0065D630(param_1 + 0x22f,0x10);
    }
    func_0065D630(param_1 + 0x22f,0x15);
    param_1[0x2f2] = 0;
    local_24 = DAT_0020cb94;
    local_28 = DAT_0020cb98;
    func_00150A84(param_1,&local_28,0);
  }
  return 0;
}

