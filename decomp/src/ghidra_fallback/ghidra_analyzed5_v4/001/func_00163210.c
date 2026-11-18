#include "ghidra_types.h"

extern int func_001635F8(int param_1,uint param_2,float fparam_0);
extern int func_0028B008(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F68AC();
extern int func_004FB208(int param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00658604(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001632fc;
extern float DAT_00163300;
extern int *DAT_00163304;

// USA 00163210 <- EU 00163214 (Ghidra, non-matching)
// GLOBAL DAT_001632fc int *
// GLOBAL DAT_00163300 float
// GLOBAL DAT_00163304 int *

undefined4 func_00163210(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_r2;
  float *in_r3;
  float *pfVar2;
  
  pfVar2 = in_r3;
  if ((param_2 == 0) && (*(int *)(*DAT_001632fc + 0x44) != 0)) {
    if (*(byte *)(param_1 + 0x920) == 0) {
      pfVar2 = (float *)0x0;
      in_r2 = (undefined4 *)0x0;
      iVar1 = func_004FB208(param_1,0,(float *)0x0,0,0);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
        func_00658604((undefined4 *)(param_1 + 0x8bc),0xb);
      }
    }
    else {
      func_001635F8(param_1,(uint)*(byte *)(param_1 + 0x920),DAT_00163300);
      in_r2 = (undefined4 *)0x0;
      func_004F5BD8(param_1,(uint *)0x0,(int **)0x0,in_r3);
      iVar1 = func_0052FBA0(*DAT_00163304 + 0x3dbbc,*(uint *)(param_1 + 0x8f8));
      if (iVar1 != 0) {
        in_r2 = (undefined4 *)(param_1 + 0x3d0);
        func_0028B008(iVar1,(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                            *(int *)(param_1 + 0x900) * 0x30),in_r2,(undefined4 *)(param_1 + 1000));
      }
    }
  }
  return func_004F68AC(param_1,param_2,in_r2,pfVar2);
}

