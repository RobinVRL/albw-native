#include "ghidra_types.h"

extern int func_0048A828(int param_1,int param_2,int param_3,int param_4,float *param_5,undefined4 param_6 ,undefined4 param_7);
extern int func_0048B130(undefined4 *param_1,int param_2);
extern int func_004927C8(undefined4 *param_1,int param_2,float fparam_0,float fparam_1);
extern float DAT_0048a7f8;
extern float DAT_0048a7fc;

// USA 0048A744 <- EU 0048A71C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_0048a7f8 float
// GLOBAL DAT_0048a7fc float

undefined4 * func_0048A744(int param_1,int param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define auStack_124 ((undefined4 *)(albw_frame + 0xc))
  #define local_78 (*(int *)(albw_frame + 0xb8))
  #define auStack_74 ((undefined1 *)(albw_frame + 0xbc))
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = param_2;
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  if ((iVar1 == 0 || iVar3 == 0) && (param_4 != 0)) {
    func_004927C8(auStack_124,*(int *)(param_1 + 4),DAT_0048a7fc,DAT_0048a7f8);
    func_0048B130(&local_78,(int)auStack_124);
    (**(code **)(local_78 + 0x10))(&local_78,auStack_74);
    func_0048A828(param_1,param_2,param_3,param_4,param_5,auStack_124,&local_78);
    return auStack_124;
  }
  puVar2 = (undefined4 *)
           func_0048A828(param_1,param_2,param_3,param_4,param_5,iVar1,
                         *(undefined4 *)(param_1 + 0xc));
  return puVar2;
}

